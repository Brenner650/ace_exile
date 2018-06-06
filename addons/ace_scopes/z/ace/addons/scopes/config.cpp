////////////////////////////////////////////////////////////////////
//DeRap: ace_scopes\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:09 2018 : 'file' last modified on Mon Apr 16 21:48:07 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_scopes
	{
		name = "ACE3 - Scopes";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","esteldunedain","Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_scopes
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\scopes\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_scopes
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\scopes\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_scopes
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\scopes\XEH_postInit.sqf'";
	};
};
class CfgSounds
{
	class ACE_Sound_Click;
	class ACE_Scopes_Click_1: ACE_Sound_Click
	{
		sound[] = {"\z\ace\addons\scopes\sounds\ACE_scopes_click.wav",3,2,200};
	};
	class ACE_Scopes_Click_2: ACE_Scopes_Click_1
	{
		sound[] = {"\z\ace\addons\scopes\sounds\ACE_scopes_click.wav",3.3,1.8,200};
	};
	class ACE_Scopes_Click_3: ACE_Scopes_Click_1
	{
		sound[] = {"\z\ace\addons\scopes\sounds\ACE_scopes_click.wav",2.8,2.3,200};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_scopes_adjustZero
				{
					displayName = "$STR_ace_scopes_AdjustZero";
					condition = "[ACE_player] call ace_scopes_fnc_canAdjustZero";
					statement = "[ACE_player] call ace_scopes_fnc_adjustZero";
					showDisabled = 0;
					priority = 0.2;
					exceptions[] = {"notOnMap","isNotInside","isNotSwimming","isNotSitting"};
				};
				class ace_scopes_resetZero
				{
					displayName = "$STR_ace_scopes_ResetZero";
					condition = "[ACE_player] call ace_scopes_fnc_canResetZero";
					statement = "[ACE_player] call ace_scopes_fnc_resetZero";
					showDisabled = 0;
					priority = 0.2;
					exceptions[] = {"notOnMap","isNotInside","isNotSwimming","isNotSitting"};
				};
			};
		};
	};
	class ACE_Module;
	class ace_scopes_ModuleSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_scopes_DisplayName";
		category = "ACE";
		function = "ace_scopes_fnc_initModuleSettings";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class enabled
			{
				displayName = "$STR_ace_scopes_enabled_DisplayName";
				description = "$STR_ace_scopes_enabled_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class forceUseOfAdjustmentTurrets
			{
				displayName = "$STR_ace_scopes_forceUseOfAdjustmentTurrets_DisplayName";
				description = "$STR_ace_scopes_forceUseOfAdjustmentTurrets_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class correctZeroing
			{
				displayName = "$STR_ace_scopes_correctZeroing_DisplayName";
				description = "$STR_ace_scopes_correctZeroing_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class overwriteZeroRange
			{
				displayName = "$STR_ace_scopes_overwriteZeroRange_DisplayName";
				description = "$STR_ace_scopes_overwriteZeroRange_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class defaultZeroRange
			{
				displayName = "$STR_ace_scopes_defaultZeroRange_DisplayName";
				description = "$STR_ace_scopes_defaultZeroRange_Description";
				typeName = "NUMBER";
				defaultValue = 100;
			};
			class zeroReferenceTemperature
			{
				displayName = "$STR_ace_scopes_zeroReferenceTemperature_DisplayName";
				description = "$STR_ace_scopes_zeroReferenceTemperature_Description";
				typeName = "NUMBER";
				defaultValue = 15;
			};
			class zeroReferenceBarometricPressure
			{
				displayName = "$STR_ace_scopes_zeroReferenceBarometricPressure_DisplayName";
				description = "$STR_ace_scopes_zeroReferenceBarometricPressure_Description";
				typeName = "NUMBER";
				defaultValue = 1013.25;
			};
			class zeroReferenceHumidity
			{
				displayName = "$STR_ace_scopes_zeroReferenceHumidity_DisplayName";
				description = "$STR_ace_scopes_zeroReferenceHumidity_Description";
				typeName = "NUMBER";
				defaultValue = 0.0;
			};
			class deduceBarometricPressureFromTerrainAltitude
			{
				displayName = "$STR_ace_scopes_deduceBarometricPressureFromTerrainAltitude_DisplayName";
				description = "$STR_ace_scopes_deduceBarometricPressureFromTerrainAltitude_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class simplifiedZeroing
			{
				displayName = "$STR_ace_scopes_simplifiedZeroing_displayName";
				description = "$STR_ace_scopes_simplifiedZeroing_description";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_scopes_Description";
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_Yorris: ItemCore
	{
		ACE_ScopeHeightAboveRail = 2.77224;
	};
	class optic_MRD: ItemCore
	{
		ACE_ScopeHeightAboveRail = 2.8;
	};
	class optic_Aco: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.69248;
	};
	class optic_ACO_grn: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.69248;
	};
	class optic_ACO_grn_smg: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.69248;
	};
	class optic_ACO_smg: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.69248;
	};
	class optic_Holosight: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.66933;
	};
	class optic_Holosight_smg: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.66933;
	};
	class optic_Arco: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.89287;
	};
	class optic_ERCO_blk_F: optic_Arco
	{
		ACE_ScopeHeightAboveRail = 3.48836;
	};
	class optic_Hamr: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.48584;
	};
	class optic_MRCO: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.88405;
	};
	class optic_Nightstalker: ItemCore
	{
		ACE_ScopeHeightAboveRail = 5.54325;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NCTALKEP
				{
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_NVS: ItemCore
	{
		ACE_ScopeHeightAboveRail = 5.54325;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NVS
				{
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_TWS: ItemCore
	{
		ACE_ScopeHeightAboveRail = 5.52874;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class TWS
				{
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_LRPS: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.2098;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					opticsZoomMin = 0.011;
					opticsZoomMax = 0.045;
					opticsZoomInit = 0.045;
					discretefov[] = {0.045,0.011};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_SOS: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.41328;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_DMS: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.86253;
		ACE_ScopeAdjust_Vertical[] = {-4,20};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_AMS_base: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.8933;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class AMS
				{
					opticsZoomMin = 0.0285;
					opticsZoomMax = 0.085;
					opticsZoomInit = 0.085;
					discretefov[] = {0.085,0.0285};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_KHS_base: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.30723;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class KHS
				{
					opticsZoomMin = 0.026;
					opticsZoomMax = 0.06;
					opticsZoomInit = 0.06;
					discretefov[] = {0.06,0.026};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_KHS_old: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.30723;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class KHS
				{
					opticsZoomMin = 0.026;
					opticsZoomMax = 0.06;
					opticsZoomInit = 0.06;
					discretefov[] = {0.06,0.026};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F{};
	class Rifle_Long_Base_F: Rifle_Base_F{};
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		ACE_RailHeightAboveBore = 5.07109;
		ACE_IronSightBaseAngle = -0.00160721;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto{};
		class FullAuto: Mode_FullAuto{};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		ACE_RailHeightAboveBore = 2.40874;
		ACE_IronSightBaseAngle = 0.216372;
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		ACE_RailHeightAboveBore = 2.40323;
		ACE_IronSightBaseAngle = 0.157545;
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 3.20768;
		ACE_IronSightBaseAngle = -0.166678;
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 3.22175;
		ACE_IronSightBaseAngle = -0.184641;
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 3.71491;
		ACE_IronSightBaseAngle = -0.134908;
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		ACE_RailHeightAboveBore = 2.68925;
		ACE_IronSightBaseAngle = 0.0182228;
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		ACE_RailHeightAboveBore = 0.996651;
		ACE_IronSightBaseAngle = 0.19812211;
	};
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		ACE_RailHeightAboveBore = 4.24282;
		ACE_IronSightBaseAngle = 0.00181939;
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		ACE_RailHeightAboveBore = 3.08883;
		ACE_RailBaseAngle = 0.019366;
		ACE_IronSightBaseAngle = 0.0399664;
	};
	class arifle_AKS_base_F: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 0;
		ACE_IronSightBaseAngle = 0.00574991;
	};
	class arifle_AKM_base_F: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 0;
		ACE_IronSightBaseAngle = 0.006273;
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 3.82508;
		ACE_IronSightBaseAngle = 0.0276926;
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 6.07588;
		ACE_IronSightBaseAngle = 0.0151815;
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 6.0787;
		ACE_IronSightBaseAngle = 0.0125245;
	};
	class arifle_ARX_base_F: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 2.81635;
		ACE_IronSightBaseAngle = 0.113024;
	};
	class arifle_katiba_Base_F: Rifle_Base_F{};
	class arifle_Katiba_F: arifle_katiba_Base_F
	{
		ACE_RailHeightAboveBore = 5.75468;
		ACE_IronSightBaseAngle = 0.0863227;
	};
	class arifle_Katiba_C_F: arifle_katiba_Base_F
	{
		ACE_RailHeightAboveBore = 5.75468;
		ACE_IronSightBaseAngle = 0.083419;
	};
	class arifle_Katiba_GL_F: arifle_katiba_Base_F
	{
		ACE_RailHeightAboveBore = 5.75468;
		ACE_IronSightBaseAngle = 0.0863227;
	};
	class arifle_MX_F: arifle_MX_Base_F
	{
		ACE_RailHeightAboveBore = 2.80201;
		ACE_IronSightBaseAngle = 0.19502;
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		ACE_RailHeightAboveBore = 2.80201;
		ACE_IronSightBaseAngle = 0.17142858;
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		ACE_RailHeightAboveBore = 2.40874;
		ACE_IronSightBaseAngle = 0.0154129;
	};
	class SDAR_base_F: Rifle_Base_F{};
	class arifle_SDAR_F: SDAR_base_F
	{
		ACE_RailHeightAboveBore = 0;
		ACE_IronSightBaseAngle = -0.0237516;
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		ACE_RailHeightAboveBore = 4.85355;
		ACE_RailBaseAngle = 0.0250956;
		ACE_IronSightBaseAngle = -0.159239;
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		ACE_RailHeightAboveBore = 4.41831;
		ACE_RailBaseAngle = 0.0217724;
		ACE_IronSightBaseAngle = 0.434847;
	};
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		ACE_RailHeightAboveBore = 4.05169;
		ACE_RailBaseAngle = 0.019366;
		ACE_IronSightBaseAngle = -0.122823;
	};
	class Tavor_base_F: Rifle_Base_F{};
	class arifle_TRG20_F: Tavor_base_F
	{
		ACE_RailHeightAboveBore = 4.30954;
		ACE_IronSightBaseAngle = 0.0338428;
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		ACE_RailHeightAboveBore = 4.30954;
		ACE_IronSightBaseAngle = 0.0317759;
	};
	class arifle_TRG21_GL_F: arifle_TRG21_F
	{
		ACE_RailHeightAboveBore = 4.30954;
		ACE_IronSightBaseAngle = -0.03428571;
	};
	class mk20_base_F: Rifle_Base_F{};
	class arifle_Mk20_F: mk20_base_F
	{
		ACE_RailHeightAboveBore = 4.57255;
		ACE_IronSightBaseAngle = -0.153292;
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		ACE_RailHeightAboveBore = 4.41539;
		ACE_IronSightBaseAngle = -0.137835;
	};
	class arifle_Mk20_GL_F: mk20_base_F
	{
		ACE_RailHeightAboveBore = 4.41539;
		ACE_IronSightBaseAngle = -0.1532926;
	};
	class EBR_base_F: Rifle_Long_Base_F{};
	class LRR_base_F: Rifle_Long_Base_F{};
	class GM6_base_F: Rifle_Long_Base_F{};
	class DMR_01_base_F: Rifle_Long_Base_F{};
	class DMR_02_base_F: Rifle_Long_Base_F{};
	class DMR_03_base_F: Rifle_Long_Base_F{};
	class DMR_04_base_F: Rifle_Long_Base_F{};
	class DMR_05_base_F: Rifle_Long_Base_F{};
	class DMR_06_base_F: Rifle_Long_Base_F{};
	class srifle_EBR_F: EBR_base_F
	{
		ACE_RailHeightAboveBore = 1.98812;
		ACE_IronSightBaseAngle = -0.00601782;
	};
	class srifle_LRR_F: LRR_base_F
	{
		ACE_RailHeightAboveBore = 3.20864;
		ACE_IronSightBaseAngle = -0.0302847;
	};
	class srifle_GM6_F: GM6_base_F
	{
		ACE_RailHeightAboveBore = 4.75572;
		ACE_IronSightBaseAngle = -0.165062;
	};
	class srifle_DMR_01_F: DMR_01_base_F
	{
		ACE_RailHeightAboveBore = 2.83284;
		ACE_IronSightBaseAngle = 0.234393;
	};
	class srifle_DMR_02_F: DMR_02_base_F
	{
		ACE_RailHeightAboveBore = 3.43913;
		ACE_IronSightBaseAngle = 0.013878;
	};
	class srifle_DMR_03_F: DMR_03_base_F
	{
		ACE_RailHeightAboveBore = 4.0795;
		ACE_IronSightBaseAngle = 0.0138099;
	};
	class srifle_DMR_04_F: DMR_04_base_F
	{
		ACE_RailHeightAboveBore = 2.38022;
		ACE_RailBaseAngle = 0.0171842;
	};
	class srifle_DMR_05_blk_F: DMR_05_base_F
	{
		ACE_RailHeightAboveBore = 3.91334;
		ACE_IronSightBaseAngle = 0.0123425;
	};
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		ACE_RailHeightAboveBore = 3.27488;
		ACE_IronSightBaseAngle = 0.018227;
	};
	class MMG_01_base_F;
	class MMG_02_base_F;
	class MMG_01_hex_F: MMG_01_base_F
	{
		ACE_RailHeightAboveBore = 4.73961;
		ACE_IronSightBaseAngle = -0.0101613;
	};
	class MMG_02_camo_F: MMG_02_base_F
	{
		ACE_RailHeightAboveBore = 5.01913;
		ACE_IronSightBaseAngle = 0.0136377;
	};
};
class RscText;
class RscPicture;
class RscTitles
{
	class ACE_Scopes_Zeroing
	{
		idd = -1;
		movingEnable = 0;
		enableSimulation = 1;
		enableDisplay = 1;
		onLoad = "uiNamespace setVariable [""ace_scopes_ZeroingDisplay"",_this select 0];";
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		name = "ace_scopes_Zeroing";
		class controls
		{
			class ACE_Scopes_Zeroing_BG: RscPicture
			{
				idc = 11;
				type = 0;
				text = "\z\ace\addons\scopes\UI\scopes_bg.paa";
				style = "48 + 0x800";
				scale = 1;
				sizeEx = 1;
				font = "RobotoCondensed";
				colorText[] = {1,1,1,1};
				colorBackground[] = {1,1,1,1};
				shadow = 1;
				x = "(0.5 - 0.4 / 2) * safezoneW + safezoneX";
				y = "0 * safezoneH + safezoneY";
				w = "0.4 * safezoneW";
				h = "0.3 * safezoneH";
			};
			class ACE_Scopes_Zeroing_Vertical: RscText
			{
				idc = 12;
				type = 0;
				style = 2;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "RobotoCondensed";
				text = "";
				colorText[] = {1,1,1,0.9};
				colorBackground[] = {1,0,0,0};
				shadow = 0;
				x = "(0.5 - 0.4 / 2 + 0.45*0.4) * safezoneW + safezoneX";
				y = "(0 + 0.19*0.3) * safezoneH + safezoneY";
				w = "0.04 * safezoneW";
				h = "0.025 * safezoneH";
			};
			class ACE_Scopes_Zeroing_Horizontal: RscText
			{
				idc = 13;
				type = 0;
				style = 2;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "RobotoCondensed";
				text = "";
				colorText[] = {1,1,1,0.9};
				colorBackground[] = {1,0,0,0};
				shadow = 0;
				x = "(0.5 - 0.4 / 2 + 0.6*0.4) * safezoneW + safezoneX";
				y = "(0 + 0.47*0.3) * safezoneH + safezoneY";
				w = "0.019 * safezoneW";
				h = "0.025 * safezoneH";
			};
		};
	};
};
class ACE_Settings
{
	class ace_scopes_enabled
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "BOOL";
		value = 1;
		displayName = "$STR_ace_scopes_enabled_displayName";
		description = "$STR_ace_scopes_enabled_description";
	};
	class ace_scopes_forceUseOfAdjustmentTurrets
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "BOOL";
		value = 0;
		displayName = "$STR_ace_scopes_forceUseOfAdjustmentTurrets_displayName";
		description = "$STR_ace_scopes_forceUseOfAdjustmentTurrets_description";
	};
	class ace_scopes_correctZeroing
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "BOOL";
		value = 1;
		displayName = "$STR_ace_scopes_correctZeroing_displayName";
		description = "$STR_ace_scopes_correctZeroing_description";
	};
	class ace_scopes_overwriteZeroRange
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "BOOL";
		value = 0;
		displayName = "$STR_ace_scopes_overwriteZeroRange_displayName";
		description = "$STR_ace_scopes_overwriteZeroRange_description";
	};
	class ace_scopes_defaultZeroRange
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "SCALAR";
		value = 100;
		displayName = "$STR_ace_scopes_defaultZeroRange_displayName";
		description = "$STR_ace_scopes_defaultZeroRange_description";
		sliderSettings[] = {0,1000,100,0};
	};
	class ace_scopes_zeroReferenceTemperature
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "SCALAR";
		value = 15;
		displayName = "$STR_ace_scopes_zeroReferenceTemperature_displayName";
		description = "$STR_ace_scopes_zeroReferenceTemperature_description";
		sliderSettings[] = {-55,55,15,0};
	};
	class ace_scopes_zeroReferenceBarometricPressure
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "SCALAR";
		value = 1013.25;
		displayName = "$STR_ace_scopes_zeroReferenceBarometricPressure_displayName";
		description = "$STR_ace_scopes_zeroReferenceBarometricPressure_description";
		sliderSettings[] = {0,1013.25,1013.25,2};
	};
	class ace_scopes_zeroReferenceHumidity
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "SCALAR";
		value = 0.0;
		displayName = "$STR_ace_scopes_zeroReferenceHumidity_displayName";
		description = "$STR_ace_scopes_zeroReferenceHumidity_description";
		sliderSettings[] = {0,1,0,2};
	};
	class ace_scopes_deduceBarometricPressureFromTerrainAltitude
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "BOOL";
		value = 0;
		displayName = "$STR_ace_scopes_deduceBarometricPressureFromTerrainAltitude_displayName";
		description = "$STR_ace_scopes_deduceBarometricPressureFromTerrainAltitude_description";
	};
	class ace_scopes_useLegacyUI
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "BOOL";
		value = 0;
		isClientSettable = 1;
		displayName = "$STR_ace_scopes_useLegacyUI_displayName";
		description = "$STR_ace_scopes_useLegacyUI_description";
	};
	class ace_scopes_simplifiedZeroing
	{
		category = "$STR_ace_scopes_DisplayName";
		typeName = "BOOL";
		value = 0;
		displayName = "$STR_ace_scopes_simplifiedZeroing_displayName";
		description = "$STR_ace_scopes_simplifiedZeroing_description";
	};
};
class ace_arsenal_stats
{
	class statBase;
	class ACE_scopeHorizontalLimits: statBase
	{
		scope = 2;
		priority = 3;
		stats[] = {"ACE_ScopeAdjust_Horizontal","ACE_ScopeAdjust_HorizontalIncrement"};
		displayName = "$STR_ace_scopes_statHorizontalLimits";
		showText = 1;
		textStatement = "params['_stat','_config']; private _limits = getArray (_config >> _stat select 0); format ['%1 / %2 MIL (∆ %3 MIL)',_limits select 0,_limits select 1,getNumber (_config >> _stat select 1)]";
		condition = "params['_stat','_config']; !((getArray (_config >> _stat select 0)) isEqualTo [])";
		tabs[] = {{},{0}};
	};
	class ACE_scopeVerticalLimits: ACE_scopeHorizontalLimits
	{
		stats[] = {"ACE_ScopeAdjust_Vertical","ACE_ScopeAdjust_VerticalIncrement"};
		priority = 2;
		displayName = "$STR_ace_scopes_statVerticalLimits";
	};
};
