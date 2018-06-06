////////////////////////////////////////////////////////////////////
//DeRap: ace_dagr\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:56 2018 : 'file' last modified on Mon Apr 16 21:42:47 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_dagr
	{
		name = "ACE3 - DAGR";
		units[] = {"ACE_Item_DAGR"};
		weapons[] = {"ACE_DAGR"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_weather"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Rosuto","Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_dagr
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\dagr\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_dagr
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\dagr\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_dagr
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\dagr\XEH_postInit.sqf'";
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
				class ace_dagr_menu
				{
					displayName = "$STR_ace_dagr_ConfigureDAGR";
					condition = "[_player,'ACE_DAGR'] call ace_common_fnc_hasItem";
					statement = "call ace_dagr_fnc_menuInit";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\dagr\UI\DAGR_Icon.paa";
					exceptions[] = {"isNotInside","isNotSitting"};
					class ace_dagr_toggle
					{
						displayName = "$STR_ace_dagr_ToggleDAGR";
						condition = "[_player,'ACE_DAGR'] call ace_common_fnc_hasItem";
						statement = "call ace_dagr_fnc_toggleOverlay";
						showDisabled = 0;
						priority = 0.2;
						icon = "\z\ace\addons\dagr\UI\DAGR_Icon.paa";
						exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
					};
				};
			};
		};
	};
	class Item_Base_F;
	class ACE_Item_DAGR: Item_Base_F
	{
		author[] = {"Rosuto","Ruthberg"};
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_dagr_Name";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_DAGR
			{
				name = "ACE_DAGR";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_DAGR
			{
				name = "ACE_DAGR";
				count = 6;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_DAGR: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayName = "$STR_ace_dagr_Name";
		model = "\z\ace\addons\dagr\data\DAGR.p3d";
		descriptionShort = "$STR_ace_dagr_Description";
		picture = "\z\ace\addons\dagr\UI\DAGR_Icon.paa";
		icon = "iconObject_circle";
		mapSize = 0.034;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
};
class RscText;
class DAGR_Button
{
	idc = -1;
	type = 1;
	style = 0;
	font = "RobotoCondensed";
	sizeEx = 0.02;
	colorText[] = {0,1,0,1};
	colorFocused[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	borderSize = 0;
	soundEnter[] = {"",0,1};
	soundPush[] = {"",0,1};
	soundClick[] = {"",0,1};
	soundEscape[] = {"",0,1};
	x = 0.5;
	y = 0.5;
	w = 0.07;
	h = 0.05;
	text = "";
	action = "";
};
class DAGR_Menu_Pic
{
	type = 0;
	idc = -1;
	style = 48;
	x = 0;
	y = 0;
	w = 0.7;
	h = 1.4;
	text = "";
	colorBackground[] = {};
	colorText[] = {};
	font = "RobotoCondensed";
	sizeEx = 0.04;
	waitForLoad = 0;
};
class DAGR_Menu_Text
{
	type = 0;
	idc = -1;
	style = 0;
	x = 0.5;
	y = 0.5;
	w = 0.15;
	h = 0.15;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.239,0.216,0.153,1};
	font = "RobotoCondensed";
	sizeEx = 0.03;
	waitForLoad = 0;
	text = "";
};
class DAGR_Menu
{
	idd = 266860;
	movingEnable = 0;
	duration = 100000;
	fadein = 0;
	fadeout = 0;
	name = "Dagr_Menu";
	onLoad = "uiNamespace setVariable ['DAGR_Menu', _this select 0]";
	onUnload = "ace_dagr_PWR= true";
	controls[] = {"DAGR_MENU_UI","DAGR_PWR_Button","DAGR_UP_Button","DAGR_DOWN_Button","DAGR_LEFT_Button","DAGR_RIGHT_Button","DAGR_NEXT_Button","DAGR_SEL_Button","DAGR_MENU_Button","DAGR_F1_Button","DAGR_F2_Button","DAGR_F3_Button","DAGR_F1_Text","DAGR_F2_Text","DAGR_F3_Text","DAGR_MENU_OPTION0","DAGR_MENU_OPTION1","DAGR_MENU_OPTION2","DAGR_MENU_OPTION3","DAGR_MENU_OPTION4","DAGR_MENU_SELECTION0","DAGR_MENU_SELECTION1","DAGR_MENU_SELECTION2","DAGR_MENU_SELECTION3","DAGR_MENU_SELECTION4","DAGR_MENU_Main_Text","DAGR_MENU_PSELECTION1","DAGR_MENU_PSELECTION2","DAGR_MENU_PSELECTION3","DAGR_MENU_PSELECTION4","DAGR_MENU_PSELECTION5","DAGR_MENU_PSELECTION6","DAGR_MENU_PSELECTION7","DAGR_MENU_PSELECTION8"};
	class DAGR_MENU_UI: DAGR_Menu_Pic
	{
		idc = 266861;
		x = 0.175;
		y = -0.173;
		text = "\z\ace\addons\dagr\UI\dagr_menu.paa";
		sizeEx = 0.1;
	};
	class DAGR_PWR_Button: DAGR_Button
	{
		idc = 266863;
		action = "ace_dagr_PWR= true";
		x = 0.4;
		y = 0.65;
	};
	class DAGR_UP_Button: DAGR_Button
	{
		idc = 266864;
		action = "ace_dagr_UP= true";
		x = 0.5;
		y = 0.675;
	};
	class DAGR_DOWN_Button: DAGR_Button
	{
		idc = 266865;
		action = "ace_dagr_DOWN= true";
		x = 0.5;
		y = 0.81;
	};
	class DAGR_LEFT_Button: DAGR_Button
	{
		idc = 266866;
		action = "ace_dagr_LEFT= true";
		x = 0.4;
		y = 0.735;
		w = 0.05;
		h = 0.07;
	};
	class DAGR_RIGHT_Button: DAGR_Button
	{
		idc = 266867;
		action = "ace_dagr_RIGHT= true";
		x = 0.62;
		y = 0.735;
		w = 0.05;
		h = 0.07;
	};
	class DAGR_NEXT_Button: DAGR_Button
	{
		idc = 266868;
		action = "DAGR_NEXT = true";
		x = 0.6;
		y = 0.65;
	};
	class DAGR_SEL_Button: DAGR_Button
	{
		idc = 266869;
		action = "ace_dagr_SEL= true";
		x = 0.54;
		y = 0.735;
		w = 0.06;
		h = 0.06;
	};
	class DAGR_MENU_Button: DAGR_Button
	{
		idc = 266870;
		action = "ace_dagr_MENU_B= true";
		x = 0.46;
		y = 0.735;
		w = 0.06;
		h = 0.06;
	};
	class DAGR_F1_Button: DAGR_Button
	{
		idc = 266871;
		action = "ace_dagr_F1= true";
		x = 0.4;
		y = 0.575;
	};
	class DAGR_F2_Button: DAGR_Button
	{
		idc = 266872;
		action = "ace_dagr_F2= true";
		x = 0.495;
		y = 0.575;
	};
	class DAGR_F3_Button: DAGR_Button
	{
		idc = 266873;
		action = "ace_dagr_F3= true";
		x = 0.59;
		y = 0.575;
	};
	class DAGR_F1_Text: DAGR_Menu_Text
	{
		idc = 266874;
		x = 0.388;
		y = 0.38;
		text = "";
	};
	class DAGR_F2_Text: DAGR_Menu_Text
	{
		idc = 266875;
		x = 0.506;
		y = 0.38;
	};
	class DAGR_F3_Text: DAGR_Menu_Text
	{
		idc = 266876;
		x = 0.612;
		y = 0.38;
	};
	class DAGR_MENU_OPTION0: DAGR_Menu_Text
	{
		idc = 2668777;
		style = 2;
		sizeEx = 0.035;
		x = 0.43;
		y = 0.19;
	};
	class DAGR_MENU_OPTION1: DAGR_Menu_Text
	{
		idc = 2668778;
		style = 2;
		sizeEx = 0.035;
		x = 0.43;
		y = 0.225;
	};
	class DAGR_MENU_OPTION2: DAGR_Menu_Text
	{
		idc = 2668779;
		style = 2;
		sizeEx = 0.035;
		x = 0.43;
		y = 0.26;
	};
	class DAGR_MENU_OPTION3: DAGR_Menu_Text
	{
		idc = 2668780;
		style = 2;
		sizeEx = 0.035;
		x = 0.43;
		y = 0.295;
	};
	class DAGR_MENU_OPTION4: DAGR_Menu_Text
	{
		idc = 2668781;
		style = 2;
		sizeEx = 0.035;
		x = 0.43;
		y = 0.33;
	};
	class DAGR_MENU_SELECTION0: DAGR_Menu_Pic
	{
		idc = 2668783;
		x = 0.42;
		y = 0.246;
		w = 0.17;
		h = 0.035;
		sizeEx = 0.05;
	};
	class DAGR_MENU_SELECTION1: DAGR_Menu_Pic
	{
		idc = 2668784;
		x = 0.42;
		y = 0.281;
		w = 0.17;
		h = 0.035;
		sizeEx = 0.05;
	};
	class DAGR_MENU_SELECTION2: DAGR_Menu_Pic
	{
		idc = 2668785;
		x = 0.42;
		y = 0.316;
		w = 0.17;
		h = 0.035;
		sizeEx = 0.05;
	};
	class DAGR_MENU_SELECTION3: DAGR_Menu_Pic
	{
		idc = 2668786;
		x = 0.42;
		y = 0.351;
		w = 0.17;
		h = 0.035;
		sizeEx = 0.05;
	};
	class DAGR_MENU_SELECTION4: DAGR_Menu_Pic
	{
		idc = 2668787;
		x = 0.42;
		y = 0.386;
		w = 0.17;
		h = 0.035;
		sizeEx = 0.05;
	};
	class DAGR_MENU_Main_Text: DAGR_Menu_Text
	{
		idc = 2668782;
		style = 2;
		x = 0.38;
		y = 0.32;
		w = 0.25;
		h = 0.035;
		sizeEx = 0.04;
	};
	class DAGR_MENU_PSELECTION1: DAGR_Menu_Pic
	{
		idc = 2668788;
		x = 0.451;
		y = 0.352;
		w = 0.01;
		h = 0.003;
	};
	class DAGR_MENU_PSELECTION2: DAGR_Menu_Pic
	{
		idc = 2668789;
		x = 0.465;
		y = 0.352;
		w = 0.01;
		h = 0.003;
	};
	class DAGR_MENU_PSELECTION3: DAGR_Menu_Pic
	{
		idc = 2668790;
		x = 0.479;
		y = 0.352;
		w = 0.01;
		h = 0.003;
	};
	class DAGR_MENU_PSELECTION4: DAGR_Menu_Pic
	{
		idc = 2668791;
		x = 0.493;
		y = 0.352;
		w = 0.01;
		h = 0.003;
	};
	class DAGR_MENU_PSELECTION5: DAGR_Menu_Pic
	{
		idc = 2668792;
		x = 0.507;
		y = 0.352;
		w = 0.01;
		h = 0.003;
	};
	class DAGR_MENU_PSELECTION6: DAGR_Menu_Pic
	{
		idc = 2668793;
		x = 0.521;
		y = 0.352;
		w = 0.01;
		h = 0.003;
	};
	class DAGR_MENU_PSELECTION7: DAGR_Menu_Pic
	{
		idc = 2668794;
		x = 0.535;
		y = 0.352;
		w = 0.01;
		h = 0.003;
	};
	class DAGR_MENU_PSELECTION8: DAGR_Menu_Pic
	{
		idc = 2668795;
		x = 0.549;
		y = 0.352;
		w = 0.01;
		h = 0.003;
	};
};
class RscTitles
{
	class DAGR_Text
	{
		type = 0;
		idc = -1;
		style = 1;
		x = 0;
		y = 0;
		w = 0.15;
		h = 0.05;
		text = "";
		colorBackground[] = {0,0,0,0};
		colorText[] = {0.239,0.216,0.153,1};
		font = "RobotoCondensed";
		sizeEx = 0.04;
		waitForLoad = 0;
	};
	class DAGR_Pic
	{
		type = 0;
		idc = -1;
		style = 48;
		x = 0;
		y = 0;
		w = 0.5;
		h = 0.5;
		text = "";
		colorBackground[] = {};
		colorText[] = {};
		font = "RobotoCondensed";
		sizeEx = 0.02;
		waitForLoad = 0;
	};
	class DAGR_Display
	{
		idd = 266850;
		movingEnable = 0;
		duration = 100000;
		fadein = 0;
		fadeout = 0;
		name = "Dagr_Display";
		onLoad = "uiNamespace setVariable ['DAGR_Display', _this select 0]";
		controls[] = {"DAGR_UI","DAGR_Grid","DAGR_Speed","DAGR_Elevation","DAGR_Heading","DAGR_Time","DAGR_WP","DAGR_Bearing","DAGR_DIST"};
		class DAGR_UI: DAGR_Pic
		{
			idc = 266856;
			x = "(SafeZoneW + SafeZoneX) - 0.45";
			y = "(SafeZoneH + SafeZoneY) - 0.47";
		};
		class DAGR_Grid: DAGR_Text
		{
			idc = 266851;
			x = "(SafeZoneW + SafeZoneX) - 0.370";
			y = "(SafeZoneH + SafeZoneY)- 0.250";
			w = 0.25;
			h = 0.06;
			sizeEx = 0.07;
		};
		class DAGR_Speed: DAGR_Text
		{
			idc = 266852;
			x = "(SafeZoneW + SafeZoneX) - 0.388";
			y = "(SafeZoneH + SafeZoneY) - 0.181";
		};
		class DAGR_Elevation: DAGR_Text
		{
			idc = 266853;
			x = "(SafeZoneW + SafeZoneX) - 0.270";
			y = "(SafeZoneH + SafeZoneY) - 0.181";
		};
		class DAGR_Heading: DAGR_Text
		{
			idc = 266854;
			x = "(SafeZoneW + SafeZoneX) - 0.413";
			y = "(SafeZoneH + SafeZoneY) - 0.1294";
		};
		class DAGR_Time: DAGR_Text
		{
			idc = 266855;
			x = "(SafeZoneW + SafeZoneX) - 0.275";
			y = "(SafeZoneH + SafeZoneY) - 0.129";
		};
		class DAGR_WP: DAGR_Text
		{
			idc = 266857;
			x = "(SafeZoneW + SafeZoneX) - 0.235";
			y = "(SafeZoneH + SafeZoneY) - 0.181";
		};
		class DAGR_Bearing: DAGR_Text
		{
			idc = 266858;
			x = "(SafeZoneW + SafeZoneX) - 0.413";
			y = "(SafeZoneH + SafeZoneY) - 0.181";
		};
		class DAGR_DIST: DAGR_Text
		{
			idc = 266859;
			x = "(SafeZoneW + SafeZoneX) - 0.265";
			y = "(SafeZoneH + SafeZoneY) - 0.129";
		};
	};
};
