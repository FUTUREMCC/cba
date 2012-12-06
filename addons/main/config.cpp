#include "script_component.hpp"

// Simply a package which requires other addons.
class CfgPatches {
	class ADDON	{
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		// "CBA_XEH",  would create circular dependency, however XEH is required by CBA common in any case :)
		requiredAddons[] = { "cba_common", "cba_arrays", "cba_hashes", "cba_strings", "cba_events", "cba_diagnostic", "cba_network", "cba_ai", "cba_vectors", "cba_versioning", "cba_ui", "cba_ui_helper", "cba_help" };
		versionDesc = "C.B.A.";
		VERSION_CONFIG;
		author[] = {"CBA Team"};
		authorUrl = "http://dev-heaven.net/projects/cca";
	};
};

class CfgMods {
	class PREFIX {
		dir = "CBA";
		name = "Community Base Addons";
		picture = "x\cba\addons\main\logo_cba_ca.paa";
		actionName = "Website";
		action = "http://dev-heaven.net/projects/cca";
		description = "Bugtracker: http://dev-heaven.net/projects/cca<br />Documentation: http://dev-heaven.net/projects/cca";
	};
};

class CfgSettings {
	class CBA {
		class Caching {
			functions = 1;
		};
		class Versioning {
			class PREFIX {
				class dependencies {

					// DISABLED 2012-12-05: No longer needed
					/*
					// CBA requiring CBA_A2, if A2 is found
					CBA_A2[] = {"cba_main_a2", {1,0,0}, "isClass(configFile >> 'CfgPatches' >> 'Chernarus')"};
					// CBA requiring CBA_OA, if OA is found
					CBA_OA[] = {"cba_main_oa", {1,0,0}, "isClass(configFile >> 'CfgPatches' >> 'Takistan')"};
					*/
					// CBA requiring CBA_TOH, if TOH is found
					CBA_TOH[] = {"cba_toh_main", {1,0,0}, "isClass(configFile >> 'CfgPatches' >> 'United_States_H')"};

					XEH[] = {"cba_xeh", {1,0,0}, "true"};
				};
			};
		};
		class Registry {
			class PREFIX {
				removed[] = {};
			};
		};
	};
};

#include "CfgVehicles.hpp"
