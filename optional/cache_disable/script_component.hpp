#define COMPONENT cache_disable
#include "\x\cba\addons\main\script_mod.hpp"


#ifdef DEBUG_ENABLED_CACHE_DISABLE
	#define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_CACHE_DISABLE
	#define DEBUG_SETTINGS DEBUG_SETTINGS_CACHE_DISABLE
#endif

#include "\x\cba\addons\main\script_macros.hpp"