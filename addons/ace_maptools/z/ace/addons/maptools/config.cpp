////////////////////////////////////////////////////////////////////
//DeRap: ace_maptools\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:03 2018 : 'file' last modified on Mon Apr 16 21:45:43 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_maptools
	{
		name = "ACE3 - Map Tools";
		units[] = {};
		weapons[] = {"ACE_MapTools"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class RscControlsGroup;
class RscActiveText;
class RscPicture;
class RscText;
class RscObject;
class RscButton;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonMenu;
class RscEdit;
class ACE_Settings
{
	class ace_maptools_rotateModifierKey
	{
		category = "$STR_ace_maptools_Name";
		value = 1;
		typeName = "SCALAR";
		isClientSettable = 1;
		displayName = "$STR_ace_maptools_rotateModifierKey_displayName";
		description = "$STR_ace_maptools_rotateModifierKey_description";
		values[] = {"$STR_A3_OPTIONS_DISABLED","ALT","CTRL","SHIFT"};
	};
	class ace_maptools_drawStraightLines
	{
		category = "$STR_ace_maptools_Name";
		value = 1;
		typeName = "BOOL";
		isClientSettable = 1;
		displayName = "$STR_ace_maptools_drawStraightLines_displayName";
		description = "$STR_ace_maptools_drawStraightLines_description";
	};
};
class RscTitles
{
	class RscACE_MapGps
	{
		idd = 9855;
		movingEnable = 1;
		duration = 3600;
		fadein = 0;
		fadeout = 0;
		onLoad = "uiNamespace setVariable [""ace_maptools_ui_mapGpsDisplay"",_this select 0];";
		class controls
		{
			class back: RscPicture
			{
				x = "safeZoneX + safeZoneW - 1.1 * 0.4025";
				y = "safeZoneY + safeZoneH - 1.2 * 0.25";
				w = 0.4025;
				h = 0.25;
				text = "\z\ace\addons\maptools\UI\mapGps.paa";
				colorBackground[] = {1,1,1,1};
			};
			class heading: RscText
			{
				idc = 913590;
				x = "safeZoneX + safeZoneW - 1.1 * 0.4025+ 0.4025* 0.225";
				y = "safeZoneY + safeZoneH - 1.2 * 0.25+ 0.25* 0.12";
				w = "0.4025* 0.2";
				h = "0.25* 0.16";
				style = 0;
				text = "225";
				colorBackground[] = {0,0,0,0};
				colorText[] = {0.247,0.251,0.157,1};
				shadowColo[] = {0,0,0,0};
				font = "PuristaSemibold";
				shadow = 0;
				sizeEx = 0.042;
			};
			class altitude: RscText
			{
				idc = 913591;
				x = "safeZoneX + safeZoneW - 1.1 * 0.4025+ 0.4025* 0.575";
				y = "safeZoneY + safeZoneH - 1.2 * 0.25+ 0.25* 0.12";
				w = "0.4025* 0.2";
				h = "0.25* 0.16";
				style = 1;
				text = "55 m";
				colorBackground[] = {0,0,0,0};
				colorText[] = {0.247,0.251,0.157,1};
				shadowColo[] = {0,0,0,0};
				font = "PuristaSemibold";
				shadow = 0;
				sizeEx = 0.042;
			};
			class coordinates: RscText
			{
				idc = 913592;
				x = "safeZoneX + safeZoneW - 1.1 * 0.4025+ 0.4025* 0.15";
				y = "safeZoneY + safeZoneH - 1.2 * 0.25+ 0.25* 0.33";
				w = "0.4025* 0.7";
				h = "0.25* 0.35";
				style = 2;
				text = "012.3 115.1";
				colorBackground[] = {0,0,0,0};
				colorText[] = {0.247,0.251,0.157,1};
				shadowColo[] = {0,0,0,0};
				font = "PuristaSemibold";
				shadow = 0;
				sizeEx = 0.1;
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_maptools
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\maptools\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_maptools
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\maptools\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_maptools
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\maptools\XEH_postInitClient.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_MapGpsShow
			{
				displayName = "$STR_ace_maptools_MapGpsShow";
				condition = "(!ace_maptools_mapGpsShow) && {call ace_maptools_fnc_canUseMapGPS}";
				statement = "ace_maptools_mapGpsShow= true; [ace_maptools_mapGpsShow] call ace_maptools_fnc_openMapGps";
				exceptions[] = {"isNotDragging","notOnMap","isNotInside","isNotSitting"};
				showDisabled = 0;
				priority = 0;
			};
			class ACE_MapGpsHide
			{
				displayName = "$STR_ace_maptools_MapGpsHide";
				condition = "(ace_maptools_mapGpsShow) && {call ace_maptools_fnc_canUseMapGPS}";
				statement = "ace_maptools_mapGpsShow= false; [ace_maptools_mapGpsShow] call ace_maptools_fnc_openMapGps";
				exceptions[] = {"isNotDragging","notOnMap","isNotInside","isNotSitting"};
				showDisabled = 0;
				priority = 0;
			};
			class ACE_MapTools
			{
				displayName = "$STR_ace_maptools_MapTools_Menu";
				condition = "call ace_maptools_fnc_canUseMapTools";
				statement = "";
				exceptions[] = {"isNotDragging","notOnMap","isNotInside","isNotSitting"};
				showDisabled = 0;
				priority = 100;
				class ACE_MapToolsHide
				{
					displayName = "$STR_ace_maptools_MapToolsHide";
					condition = "ace_maptools_mapTool_Shown!= 0";
					statement = "ace_maptools_mapTool_Shown= 0;";
					exceptions[] = {"isNotDragging","notOnMap","isNotInside","isNotSitting"};
					showDisabled = 1;
					priority = 5;
				};
				class ACE_MapToolsShowNormal
				{
					displayName = "$STR_ace_maptools_MapToolsShowNormal";
					condition = "ace_maptools_mapTool_Shown!= 1";
					statement = "ace_maptools_mapTool_Shown= 1;";
					exceptions[] = {"isNotDragging","notOnMap","isNotInside","isNotSitting"};
					showDisabled = 1;
					priority = 4;
				};
				class ACE_MapToolsShowSmall
				{
					displayName = "$STR_ace_maptools_MapToolsShowSmall";
					condition = "ace_maptools_mapTool_Shown!= 2";
					statement = "ace_maptools_mapTool_Shown= 2;";
					exceptions[] = {"isNotDragging","notOnMap","isNotInside","isNotSitting"};
					showDisabled = 1;
					priority = 3;
				};
				class ACE_MapToolsAlignNorth
				{
					displayName = "$STR_ace_maptools_MapToolsAlignNorth";
					condition = "ace_maptools_mapTool_Shown!= 0";
					statement = "ace_maptools_mapTool_angle= 0;";
					exceptions[] = {"isNotDragging","notOnMap","isNotInside","isNotSitting"};
					showDisabled = 1;
					priority = 2;
				};
				class ACE_MapToolsAlignCompass
				{
					displayName = "$STR_ace_maptools_MapToolsAlignCompass";
					condition = "(ace_maptools_mapTool_Shown!= 0) && {'ItemCompass' in assigneditems ACE_player}";
					statement = "ace_maptools_mapTool_angle= getDir ACE_player;";
					exceptions[] = {"isNotDragging","notOnMap","isNotInside","isNotSitting"};
					showDisabled = 1;
					priority = 1;
				};
			};
		};
	};
	class NATO_Box_Base;
	class EAST_Box_Base;
	class IND_Box_Base;
	class FIA_Box_Base_F;
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_MapTools
			{
				name = "ACE_MapTools";
				count = 12;
			};
		};
	};
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_MapTools
			{
				name = "ACE_MapTools";
				count = 12;
			};
		};
	};
	class Box_IND_Support_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_MapTools
			{
				name = "ACE_MapTools";
				count = 12;
			};
		};
	};
	class Box_FIA_Support_F: FIA_Box_Base_F
	{
		class TransportItems
		{
			class _xx_ACE_MapTools
			{
				name = "ACE_MapTools";
				count = 12;
			};
		};
	};
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_MapTools
			{
				name = "ACE_MapTools";
				count = 12;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_MapTools: ACE_ItemCore
	{
		displayName = "$STR_ace_maptools_Name";
		author = "$STR_ace_common_ACETeam";
		descriptionShort = "$STR_ace_maptools_Description";
		model = "\z\ace\addons\maptools\data\ace_MapTools.p3d";
		picture = "\z\ace\addons\maptools\UI\maptool_item.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};
