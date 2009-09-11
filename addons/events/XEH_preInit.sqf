#include "script_component.hpp"
/*
	MainDisplay KeyHandler, by Sickboy <sb_at_dev-heaven.net>

	Example:
	class CfgSettings { class CBA { class Keys { class sys_attachments { cqb = 33 }; }; }; };

	- Script (in sys_attachments addon (it has COMPONENT defined as sys_attachments)):
	[QUOTE(COMPONENT), "cqb", { _this call GVAR(keyPressed) }] call cba_keys_fAddHandlerFromConfig;
*/
LOG(MSG_INIT);

GVAR(keys_down) = []; GVAR(keys_up) = [];
for "_i" from 0 to 250 do
{
	GVAR(keys_down) set [_i, []];
	GVAR(keys_up) set [_i, []];
};

private ["_count"];
_count = (count (__cfg)) -1;
GVAR(actions) = "LOGIC" createVehicleLocal [0, 0, 0];

for "_i" from 0 to _count do
{
	_entry = (__cfg) select _i;
	if (isArray(_entry)) then
	{
		GVAR(actions) setVariable [configName _entry, []];
	};
};

PREP(actionHandler);
PREP(keyHandler);
//PREP(globalHitEvent);
//PREP(globalKilledEvent);

// Initialisation required by CBA events.
CBA_eventHandlers = "Logic" createVehicleLocal [0, 0];
// TODO: Verify if this code is okay; there can be no player object ready at PreInit, thus it's not very useful
if (isServer or (alive player)) then
{
	// We want all events, as soon as they start arriving.
	"CBA_e" addPublicVariableEventHandler { (_this select 1) call CBA_fnc_localEvent };
}
else
{
	// Ignore the last event that was sent out before we joined.
	[] spawn
	{
		waitUntil { alive player };
		"CBA_e" addPublicVariableEventHandler { (_this select 1) call CBA_fnc_localEvent};
	};
};

// loadGame EventHandler
//["CBA_loadGame", { LOG("Game load detected!") }] call CBA_fnc_addEventHandler;

/*
// Disabled - SB - 2009-07-22: Script scheduling seems to mess this up. Mostly spotted at dedicated server.
[] spawn
{
	// Based on the pretty much assumption that loadedGames are always back in time, not forward
	private ["_history"];
	waitUntil { time > 0 };
	_history = diag_frameNo;
	
	waitUntil
	{
		// Instead of + 1, using + 10, it seems script scheduling or something else can allow more than 1 frame skip per iteration
		if (_history + 10 < diag_frameNo) then
		{
				["CBA_loadGame"] call CBA_fnc_localEvent;
				diag_log text format["%1", _history];
		};
		_history = diag_frameNo;
		false
	};
};
*/

nil;