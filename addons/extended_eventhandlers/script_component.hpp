#define COMPONENT xeh
//#include "\x\cba\addons\main\script_mod.hpp"

// #define DEBUG_ENABLED_XEH

#define PUSH(var1,var2) var1 set [count (var1), var2]

#ifdef DEBUG_ENABLED_XEH
	#define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_XEH
	#define DEBUG_SETTINGS DEBUG_SETTINGS_XEH
#endif

#define LOG(MESSAGE) diag_log [diag_frameNo, diag_tickTime, time, MESSAGE]

#define INITPOST [_unit, "Extended_InitPost_EventHandlers"]


//#include "\x\cba\addons\main\script_macros.hpp"
