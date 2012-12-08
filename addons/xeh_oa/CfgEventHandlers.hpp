// TODO: Sort out A2 from OA!

class Extended_PreInit_EventHandlers {
	class SLX_BIS_CCP {
		init = QUOTE(call COMPILE_FILE2(\ca\communityconfigurationproject_e\ai_madetankgunnersuseatandheammo\muzzle\init.sqf));
	};
};

// Extended EH classes, where new events are defined.
class Extended_Init_EventHandlers
{
	// Vehicles.
	class StaticCannon /* : StaticWeapon */ {
		SLX_BIS = QUOTE(if(isNil 'BIS_Effects_Init') then { call COMPILE_FILE2(\ca\Data\ParticleEffects\SCRIPTS\init.sqf) });
	};

	class M252 /* : StaticMortar */ {
		SLX_BIS = QUOTE(if(isNil 'BIS_Effects_Init') then { call COMPILE_FILE2(\ca\Data\ParticleEffects\SCRIPTS\init.sqf) });
	};
	class 2b14_82mm /* : StaticMortar */ {
		SLX_BIS = QUOTE(if(isNil 'BIS_Effects_Init') then { call COMPILE_FILE2(\ca\Data\ParticleEffects\SCRIPTS\init.sqf) });
	};
	class FR_Miles /* : FR_Base */ {
		SLX_BIS = "(_this select 0) setidentity ""Miles""";
	};
	class FR_Cooper /* : FR_GL */ {
		SLX_BIS = "(_this select 0) setidentity ""Cooper""";
	};
	class FR_Sykes /* : FR_Marksman */ {
		SLX_BIS = "(_this select 0) setidentity ""Sykes""";
	};
	class FR_OHara /* : FR_Corpsman */ {
		SLX_BIS = "(_this select 0) setidentity ""Ohara""";
	};
	class FR_Rodriguez /* : FR_AR */ {
		SLX_BIS = "(_this select 0) setidentity ""Rodriguez""";
	};
	class TK_CIV_Takistani01_EP1 /* : TK_CIV_Takistani_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_1_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_2_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_3_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_4_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_5_co.paa""] select floor random 5]";
	};
	class TK_CIV_Takistani02_EP1 /* : TK_CIV_Takistani_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_1_co.paa"",""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_2_co.paa"",""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_3_co.paa"",""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_4_co.paa"",""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_5_co.paa""] select floor random 5]";
	};
	class TK_CIV_Takistani03_EP1 /* : TK_CIV_Takistani_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_1_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_2_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_3_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_4_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_5_co.paa""] select floor random 5]";
	};
	class TK_CIV_Takistani04_EP1 /* : TK_CIV_Takistani_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_1_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_2_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_3_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_4_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_5_co.paa""] select floor random 5]";
	};
	class TK_CIV_Takistani05_EP1 /* : TK_CIV_Takistani_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_1_co.paa"",""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_2_co.paa"",""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_3_co.paa"",""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_4_co.paa"",""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_5_co.paa""] select floor random 5]";
	};
	class TK_CIV_Takistani06_EP1 /* : TK_CIV_Takistani_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_1_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_2_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_3_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_4_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_5_co.paa""] select floor random 5]";
	};
	class TK_CIV_Woman01_EP1 /* : Woman_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_1_co.paa"",""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_2_co.paa"",""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_3_co.paa"",""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_4_co.paa"",""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_5_co.paa""] select floor random 5]";
	};
	class TK_CIV_Woman02_EP1 /* : TK_CIV_Woman01_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_1_co.paa"",""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_2_co.paa"",""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_3_co.paa"",""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_4_co.paa"",""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_5_co.paa""] select floor random 5]";
	};
	class TK_CIV_Woman03_EP1 /* : TK_CIV_Woman01_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_1_co.paa"",""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_2_co.paa"",""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_3_co.paa"",""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_4_co.paa"",""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_5_co.paa""] select floor random 5]";
	};
	class Dr_Annie_Baker_EP1 /* : CIV_EuroWoman01_EP1 */ {
		SLX_BIS = "(_this select 0) setidentity ""Dr_Annie_Baker""";
	};
	class Rita_Ensler_EP1 /* : CIV_EuroWoman02_EP1 */ {
		SLX_BIS = "(_this select 0) setidentity ""Rita_Ensler""";
	};
	class Haris_Press_EP1 /* : CIV_EuroMan01_EP1 */ {
		SLX_BIS = "(_this select 0) setidentity ""Haris_Press_EP1""";
	};
	class Dr_Hladik_EP1 /* : CIV_EuroMan02_EP1 */ {
		SLX_BIS = "(_this select 0) setidentity ""Dr_Hladik""";
	};
	class TK_INS_Soldier_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Soldier_2_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor04_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Soldier_3_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Soldier_4_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Soldier_AA_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor04_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Soldier_AT_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Soldier_TL_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor03_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor03_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor03_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Soldier_Sniper_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor03_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor03_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor03_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Soldier_AR_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Soldier_MG_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Bonesetter_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_3_co.paa""] select floor random 3]";
	};
	class TK_INS_Warlord_EP1 /* : TK_INS_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_2_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_3_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_4_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind03_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind03_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind03_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_5_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_AA_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_AT_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_HAT_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_TL_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_Sniper_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind03_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind03_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind03_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_AR_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind05_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind05_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind05_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Soldier_MG_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Bonesetter_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_3_co.paa""] select floor random 3]";
	};
	class TK_GUE_Warlord_EP1 /* : TK_GUE_Soldier_Base_EP1 */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_3_co.paa""] select floor random 3]";
	};
	class Land_Fire_burning /* : Land_Fire */ {
		SLX_BIS = "(_this select 0) inflame true";
	};
	class Land_Campfire_burning /* : Land_Campfire */ {
		SLX_BIS = "(_this select 0) inflame true";
	};
	class FlagCarrierUSA /* : FlagCarrier */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""\ca\data\flag_usa_co.paa""";
	};
	class FlagCarrierCDF /* : FlagCarrierUSA */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""\ca\data\flag_Chernarus_co.paa""";
	};
	class FlagCarrierRU /* : FlagCarrierUSA */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""\ca\data\flag_rus_co.paa""";
	};
	class FlagCarrierINS /* : FlagCarrierUSA */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""\ca\data\flag_ChDKZ_co.paa""";
	};
	class FlagCarrierGUE /* : FlagCarrierUSA */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""\ca\data\flag_NAPA_co.paa""";
	};
	class FlagCarrierChecked /* : FlagCarrierCore */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""\ca\structures\misc\armory\checkered_flag\data\checker_flag_co.paa""";
	};
	class Barrack2 /* : Land_Barrack2 */ {
		SLX_BIS = "(_this select 0) setdir getdir (_this select 0)";
	};
	class Mass_grave /* : Grave */ {
		SLX_BIS = QUOTE(dummy = _this spawn COMPILE_FILE2(ca\characters2\OTHER\scripts\fly.sqf));
	};
	class AAV /* : Tracked_APC */ {
		SLX_BIS = QUOTE(if(isNil 'BIS_Effects_Init') then { call COMPILE_FILE2(\ca\Data\ParticleEffects\SCRIPTS\init.sqf) };_this spawn COMPILE_FILE2(\ca\tracked2\AAV\scripts\init.sqf));
	};
	class Pickup_PK_TK_GUE_EP1 /* : Pickup_PK_base */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\CA\wheeled_E\Datsun_Armed\Data\datsun_trup1_EINS_CO"",""\CA\wheeled_E\Datsun_Armed\Data\datsun_trup2_EINS_CO"",""\CA\wheeled_E\Datsun_Armed\Data\datsun_trup3_EINS_CO""] select floor random 3]";
	};
	class A10 /* : Plane */ {
		SLX_BIS = QUOTE(if(isNil 'BIS_Effects_Init') then { call COMPILE_FILE2(\ca\Data\ParticleEffects\SCRIPTS\init.sqf) });
	};
	class Su34 /* : Plane */ {
		SLX_BIS = QUOTE(if(isNil 'BIS_Effects_Init') then { call COMPILE_FILE2(\ca\Data\ParticleEffects\SCRIPTS\init.sqf) });
	};
	class AH6X_EP1 /* : AH6_Base_EP1 */ {
		SLX_BIS = QUOTE(if(isNil 'BIS_Effects_Init') then { call COMPILE_FILE2(\ca\Data\ParticleEffects\SCRIPTS\init.sqf) });
		SLX_BIS2 = "(_this select 0) lockturret [[0],true];(_this select 0) lockturret [[1],true]";
	};
	class FlagCarrierUNO_EP1 /* : FlagCarrier */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_uno_co.paa""";
	};
	class FlagCarrierRedCrystal_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_rcrystal_co.paa""";
	};
	class FlagCarrierTFKnight_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_knight_co.paa""";
	};
	class FlagCarrierCDFEnsign_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_cdf_co.paa""";
	};
	class FlagCarrierRedCross_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_rcross_co.paa""";
	};
	class FlagCarrierUSArmy_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_usarmy_co.paa""";
	};
	class FlagCarrierTKMilitia_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_tkm_co.paa""";
	};
	class FlagCarrierRedCrescent_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_rcrescent_co.paa""";
	};
	class FlagCarrierGermany_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_ger_co.paa""";
	};
	class FlagCarrierNATO_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_nato_co.paa""";
	};
	class FlagCarrierBIS_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_bis_co.paa""";
	};
	class FlagCarrierCzechRepublic_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_cz_co.paa""";
	};
	class FlagCarrierPOWMIA_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_pow_co.paa""";
	};
	class FlagCarrierBLUFOR_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_blufor_co.paa""";
	};
	class FlagCarrierOPFOR_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_opfor_co.paa""";
	};
	class FlagCarrierINDFOR_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_indfor_co.paa""";
	};
	class FlagCarrierTakistan_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_tka_co.paa""";
	};
	class FlagCarrierTakistanKingdom_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_tkg_co.paa""";
	};
	class FlagCarrierUSA_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_us_co.paa""";
	};
	class FlagCarrierCDF_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_cr_co.paa""";
	};
	class FlagCarrierWhite_EP1 /* : FlagCarrierUNO_EP1 */ {
		SLX_BIS = "(_this select 0) setFlagTexture ""ca\Ca_E\data\flag_white_co.paa""";
	};
	
	class FlagCarrierIONblack_PMC /* : FlagCarrier */ {
		SLX_BIS = "(_this select 0) setFlagTexture 'ca\Ca_PMC\flag_ion_black_co';";
	};
	class FlagCarrierIONwhite_PMC /* : FlagCarrierIONblack_PMC */ {
		SLX_BIS = "(_this select 0) setFlagTexture 'ca\Ca_PMC\flag_ion_white_co';";
	};

	class Soldier_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\PMC_soldier\Data\bauer_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_3_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_4_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_5_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_1_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_3_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [2,[""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_CO.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2]";
	};
	class Soldier_Engineer_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Frost\Data\Frost_1_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_2_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_3_co.paa""] select floor random 3];";
	};
	class Soldier_Crew_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Frost\Data\Frost_1_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_2_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_3_co.paa""] select floor random 3];";
	};
	class Soldier_Medic_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Frost\Data\Frost_1_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_2_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_3_co.paa""] select floor random 3];";
	};
	class Soldier_TL_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Gracenko\Data\Gracenko_1_co.paa"",""\Ca\Characters_PMC\Gracenko\Data\Gracenko_2_co.paa"",""\Ca\Characters_PMC\Gracenko\Data\Gracenko_3_co.paa"",""\Ca\Characters_PMC\Gracenko\Data\Gracenko_4_co.paa""] select floor random 4];";
	};
	class Soldier_MG_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Asano\Data\tex1_1_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_2_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_3_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_4_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_5_co.paa""] select floor random 5];(_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\headgear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2];(_this select 0) setObjectTexture [2,[""ca\characters_pmc\asano\data\tex2_co.paa"",""ca\characters_pmc\asano\data\tex2_1_co.paa""] select floor random 2]";
	};
	class Soldier_Sniper_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\PMC_soldier\Data\bauer_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_3_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_4_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_5_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_1_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_3_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [2,[""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_CO.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2]";
	};
	class Soldier_GL_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Asano\Data\tex1_1_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_2_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_3_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_4_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_5_co.paa""] select floor random 5];(_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\headgear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2];(_this select 0) setObjectTexture [2,[""ca\characters_pmc\asano\data\tex2_co.paa"",""ca\characters_pmc\asano\data\tex2_1_co.paa""] select floor random 2]";
	};
	class Soldier_Bodyguard_AA12_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""ca\characters_pmc\dixon\data\european-man_02_co.paa"",""ca\characters_pmc\dixon\data\european-man_03_co.paa"",""ca\characters_pmc\dixon\data\european-man_04_co.paa"",""ca\characters_pmc\dixon\data\european-man_05_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""Ca\Characters_PMC\Dixon\Data\Dix_1_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_2_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_3_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_4_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_4_CO.paa""] select floor random 5]";
	};
	class Soldier_AA_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Asano\Data\tex1_1_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_2_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_3_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_4_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_5_co.paa""] select floor random 5];(_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\headgear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2];(_this select 0) setObjectTexture [2,[""ca\characters_pmc\asano\data\tex2_co.paa"",""ca\characters_pmc\asano\data\tex2_1_co.paa""] select floor random 2]";
	};
	class Soldier_AT_PMC /* : Soldier_Base_PMC */ {
		SLX_BIS = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Asano\Data\tex1_1_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_2_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_3_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_4_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_5_co.paa""] select floor random 5];(_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\headgear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2];(_this select 0) setObjectTexture [2,[""ca\characters_pmc\asano\data\tex2_co.paa"",""ca\characters_pmc\asano\data\tex2_1_co.paa""] select floor random 2]";
	};
	class Poet_PMC /* : Special_Character_Base_PMC */ {
		SLX_BIS = "(_this select 0) setidentity ""PMC_Poet""";
	};
	class Ry_PMC /* : Special_Character_Base_PMC */ {
		SLX_BIS = "(_this select 0) setidentity ""PMC_Ry""";
	};
	class Reynolds_PMC /* : Special_Character_Base_PMC */ {
		SLX_BIS = "(_this select 0) setidentity ""PMC_Reynolds_NoGlasses""";
	};
	class Tanny_PMC /* : Special_Character_Base_PMC */ {
		SLX_BIS = "(_this select 0) setidentity ""PMC_Tanny""";
	};
	class Dixon_PMC /* : Special_Character_Base_PMC */ {
		SLX_BIS = "(_this select 0) setidentity ""PMC_Dixon""";
	};
};

class Extended_firedBis_Eventhandlers { // New fired EH, uses BIS notation
	class Car {
		SLX_BIS_CCP = "_this call BIS_CPP_Muzzle_ForceReload";
	};

	class Tank {
		SLX_BIS_CCP = "_this call BIS_CPP_Muzzle_ForceReload";
	};

	class StaticCannon /* : StaticWeapon */ {
		SLX_BIS = "_this call BIS_Effects_EH_Fired";
	};
	class M252 /* : StaticMortar */ {
		SLX_BIS = "_this call BIS_Effects_EH_Fired";
	};
	class 2b14_82mm /* : StaticMortar */ {
		SLX_BIS = "_this call BIS_Effects_EH_Fired";
	};
	class A10 /* : Plane */ {
		SLX_BIS = "_this call BIS_Effects_EH_Fired";
	};
	class Su34 /* : Plane */ {
		SLX_BIS = "_this call BIS_Effects_EH_Fired";
	};
};

class Extended_firednear_Eventhandlers {
	class CAAnimalBase /* : Animal */ {
		SLX_BIS = "_this execFSM ""CA\animals2\Data\scripts\reactFire.fsm""";
	};
};
class Extended_hit_Eventhandlers {
	class TargetPopUpTarget /* : TargetBase */ {
		SLX_BIS = QUOTE([(_this select 0)] spawn COMPILE_FILE2(ca\misc\scripts\PopUpTarget.sqf));
	};
	class TargetEpopup /* : TargetBase */ {
		SLX_BIS = QUOTE([(_this select 0)] spawn COMPILE_FILE2(ca\misc\scripts\PopUpTarget.sqf));
	};
};
class Extended_killed_Eventhandlers {
	class A10 /* : Plane */ {
		SLX_BIS = "_this call BIS_Effects_EH_Killed";
	};
	class Su34 /* : Plane */ {
		SLX_BIS = "_this call BIS_Effects_EH_Killed";
	};
};

class DefaultEventHandlers;
