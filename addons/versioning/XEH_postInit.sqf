#define DEBUG_MODE_FULL
#include "script_component.hpp"

#define SLEEP(TIME) _i = 0; while {_i < TIME} do { _i = _i + 1; sleep 1 }
#define __version configFile >> "CfgPatches" >> QUOTE(DOUBLES(configName _prefix,main)) >> "versionstr"
/*
	Basic, Generic Version Checking System - By Sickboy <sb_at_dev-heaven.net>
*/


SCRIPT(XEH_preInit);
ADDON = false;

GVAR(versions) = [[], "0.00"] call CBA_fnc_hashCreate;

private ["_prefix", "_version"];
for "_i" from 0 to (count (CFGSETTINGS) - 1) do
{
	_prefix = (CFGSETTINGS) select _i;
	if (isClass _prefix) then
	{
		_version = if (isText(__version)) then { getText(__version) } else { "0.00" };
		[GVAR(versions), configName _prefix, _version] call CBA_fnc_hashSet;
	};
};

FUNC(version_check) =
{
	private ["_localVersion"]; // _key, _value  are injected by the CBA_fnc_hashEachPair
	_localVersion = [GVAR(versions), _key] call CBA_fnc_hashGet;
	if (_localVersion != _value) then
	{
		// Default version mismatch handling, broadcast to all!
		[format["%1 - Version Mismatch! (Machine: %2, Server: %3, Local: %4)", _key, player, _value, _localVersion], QUOTE(COMPONENT), [true, true, true]] call CBA_fnc_debug;
		
		// Allow custom handler
		if (isText ((CFGSETTINGS) >> _key >> "handler")) then
		{
			[_value, _localVersion, player] spawn getText((CFGSETTINGS) >> _key >> "handler");
		};
	};
};

[] spawn
{
	TRACE_3("",isServer,GVAR(versions),GVAR(versions_srv));
	SLEEP(4); // Test workaround for JIP issue
	TRACE_3("",isServer,GVAR(versions),GVAR(versions_srv));
	
	if (isServer) then
	{
		GVAR(versions_srv) = GVAR(versions);
		publicVariable QUOTE(GVAR(versions_srv));
	} else {
		waitUntil {!(isNil QUOTE(GVAR(versions_srv)))};
		[GVAR(versions_srv), {_this call FUNC(version_check)}] call CBA_fnc_hashEachPair;
	};
};

// Announce initialization complete
ADDON = true;