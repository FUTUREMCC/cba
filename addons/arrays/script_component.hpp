#define COMPONENT arrays
#include "\x\cba\addons\main\script_macros.hpp"

#ifdef DEBUG_ARRAYS
	#define DEBUG
#endif

#ifdef DEBUGSETTINGS_ARRAYS
	#define DEBUGSETTINGS DEBUGSETTINGS_ARRAYS
#endif
#ifndef DEBUGSETTINGS_ARRAYS
	#define DEBUGSETTINGS DEFAULT_DEBUG
#endif