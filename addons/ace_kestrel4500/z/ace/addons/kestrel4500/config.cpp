////////////////////////////////////////////////////////////////////
//DeRap: ace_kestrel4500\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:03 2018 : 'file' last modified on Mon Apr 16 21:45:37 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_kestrel4500
	{
		name = "ACE3 - Kestrel 4500";
		units[] = {"ACE_Item_Kestrel4500"};
		weapons[] = {"ACE_Kestrel4500"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ACE_common","ACE_weather"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"$STR_ace_common_ACETeam","Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_kestrel4500
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\kestrel4500\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_kestrel4500
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\kestrel4500\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_kestrel4500
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\kestrel4500\XEH_postInit.sqf'";
	};
};
class CfgSounds
{
	class kestrel4500_center_button_click
	{
		name = "kestrel4500_center_button_click";
		sound[] = {"\z\ace\addons\kestrel4500\sound\kestrel_center_button_click.wav",1,1};
		titles[] = {};
	};
	class kestrel4500_top_button_click
	{
		name = "kestrel4500_top_button_click";
		sound[] = {"\z\ace\addons\kestrel4500\sound\kestrel_top_button_click.wav",1,1};
		titles[] = {};
	};
	class kestrel4500_right_button_click
	{
		name = "kestrel4500_right_button_click";
		sound[] = {"\z\ace\addons\kestrel4500\sound\kestrel_right_button_click.wav",1,1};
		titles[] = {};
	};
	class kestrel4500_bottom_button_click
	{
		name = "kestrel4500_bottom_button_click";
		sound[] = {"\z\ace\addons\kestrel4500\sound\kestrel_bottom_button_click.wav",1,1};
		titles[] = {};
	};
	class kestrel4500_left_button_click
	{
		name = "kestrel4500_left_button_click";
		sound[] = {"\z\ace\addons\kestrel4500\sound\kestrel_left_button_click.wav",1,1};
		titles[] = {};
	};
	class kestrel4500_exit_button_click
	{
		name = "kestrel4500_exit_button_click";
		sound[] = {"\z\ace\addons\kestrel4500\sound\kestrel_exit_button_click.wav",1,1};
		titles[] = {};
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
				class ace_kestrel4500_open
				{
					displayName = "$STR_ace_kestrel4500_OpenKestrel";
					condition = "call ace_kestrel4500_fnc_canShow&& !ace_kestrel4500_Kestrel4500";
					statement = "call ace_kestrel4500_fnc_createKestrelDialog";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\kestrel4500\UI\Kestrel4500_Icon.paa";
					exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
					class ace_kestrel4500_show
					{
						displayName = "$STR_ace_kestrel4500_ShowKestrel";
						condition = "call ace_kestrel4500_fnc_canShow&& !ace_kestrel4500_Overlay";
						statement = "call ace_kestrel4500_fnc_displayKestrel";
						showDisabled = 0;
						priority = 0.2;
						icon = "\z\ace\addons\kestrel4500\UI\Kestrel4500_Icon.paa";
						exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
					};
					class ace_kestrel4500_hide
					{
						displayName = "$STR_ace_kestrel4500_HideKestrel";
						condition = "ace_kestrel4500_Overlay";
						statement = "call ace_kestrel4500_fnc_displayKestrel";
						showDisabled = 0;
						priority = 0.3;
						icon = "\z\ace\addons\kestrel4500\UI\Kestrel4500_Icon.paa";
						exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
					};
				};
			};
		};
	};
	class Item_Base_F;
	class ACE_Item_Kestrel4500: Item_Base_F
	{
		author = "Ruthberg";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_kestrel4500_Name";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_Kestrel4500
			{
				name = "ACE_Kestrel4500";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_Kestrel4500
			{
				name = "ACE_Kestrel4500";
				count = 6;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_Kestrel4500: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayName = "$STR_ace_kestrel4500_Name";
		descriptionShort = "$STR_ace_kestrel4500_Description";
		model = "\z\ace\addons\kestrel4500\data\kestrel4500.p3d";
		picture = "\z\ace\addons\kestrel4500\UI\Kestrel4500.paa";
		icon = "iconObject_circle";
		mapSize = 0.034;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2;
		};
	};
};
class Kestrel4500_RscText
{
	idc = -1;
	type = 0;
	style = 2;
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorText[] = {0,0,0,1};
	text = "";
	x = 0;
	y = 0;
	w = 0.1;
	h = 0.03;
	font = "TahomaB";
	sizeEx = 0.04;
	shadow = 0;
};
class Kestrel4500_RscButton
{
	text = "";
	colorText[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,1};
	soundEnter[] = {"",0,1};
	soundPush[] = {"",0,1};
	soundClick[] = {"",0,1};
	soundEscape[] = {"",0,1};
	type = 1;
	style = "0x02+0x100";
	x = 0;
	y = 0;
	w = 0.1;
	h = 0.03;
	font = "TahomaB";
	SizeEx = 0.025;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
	shadow = 0;
};
class Kestrel4500_Display
{
	name = "Kestrel4500_Display";
	idd = -1;
	onLoad = "uiNamespace setVariable ['Kestrel4500_Display', (_this select 0)]";
	onUnload = "_this call ace_kestrel4500_fnc_onCloseDialog";
	movingEnable = 1;
	controlsBackground[] = {};
	objects[] = {};
	class controls
	{
		class BACKGROUND
		{
			moving = 1;
			type = 0;
			font = "TahomaB";
			SizeEX = 0.025;
			idc = 74000;
			style = 48;
			x = "safezoneX";
			y = "(safeZoneY + 0) min (safeZoneY + safeZoneH - 1.024*4/3 + 0)";
			w = 1.024;
			h = "1.024*4/3";
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			text = "\z\ace\addons\kestrel4500\UI\Kestrel4500.paa";
		};
		class POWER: Kestrel4500_RscButton
		{
			idc = -1;
			x = "safezoneX+0.385";
			y = "(safeZoneY + 1.125) min (safeZoneY + safeZoneH - 1.024*4/3 + 1.125)";
			w = 0.042;
			h = "0.042*4/3";
			action = "7 call ace_kestrel4500_fnc_buttonPressed";
			onMouseButtonDown = "playSound 'kestrel4500_exit_button_click'";
		};
		class ENTER: POWER
		{
			idc = -1;
			x = "safezoneX+0.46";
			y = "(safeZoneY + 1.0) min (safeZoneY + safeZoneH - 1.024*4/3 + 1.0)";
			w = 0.1;
			action = "0 call ace_kestrel4500_fnc_buttonPressed";
			onMouseButtonDown = "playSound 'kestrel4500_center_button_click'";
		};
		class TOP: Kestrel4500_RscButton
		{
			idc = -1;
			x = "safezoneX+0.46";
			y = "(safeZoneY + 0.93) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.93)";
			w = 0.1;
			h = 0.03;
			action = "1 call ace_kestrel4500_fnc_buttonPressed";
			onMouseButtonDown = "playSound 'kestrel4500_top_button_click'";
		};
		class BOTTOM: TOP
		{
			idc = -1;
			y = "(safeZoneY + 1.1) min (safeZoneY + safeZoneH - 1.024*4/3 + 1.1)";
			action = "2 call ace_kestrel4500_fnc_buttonPressed";
			onMouseButtonDown = "playSound 'kestrel4500_bottom_button_click'";
		};
		class LEFT: Kestrel4500_RscButton
		{
			idc = -1;
			x = "safezoneX+0.4";
			y = "(safeZoneY + 0.97) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.97)";
			w = 0.046;
			h = 0.11;
			action = "3 call ace_kestrel4500_fnc_buttonPressed";
			onMouseButtonDown = "playSound 'kestrel4500_left_button_click'";
		};
		class RIGHT: LEFT
		{
			idc = -1;
			x = "safezoneX+0.58";
			action = "4 call ace_kestrel4500_fnc_buttonPressed";
			onMouseButtonDown = "playSound 'kestrel4500_right_button_click'";
		};
		class MEMORY: Kestrel4500_RscButton
		{
			idc = -1;
			x = "safezoneX+0.395";
			y = "(safeZoneY + 0.87) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.87)";
			w = 0.05;
			h = "0.045*4/3";
			action = "5 call ace_kestrel4500_fnc_buttonPressed";
		};
		class BACKLIGHT: MEMORY
		{
			idc = -1;
			x = "safezoneX+0.585";
			action = "6 call ace_kestrel4500_fnc_buttonPressed";
		};
		class TEXT_TOP: Kestrel4500_RscText
		{
			idc = 74100;
			x = "safezoneX+0.40";
			y = "(safeZoneY + 0.58) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.58)";
			w = 0.22;
			h = 0.04;
			text = "";
		};
		class TEXT_CENTER_BIG: TEXT_TOP
		{
			idc = 74200;
			y = "(safeZoneY + 0.61) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.61)";
			h = 0.1;
			SizeEx = 0.06;
		};
		class TEXT_CENTER: TEXT_TOP
		{
			idc = 74201;
			y = "(safeZoneY + 0.64) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.64)";
		};
		class TEXT_CENTER_LINE_1_LEFT: TEXT_TOP
		{
			idc = 74300;
			y = "(safeZoneY + 0.60) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.60)";
			style = 0;
			h = 0.1;
			SizeEx = 0.05;
		};
		class TEXT_CENTER_LINE2_LEFT: TEXT_CENTER_LINE_1_LEFT
		{
			idc = 74301;
			y = "(safeZoneY + 0.64) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.64)";
		};
		class TEXT_CENTER_LINE_3_LEFT: TEXT_CENTER_LINE2_LEFT
		{
			idc = 74302;
			y = "(safeZoneY + 0.68) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.68)";
		};
		class TEXT_CENTER_LINE_1_RIGHT: TEXT_CENTER_LINE_1_LEFT
		{
			idc = 74303;
			style = 1;
		};
		class TEXT_CENTER_LINE2_RIGHT: TEXT_CENTER_LINE2_LEFT
		{
			idc = 74304;
			style = 1;
		};
		class TEXT_CENTER_LINE_3_RIGHT: TEXT_CENTER_LINE_3_LEFT
		{
			idc = 74305;
			style = 1;
		};
		class TEXT_INFO_LINE_1: TEXT_TOP
		{
			idc = 74400;
			y = "(safeZoneY + 0.68) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.68)";
		};
		class TEXT_INFO_LINE_2: TEXT_TOP
		{
			idc = 74401;
			y = "(safeZoneY + 0.72) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.72)";
		};
		class TEXT_BOTTOM_BIG: TEXT_TOP
		{
			idc = 74500;
			y = "(safeZoneY + 0.67) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.67)";
			h = 0.1;
			SizeEx = 0.06;
		};
		class TEXT_CENTER_LINE_1: TEXT_TOP
		{
			idc = 74600;
			y = "(safeZoneY + 0.58) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.58)";
			SizeEx = 0.03;
		};
		class TEXT_CENTER_LINE_2: TEXT_CENTER_LINE_1
		{
			idc = 74601;
			y = "(safeZoneY + 0.61) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.61)";
		};
		class TEXT_CENTER_LINE_3: TEXT_CENTER_LINE_1
		{
			idc = 74602;
			y = "(safeZoneY + 0.64) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.64)";
		};
		class TEXT_CENTER_LINE_4: TEXT_CENTER_LINE_1
		{
			idc = 74603;
			y = "(safeZoneY + 0.67) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.67)";
		};
		class TEXT_CENTER_LINE_5: TEXT_CENTER_LINE_1
		{
			idc = 74604;
			y = "(safeZoneY + 0.70) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.70)";
		};
		class TEXT_CENTER_LINE_6: TEXT_CENTER_LINE_1
		{
			idc = 74605;
			y = "(safeZoneY + 0.73) min (safeZoneY + safeZoneH - 1.024*4/3 + 0.73)";
		};
	};
};
class RscTitles
{
	class RscKestrel4500
	{
		idd = -1;
		onLoad = "with uiNameSpace do { RscKestrel4500 = _this select 0 };";
		onUnload = "(_this call ace_kestrel4500_fnc_onCloseDisplay)";
		movingEnable = 0;
		duration = 60;
		fadeIn = "false";
		fadeOut = "false";
		class controls
		{
			class RscKestrel4500
			{
				idc = 75000;
				moving = 0;
				type = 0;
				font = "TahomaB";
				SizeEX = "0.025*0.75";
				style = 48;
				x = "safezoneX+0.14";
				y = "(safeZoneY + 0.7 + 0) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0)";
				w = "0.512*0.75";
				h = "1.024*4/3*0.75";
				colorBackground[] = {1,1,1,1};
				colorText[] = {1,1,1,1};
				text = "\z\ace\addons\kestrel4500\UI\Kestrel4500_0.paa";
			};
			class RscTextTop: Kestrel4500_RscText
			{
				idc = 75100;
				x = "safezoneX-0.05+0.40*0.75";
				y = "(safeZoneY + 0.7 + 0.58*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.58*0.75)";
				w = "0.22*0.75";
				h = "0.04*0.75";
				SizeEx = "0.04*0.75";
				text = "";
			};
			class RscTextCenterBig: RscTextTop
			{
				idc = 75200;
				y = "(safeZoneY + 0.7 + 0.61*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.61*0.75)";
				h = "0.10*0.75";
				SizeEx = "0.06*0.75";
				text = "";
			};
			class RscTextCenter: RscTextTop
			{
				idc = 75201;
				y = "(safeZoneY + 0.7 + 0.64*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.64*0.75)";
			};
			class RscTextCenterLine1Left: RscTextTop
			{
				idc = 75300;
				y = "(safeZoneY + 0.7 + 0.60*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.60*0.75)";
				style = 0;
				h = "0.10*0.75";
				SizeEx = "0.05*0.75";
				text = "";
			};
			class RscTextCenterLine2Left: RscTextCenterLine1Left
			{
				idc = 75301;
				y = "(safeZoneY + 0.7 + 0.64*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.64*0.75)";
				text = "";
			};
			class RscTextCenterLine3Left: RscTextCenterLine2Left
			{
				idc = 75302;
				y = "(safeZoneY + 0.7 + 0.68*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.68*0.75)";
				text = "";
			};
			class RscTextCenterLine1Right: RscTextCenterLine1Left
			{
				idc = 75303;
				style = 1;
			};
			class RscTextCenterLine2Right: RscTextCenterLine2Left
			{
				idc = 75304;
				style = 1;
			};
			class RscTextCenterLine3Right: RscTextCenterLine3Left
			{
				idc = 75305;
				style = 1;
			};
			class RscTextInfoLine1: RscTextTop
			{
				idc = 75400;
				y = "(safeZoneY + 0.7 + 0.68*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.68*0.75)";
				text = "";
			};
			class RscTextInfoLine2: RscTextTop
			{
				idc = 75401;
				y = "(safeZoneY + 0.7 + 0.72*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.72*0.75)";
				text = "";
			};
			class RscTextBottomBig: RscTextTop
			{
				idc = 75500;
				y = "(safeZoneY + 0.7 + 0.67*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.67*0.75)";
				h = "0.10*0.75";
				SizeEx = "0.06*0.75";
				text = "";
			};
			class RscTextCenterLine1: RscTextTop
			{
				idc = 75600;
				y = "(safeZoneY + 0.7 + 0.58*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.58*0.75)";
				SizeEx = "0.03*0.75";
			};
			class RscTextCenterLine2: RscTextCenterLine1
			{
				idc = 75601;
				y = "(safeZoneY + 0.7 + 0.61*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.61*0.75)";
			};
			class RscTextCenterLine3: RscTextCenterLine1
			{
				idc = 75602;
				y = "(safeZoneY + 0.7 + 0.64*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.64*0.75)";
			};
			class RscTextCenterLine4: RscTextCenterLine1
			{
				idc = 75603;
				y = "(safeZoneY + 0.7 + 0.67*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.67*0.75)";
			};
			class RscTextCenterLine5: RscTextCenterLine1
			{
				idc = 75604;
				y = "(safeZoneY + 0.7 + 0.70*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.70*0.75)";
			};
			class RscTextCenterLine6: RscTextCenterLine1
			{
				idc = 75605;
				y = "(safeZoneY + 0.7 + 0.73*0.75) min (safeZoneY + safeZoneH - 1.024*4/3*0.75 + 0.73*0.75)";
			};
		};
	};
	class RscKestrel4500_Preload
	{
		idd = -1;
		movingEnable = 0;
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		class controls
		{
			class Preload_0
			{
				text = "\z\ace\addons\kestrel4500\UI\Kestrel4500_0.paa";
			};
			class Preload_1
			{
				text = "\z\ace\addons\kestrel4500\UI\Kestrel4500_1.paa";
			};
			class Preload_2
			{
				text = "\z\ace\addons\kestrel4500\UI\Kestrel4500_2.paa";
			};
			class Preload_3
			{
				text = "\z\ace\addons\kestrel4500\UI\Kestrel4500_3.paa";
			};
			class Preload_4
			{
				text = "\z\ace\addons\kestrel4500\UI\Kestrel4500_4.paa";
			};
			class Preload_5
			{
				text = "\z\ace\addons\kestrel4500\UI\Kestrel4500_5.paa";
			};
			class Preload_6
			{
				text = "\z\ace\addons\kestrel4500\UI\Kestrel4500_6.paa";
			};
		};
	};
};
