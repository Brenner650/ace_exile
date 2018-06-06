////////////////////////////////////////////////////////////////////
//DeRap: ace_nightvision\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:06 2018 : 'file' last modified on Mon Apr 16 21:46:50 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_nightvision
	{
		name = "ACE3 - Night Vision";
		units[] = {};
		weapons[] = {"ACE_NVG_Gen1","ACE_NVG_Gen2","ACE_NVG_Gen4","ACE_NVG_Wide"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","KoffeinFlummi","PabstMirror"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_nightvision
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\nightvision\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_nightvision
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\nightvision\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_nightvision
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\nightvision\XEH_postInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayInterrupt
	{
		ace_nightvision_resetGrain = "if (ace_nightvision_ppeffectGrain> -1) then {ppEffectDestroy ace_nightvision_ppeffectGrain;};";
	};
};
class CfgVehicles
{
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_NVG_Gen1
			{
				name = "ACE_NVG_Gen1";
				count = 6;
			};
			class _xx_ACE_NVG_Gen2
			{
				name = "ACE_NVG_Gen2";
				count = 6;
			};
			class _xx_ACE_NVG_Gen4
			{
				name = "ACE_NVG_Gen4";
				count = 6;
			};
			class _xx_ACE_NVG_Wide
			{
				name = "ACE_NVG_Wide";
				count = 6;
			};
		};
	};
	class ACE_Module;
	class ace_nightvision_ModuleSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_nightvision_Module_DisplayName";
		icon = "\z\ace\addons\nightvision\UI\Icon_Module_ca.paa";
		category = "ACE";
		function = "ace_nightvision_fnc_initModule";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		author = "BaerMitUmlaut";
		class Arguments
		{
			class disableNVGsWithSights
			{
				displayName = "$STR_ace_nightvision_DisableNVGsWithSights_DisplayName";
				description = "$STR_ace_nightvision_DisableNVGsWithSights_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_nightvision_Module_Description";
		};
	};
};
class CfgWeapons
{
	class Binocular;
	class NVGoggles: Binocular
	{
		displayName = "$STR_ace_nightvision_NVG_Gen3_brown";
		modelOptics = "";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius = 0.15;
	};
	class O_NVGoggles_hex_F: NVGoggles
	{
		modelOptics = "";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius = 0.26;
	};
	class NVGogglesB_grn_F: NVGoggles
	{
		modelOptics = "\A3\weapons_f\reticle\optics_night";
	};
	class NVGoggles_OPFOR: NVGoggles
	{
		modelOptics = "";
		displayName = "$STR_ace_nightvision_NVG_Gen3_black";
	};
	class NVGoggles_INDEP: NVGoggles
	{
		modelOptics = "";
		displayName = "$STR_ace_nightvision_NVG_Gen3_green";
	};
	class ACE_NVG_Gen1: NVGoggles_OPFOR
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_nightvision_NVG_Gen1";
		ace_nightvision_generation = 1;
	};
	class ACE_NVG_Gen2: NVGoggles_INDEP
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_nightvision_NVG_Gen2";
		ace_nightvision_generation = 2;
	};
	class ACE_NVG_Gen4: NVGoggles
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_nightvision_NVG_Gen4";
		ace_nightvision_generation = 4;
	};
	class ACE_NVG_Wide: NVGoggles
	{
		author = "$STR_ace_common_ACETeam";
		modelOptics = "\z\ace\addons\nightvision\models\ACE_nvg_wide_optics";
		displayName = "$STR_ace_nightvision_NVG_FullScreen";
	};
	class ACE_NVG_Biocular: NVGoggles
	{
		scope = 1;
		modelOptics = "";
		author = "$STR_ace_common_ACETeam";
		descriptionShort = "Biocular nightvision goggles";
		displayName = "NV Goggles (Bio)";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_bluRadius = 0.13;
		ace_nightvision_eyeCups = 1;
	};
	class ACE_NVG_Monocular: NVGoggles
	{
		scope = 1;
		modelOptics = "";
		author = "$STR_ace_common_ACETeam";
		descriptionShort = "Monocular nightvision goggles";
		displayName = "NV Goggles (Mono)";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_bluRadius = 0.13;
	};
	class ACE_NVG_Binocular: NVGoggles
	{
		scope = 1;
		modelOptics = "";
		author = "$STR_ace_common_ACETeam";
		descriptionShort = "Binocular nightvision goggles";
		displayName = "NV Goggles (Bino)";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius = 0.15;
	};
	class ACE_NVG_Quadocular: NVGoggles
	{
		scope = 1;
		modelOptics = "";
		author = "$STR_ace_common_ACETeam";
		descriptionShort = "Quadocular nightvision goggles";
		displayName = "NV Goggles (Quad)";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius = 0.26;
	};
};
class ACE_Settings
{
	class ace_nightvision_disableNVGsWithSights
	{
		movedToSQF = 1;
	};
	class ace_nightvision_fogScaling
	{
		movedToSQF = 1;
	};
	class ace_nightvision_noiseScaling
	{
		movedToSQF = 1;
	};
	class ace_nightvision_effectScaling
	{
		movedToSQF = 1;
	};
	class ace_nightvision_aimDownSightsBlur
	{
		movedToSQF = 1;
	};
};
class RscPicture;
class RscText;
class RscTitles
{
	class ace_nightvision_title
	{
		idd = 10777;
		movingEnable = 1;
		enableSimulation = 1;
		enableDisplay = 1;
		onLoad = "with uiNamespace do {ace_nightvision_titleDisplay= _this select 0};";
		onunLoad = "";
		duration = 999999;
		fadein = 0;
		fadeout = 0;
		class controls
		{
			class Hexes: RscPicture
			{
				idc = 1000;
			};
			class Mask: RscPicture
			{
				idc = 1001;
			};
			class trippleHeadLeft: RscPicture
			{
				idc = 1002;
				text = "#(argb,8,8,3)color(0,0,0,1)";
				x = "safeZoneXAbs";
				Y = "safezoneY";
				W = "(safezoneX - safeZoneXAbs) * ((getResolution select 4)/(16/3))";
				H = "safeZoneH";
			};
			class trippleHeadRight: trippleHeadLeft
			{
				idc = 1003;
				x = "safeZoneXAbs + safeZoneWAbs - (safezoneX - safeZoneXABS) * ((getResolution select 4)/(16/3))";
			};
		};
	};
};
