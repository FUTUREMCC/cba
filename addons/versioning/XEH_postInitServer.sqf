#include "script_component.hpp"

if (SLX_XEH_MACHINE select 1) exitWith { LOG("WARNING: YOUR MACHINE WAS DETECTED AS SERVER INSTEAD OF CLIENT!") };

GVAR(versions_serv) = + GVAR(versions); // For latest versions
GVAR(versions_server) = + GVAR(versions); // For legacy versions

publicVariable QUOTE(GVAR(versions_serv));
publicVariable QUOTE(GVAR(versions_server)); // TODO: Deprecate?

// Paranoid; yet pretty annoying gamebreaking issue :-)
QUOTE(GVAR(versions_serv)) addPublicVariableEventHandler
{
	private ["_params"];
	_params = _this select 1;
	diag_log [diag_frameNo, diag_tickTime, time, _params, "WARNING: Some client seems to have overriden the versions array; please report to CBA devs!"];
	diag_log [GVAR(versions), GVAR(version_serv)];
	if (isServer && isDedicated) then {
		GVAR(versions_serv) = GVAR(versions);
		publicVariable QUOTE(GVAR(versions_serv));
	};
};

QUOTE(GVAR(mismatch)) addPublicVariableEventHandler
{
	private ["_params"];
	_params = _this select 1;
	[format["%1 - Not running! (Machine: %2)", _params select 1, _params select 0], QUOTE(COMPONENT), [CBA_display_ingame_warnings, true, true]] call CBA_fnc_debug;
};

private ["_str"];
_str = 'if(isServer)exitWith{};0 = objNull spawn { sleep 1; sleep 1; _func={GVAR(mismatch)=[format["%2 (%1)",name player, player],_this];publicVariable QUOTE(GVAR(mismatch));_this spawn{_t=format["You are missing the following mod: %1",_this];diag_log text _t;sleep 2;player globalChat _t}};';
[GVAR(versions_serv), {
	_cfg = (configFile >> "CfgSettings" >> "CBA" >> "Versioning" >> _key);
	_addon = if (isClass _cfg) then { if (isText (_cfg >> "main_addon")) then { getText (_cfg >> "main_addon") } else { _key + "_main" }; } else { _key + "_main" }; 
	// TODO: Make sensitive to level, if -2, do not check for mod
	_str = _str + format['if !(isClass(configFile >> "CfgPatches" >> "%1"))exitWith{"%1" call _func};', _addon];
}] call CBA_fnc_hashEachPair;
ADD(_str,"};");
// Actually disconnect em?
// endMission "END1"
CBA_logic setVehicleInit _str;
processInitCommands;
