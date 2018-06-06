////////////////////////////////////////////////////////////////////
//DeRap: ace_vector\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:08 2018 : 'file' last modified on Mon Apr 16 21:49:01 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_vector
	{
		name = "ACE3 - Vector";
		units[] = {"ACE_Item_Vector"};
		weapons[] = {"ACE_Vector","ACE_VectorDay"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Ghost","Hamburger SV","commy2","bux578"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_vector
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\vector\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_vector
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\vector\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_vector
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\vector\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class ACE_Item_Vector: Item_Base_F
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_vector_VectorName";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_Vector
			{
				name = "ACE_Vector";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_Vector
			{
				name = "ACE_Vector";
				count = 6;
			};
		};
	};
};
class CfgWeapons
{
	class Binocular;
	class ACE_Vector: Binocular
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_vector_VectorName";
		descriptionShort = "$STR_ace_vector_VectorDescription";
		model = "\z\ace\addons\vector\ace_vector.p3d";
		modelOptics = "\z\ace\addons\vector\ace_vector_optics.p3d";
		picture = "\z\ace\addons\vector\UI\ace_vector_x_ca.paa";
		visionMode[] = {"Normal","NVG"};
		opticsZoomMax = 0.06621;
		opticsZoomMin = 0.06621;
		weaponInfoType = "ACE_RscOptics_vector";
	};
	class ACE_VectorDay: ACE_Vector
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_vector_VectorDayName";
		visionMode[] = {"Normal"};
	};
};
class RscText;
class RscPicture;
class RscControlsGroup
{
	class VScrollbar;
	class HScrollbar;
};
class RscInGameUI
{
	class RscUnitInfo;
	class ACE_RscOptics_vector: RscUnitInfo
	{
		onLoad = "[""onLoad"",_this,""RscUnitInfo"",'IGUI'] call    (uinamespace getvariable 'BIS_fnc_initDisplay'); uiNamespace setVariable ['ACE_dlgVector', _this select 0];";
		onUnload = "[""onUnload"",_this,""RscUnitInfo"",'IGUI'] call    (uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd = 300;
		controls[] = {"CA_Distance","CA_Heading","CA_OpticsPitch","CA_Elev","CA_OpticsZoom","CA_VisionMode","ACE_ScriptedDisplayControlsGroup"};
		class CA_Distance: RscText
		{
			idc = 151;
			w = 0;
			h = 0;
		};
		class CA_Heading: RscText
		{
			idc = 156;
			w = 0;
			h = 0;
		};
		class CA_OpticsPitch: RscText
		{
			idc = 182;
			w = 0;
			h = 0;
		};
		class CA_Elev: RscText
		{
			idc = 175;
			w = 0;
			h = 0;
		};
		class CA_OpticsZoom: RscText
		{
			idc = 180;
			w = 0;
			h = 0;
		};
		class CA_VisionMode: RscText
		{
			idc = 179;
			w = 0;
			h = 0;
		};
		class ACE_ScriptedDisplayControlsGroup: RscControlsGroup
		{
			idc = 170;
			x = "SafezoneX";
			y = "SafezoneY";
			w = "SafezoneW";
			h = "SafezoneH";
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class controls
			{
				class Center: RscPicture
				{
					idc = 1301;
					text = "";
					colorText[] = {1,0,0,0.5};
					x = "0.488 * safezoneW";
					y = "0.4783 * safezoneH";
					w = "0.4 / 16 * safezoneW";
					h = "0.4 / 9 * safezoneH";
				};
				class Crosshair: Center
				{
					idc = 1302;
					x = "0.4848 * safezoneW";
					y = "0.4732 * safezoneH";
					w = "0.5 / 16 * safezoneW";
					h = "0.5 / 9 * safezoneH";
				};
				class Digit0: Center
				{
					idc = 1310;
					x = "(0.54 + 0 * 0.02) * safezoneW";
					y = "0.54 * safezoneH";
					w = "0.5 / 16 * safezoneW";
					h = "0.5 / 9 * safezoneH";
				};
				class Digit1: Digit0
				{
					idc = 1311;
					x = "(0.54 + 1 * 0.02) * safezoneW";
				};
				class Digit2: Digit0
				{
					idc = 1312;
					x = "(0.54 + 2 * 0.02) * safezoneW";
				};
				class Digit3: Digit0
				{
					idc = 1313;
					x = "(0.54 + 3 * 0.02) * safezoneW";
				};
				class Digit4: Digit0
				{
					idc = 1314;
					x = "(0.54 + 4 * 0.02) * safezoneW";
				};
				class Digit5: Digit0
				{
					idc = 1315;
					x = "(0.35 + 0 * 0.02) * safezoneW";
				};
				class Digit6: Digit0
				{
					idc = 1316;
					x = "(0.35 + 1 * 0.02) * safezoneW";
				};
				class Digit7: Digit0
				{
					idc = 1317;
					x = "(0.35 + 2 * 0.02) * safezoneW";
				};
				class Digit8: Digit0
				{
					idc = 1318;
					x = "(0.35 + 3 * 0.02) * safezoneW";
				};
				class Digit9: Digit0
				{
					idc = 1319;
					x = "(0.35 + 4 * 0.02) * safezoneW";
				};
				class DigitE1: Digit0
				{
					idc = 1321;
					x = "(0.39 + 0 * 0.02) * safezoneW";
					y = "0.42 * safezoneH";
				};
				class DigitE2: DigitE1
				{
					idc = 1322;
					x = "(0.39 + 1 * 0.02) * safezoneW";
				};
				class DigitE3: DigitE1
				{
					idc = 1323;
					x = "(0.39 + 2 * 0.02) * safezoneW";
				};
				class DigitE4: DigitE1
				{
					idc = 1324;
					x = "(0.39 + 3 * 0.02) * safezoneW";
				};
			};
		};
	};
};
