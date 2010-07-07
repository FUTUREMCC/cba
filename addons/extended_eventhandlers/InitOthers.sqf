/* Extended event handlers by Solus and Killswitch
*
* Get all inherited classes, then check if each inherited class has a
* counterpart in the extended event handlers classes. Then and add all lines
* from each matching EH class and set things up.
*
*/
#include "script_component.hpp"
private [
	"_unit", "_isExcluded", "_event", "_Extended_EH_Class", "_class",
	"_unitClass", "_classes", "_excludeClass", "_excludeClasses", "_handlers",
	"_handler", "_cfgEntry", "_scopeEntry", "_handlerEntry", "_excludeEntry",
	"_scope", "_i", "_t", "_xeh", "_event", "_replaceDEH"
];

#ifdef DEBUG_MODE_FULL
	//diag_log text format["(%1) XEH BEG: %2", time, _this];
#endif

// Get unit.
_unit = _this select 0;
_unitClass = typeOf _unit;

_ehSuper = inheritsFrom(configFile/"CfgVehicles"/_unitClass/"EventHandlers");
_hasDefaultEH = (configName(_ehSuper)=="DefaultEventhandlers");

_isExcluded = { (_unitClass isKindOf _excludeClass) || ({ _unitClass isKindOf _x }count _excludeClasses>0) };

// Get array of inherited classes of unit.
_classes = [_unitClass];
while {!((_classes select 0) in ["", "All"])} do
{
	_classes = [(configName (inheritsFrom (configFile/"CfgVehicles"/(_classes select 0))))]+_classes;
};

_f = {
	private ["_handlers", "_eventCus"];
	_eventCus = format["%1%2",_event, _this select 0];
	_handlers = _this select 1;
	_handlerEntry = _cfgEntry / _eventCus;
	_serverHandlerEntry = _cfgEntry / format["server%1", _eventCus];
	_clientHandlerEntry = _cfgEntry / format["client%1", _eventCus];
	// If the particular EH is private and vehicle is of the
	// "wrong" class, do nothing, ie don't add the EH.
	if !(_scope == 0 && (_unitClass != _class)) then
	{
		if (isText _handlerEntry) then
		{
			if (isText _replaceEntry) then
			{
				_replaceDEH = ({ (getText _replaceEntry) == _x }count["1", "true"]>0);
			}
			else
			{
				if (isNumber _replaceEntry) then
				{
					_replaceDEH = ((getNumber _replaceEntry) == 1);
				};
			};
			if !( [] call _isExcluded ) then
			{
				if (_hasDefaultEH && _replaceDEH) then
				{
					_handlers set [0, getText _handlerEntry];
				}
				else
				{
					_handlers set [count _handlers, getText _handlerEntry];
				};
			};
		};
		if (isServer) then
		{
			if (isText _serverHandlerEntry) then
			{
				_handlers set [count _handlers, getText _serverHandlerEntry];
			};
		};
		if !(isDedicated) then
		{
			if (isText _clientHandlerEntry) then
			{
				_handlers set [count _handlers, getText _clientHandlerEntry];
			};									
		};
	};
};

// Iterate over the above event types and set up any extended event handlers
// that might be defined.
{
	_event = _x;
	_Extended_EH_Class = format["Extended_%1_EventHandlers", _event];

	// Check each class to see if there is a counterpart in the extended event
	// handlers, add all lines from matching classes to an array, "_handlers"
	_handlers = []; _handlersPlayer = [];
	_excludeClass = "";
	_excludeClasses = [];
	
	// Does the vehicle's class EventHandlers inherit from the BIS
	// DefaultEventhandlers? If so, include BIS own default handler for the
	// event type currently being processed and make it the first
	// EH to be called.
	if (_hasDefaultEH && isText(configFile/"DefaultEventhandlers"/_event)) then
	{
		_handlers =[getText(configFile/"DefaultEventhandlers"/_event)];
	};
	
	// Search the mission config file (description.ext), then campaign
	// config file (description.ext) and finally addon config for
	// extended event handlers to use.
	{
		_configFile=_x;
		{
			_class = _x;
			if ((configName (_configFile/_Extended_EH_Class/_class))!= "") then
			{
				_i = 0;
				_t = count (_configFile/_Extended_EH_Class/_class);
				while { _i<_t } do
				{
					_cfgEntry = (_configFile/_Extended_EH_Class/_class) select _i;
					// Standard XEH event handler string
					if (isText _cfgEntry) then
					{
						_handlers set [count _handlers, getText _cfgEntry];
					}
					else
					{
						// Composite XEH event handler class
						if (isClass _cfgEntry) then
						{
							_scopeEntry = _cfgEntry / "scope";
							_excludeEntry = _cfgEntry / "exclude";
							_replaceEntry = _cfgEntry / "replaceDEH";
							_replaceDEH = false;

							if (isText _excludeEntry) then
							{
								_excludeClass = (getText _excludeEntry);
							}
							else
							{
								if (isArray _excludeEntry) then
								{
									_excludeClasses = (getArray _excludeEntry);
								};
							};
							_scope = if (isNumber _scopeEntry) then { getNumber _scopeEntry } else { 2 };
							// Handle event, serverEvent and clientEvent, for both normal and player
							{	_x call _f } forEach [["", _handlers], ["Player", _handlersPlayer]];
						};
					};
					_i = _i + 1;
				};
			};
		} forEach _classes;
	} forEach [configFile, campaignConfigFile, missionConfigFile];
	
	// Now concatenate all the handlers into one string
	_handler = "";
	{ _handler = _handler + _x + ";" } forEach _handlers;
	_handlerPlayer = "";
	{ _handlerPlayer = _handlerPlayer + _x + ";" } forEach _handlersPlayer;

	// Attach the compiled extended event handler to the unit.
	_xeh = format["Extended_%1EH", _event];
	_xehPlayer = format["Extended_%1EH_Player", _event];
	_unit setVariable [_xeh, [compile _handler]];
	_unit setVariable [_xehPlayer, compile _handlerPlayer];

	#ifdef DEBUG_MODE_FULL
	diag_log text format["(%1) XEH RUN: %2 - %3 - %4", time, _this, _event, _handler != ""];
	#endif
} forEach SLX_XEH_OTHER_EVENTS;

#ifdef DEBUG_MODE_FULL
diag_log text format["(%1) XEH END: %2", time, _this];
#endif

nil;
