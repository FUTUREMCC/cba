﻿


/* // validate params */


if (typeName _this != typeName []) exitWith {diag_log _msg};
if (count _this != 3) exitWith {diag_log _msg};
if (typeName (_this select 0) != typeName "") exitWith {diag_log _msg};
if (typeName (_this select 1) != typeName []) exitWith {diag_log _msg};
if !(typeName (_this select 2) in [typeName [], typeName ""]) exitWith {diag_log _msg};
_i = 0;
{



	{
		GVAR(typeMenuSources) set [_i, -1];






/* diag_log ['h', GVAR(typeMenuSources)]; */