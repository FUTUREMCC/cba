/* ----------------------------------------------------------------------------
Function: CBA_fnc_getPos

Description:
	A function used to get the position of an entity.
Parameters:
	Marker, Object, Location, Group or Position
Example:
	_position = (group player) call CBA_fnc_getPos
Returns:
	Position (AGL) - [X,Y,Z]
Author:
	Rommel

---------------------------------------------------------------------------- */

switch (typename _this) do {
	case "OBJECT" : {
		getpos _this
	};
	case "GROUP" : {
		getpos (leader _this)
	};
	case "STRING" : {
		getmarkerpos _this
	};
	case "LOCATION" : {
		position _this
	};
	case "TASK" : {
		taskdestination _this
	};
	default {_this};
};