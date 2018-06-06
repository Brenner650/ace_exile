////////////////////////////////////////////////////////////////////
//DeRap: ace_yardage450\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:11 2018 : 'file' last modified on Mon Apr 16 21:49:07 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_yardage450
	{
		name = "ACE3 - Yardage 450";
		units[] = {"ACE_Item_Yardage450"};
		weapons[] = {"ACE_Yardage450"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_apl","ace_laser"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Spooner","tcp","Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_yardage450
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\yardage450\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_yardage450
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\yardage450\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_yardage450
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\yardage450\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class ACE_Item_Yardage450: Item_Base_F
	{
		author[] = {"Spooner","tcp"};
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_yardage450_DisplayName";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_Yardage450
			{
				name = "ACE_Yardage450";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_Yardage450
			{
				name = "ACE_Yardage450";
				count = 4;
			};
		};
	};
};
class CfgWeapons
{
	class Binocular;
	class ACE_Yardage450: Binocular
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_yardage450_DisplayName";
		descriptionShort = "$STR_ace_yardage450_Description";
		model = "\z\ace\addons\yardage450\data\ace_yardage_pro_450.p3d";
		modelOptics = "\z\ace\addons\yardage450\data\bushnell_optic.p3d";
		picture = "\z\ace\addons\yardage450\UI\w_bushnell_ca.paa";
		opticsZoomMin = "0.33333/4";
		opticsZoomMax = "0.33333/4";
		opticsZoomInit = "0.33333/4";
		distanceZoomMin = 400;
		distanceZoomMax = 400;
		discretefov[] = {"0.33333/4"};
		discreteInitIndex = 0;
		visionMode[] = {"Normal"};
		class WeaponSlotsInfo
		{
			mass = 12;
		};
	};
};
class ACE_Yardage450_RscText
{
	type = 0;
	idc = -1;
	style = 2;
	font = "EtelkaMonospacePro";
	sizeEx = "0.027 * SafeZoneH";
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
};
class RscTitles
{
	class ACE_RscYardage450
	{
		idd = -1;
		movingEnable = 0;
		duration = 100000;
		fadein = 0;
		fadeout = 0;
		name = "ACE_RscYardage450";
		onLoad = "with uiNameSpace do { ACE_RscYardage450 = _this select 0; };";
		onUnload = "with uiNameSpace do { ACE_RscYardage450 = displayNull; };";
		class Controls
		{
			class ACE_Yardage450_RscTarget: ACE_Yardage450_RscText
			{
				idc = 720041;
				style = 2;
				x = "0.5 - (0.18 * SafeZoneH)";
				y = "0.5 - (0.25 * SafeZoneH)";
				w = "0.4 * SafeZoneH";
				h = "0.05 * SafeZoneH";
				sizeEx = "0.05 * SafeZoneH";
				text = "TARGET ACQUIRED";
			};
			class ACE_Yardage450_RscLaser: ACE_Yardage450_RscTarget
			{
				idc = 720042;
				x = "0.5 - (0.14 * SafeZoneH)";
				y = "0.5 - (0.18 * SafeZoneH)";
				w = "0.045 * SafeZoneH";
				h = "0.02 * SafeZoneH";
				sizeEx = "0.02 * SafeZoneH";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,1};
				text = "LASER";
			};
			class ACE_Yardage450_RscRange: ACE_Yardage450_RscTarget
			{
				idc = 720043;
				style = 1;
				x = "0.5 - (0.02 * SafeZoneH)";
				y = "0.5 + (0.18 * SafeZoneH)";
				w = "0.08 * SafeZoneH";
				h = "0.06 * SafeZoneH";
				sizeEx = "0.06 * SafeZoneH";
				text = "---";
			};
			class ACE_Yardage450_RscMeters: ACE_Yardage450_RscLaser
			{
				idc = 720044;
				x = "0.5 + (0.06 * SafeZoneH)";
				y = "0.5 + (0.19 * SafeZoneH)";
				w = "0.05 * SafeZoneH";
				h = "0.018 * SafeZoneH";
				sizeEx = "0.018 * SafeZoneH";
				text = "METERS";
			};
			class ACE_Yardage450_RscYards: ACE_Yardage450_RscMeters
			{
				idc = 720045;
				y = "0.5 + (0.21 * SafeZoneH)";
				w = "0.0417 * SafeZoneH";
				text = "YARDS";
			};
		};
	};
};
