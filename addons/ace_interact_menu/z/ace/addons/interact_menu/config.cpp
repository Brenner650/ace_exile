////////////////////////////////////////////////////////////////////
//DeRap: ace_interact_menu\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:59 2018 : 'file' last modified on Mon Apr 16 21:45:15 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_interact_menu
	{
		name = "ACE3 - Interact Menu";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"NouberNou","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_interact_menu
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\interact_menu\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_interact_menu
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\interact_menu\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_interact_menu
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\interact_menu\XEH_clientInit.sqf'";
	};
};
class Extended_InitPost_EventHandlers
{
	class All
	{
		class ace_interact_menu_compileMenu
		{
			init = "_this call ace_interact_menu_fnc_compileMenu;_this call ace_interact_menu_fnc_compileMenuSelfAction";
		};
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDiary
	{
		ace_interact_menu = "call compile preProcessFileLineNumbers '\z\ace\addons\interact_menu\XEH_displayLoad.sqf'";
	};
	class RscDisplayInterrupt
	{
		ace_interact_menu = "_this call ace_interact_menu_fnc_handleEscapeMenu";
	};
	class RscDisplayMPInterrupt
	{
		ace_interact_menu = "_this call ace_interact_menu_fnc_handleEscapeMenu";
	};
};
class CfgActions
{
	class None;
	class OpenBag: None
	{
		showWindow = 0;
	};
};
class ace_interact_menu_cursorMenu
{
	idd = 91919;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable [""ace_interact_menu_dlgCursorMenu"",_this select 0]; uiNamespace setVariable [""ace_interact_menu_cursorMenuOpened"",true]";
	onUnload = "uiNamespace setVariable [""ace_interact_menu_cursorMenuOpened"",false]";
};
class RscTitles
{
	class ace_interact_menu_menuBackground
	{
		idd = -1;
		onLoad = "uiNamespace setVariable [""ace_interact_menu_menuBackground"",_this select 0]";
		onUnload = "uiNamespace setVariable [""ace_interact_menu_menuBackground"",displayNull]";
		fadeIn = 0.25;
		fadeOut = 0.25;
		movingEnable = 0;
		duration = "10e10";
		name = "ace_interact_menu_menuBackground";
		class controls{};
		class controlsBackground
		{
			class background
			{
				idc = -1;
				moving = 0;
				font = "TahomaB";
				text = "";
				sizeEx = 0;
				lineSpacing = 0;
				type = 0;
				style = 0;
				size = 1;
				colorBackground[] = {0,0,0,0.65};
				colorText[] = {0,0,0,0};
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
			};
		};
	};
};
class ACE_Settings
{
	class ace_interact_menu_alwaysUseCursorSelfInteraction
	{
		value = 0;
		typeName = "BOOL";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_AlwaysUseCursorSelfInteraction";
	};
	class ace_interact_menu_cursorKeepCentered
	{
		value = 0;
		typeName = "BOOL";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_cursorKeepCentered";
		description = "$STR_ace_interact_menu_cursorKeepCenteredDescription";
	};
	class ace_interact_menu_alwaysUseCursorInteraction
	{
		value = 0;
		typeName = "BOOL";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_AlwaysUseCursorInteraction";
	};
	class ace_interact_menu_useListMenu
	{
		value = 0;
		typeName = "BOOL";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_UseListMenu";
	};
	class ace_interact_menu_colorTextMax
	{
		value[] = {1,1,1,1};
		typeName = "COLOR";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_ColorTextMax";
	};
	class ace_interact_menu_colorTextMin
	{
		value[] = {1,1,1,0.25};
		typeName = "COLOR";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_ColorTextMin";
	};
	class ace_interact_menu_colorShadowMax
	{
		value[] = {0,0,0,1};
		typeName = "COLOR";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_ColorShadowMax";
	};
	class ace_interact_menu_colorShadowMin
	{
		value[] = {0,0,0,0.25};
		typeName = "COLOR";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_ColorShadowMin";
	};
	class ace_interact_menu_textSize
	{
		value = 2;
		typeName = "SCALAR";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_textSize";
		values[] = {"$str_very_small","$str_small","$str_medium","$str_large","$str_very_large"};
	};
	class ace_interact_menu_shadowSetting
	{
		value = 2;
		typeName = "SCALAR";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_shadowSetting";
		description = "$STR_ace_interact_menu_shadowSettingDescription";
		values[] = {"$STR_A3_OPTIONS_DISABLED","$STR_A3_OPTIONS_ENABLED","$STR_ace_interact_menu_shadowOutline"};
	};
	class ace_interact_menu_actionOnKeyRelease
	{
		value = 1;
		typeName = "BOOL";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_ActionOnKeyRelease";
	};
	class ace_interact_menu_menuBackground
	{
		value = 0;
		typeName = "SCALAR";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_background";
		values[] = {"$STR_A3_OPTIONS_DISABLED","$STR_ace_interact_menu_backgroundBlur","$STR_ace_interact_menu_backgroundBlack"};
	};
	class ace_interact_menu_addBuildingActions
	{
		value = 0;
		typeName = "BOOL";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_addBuildingActions";
		description = "$STR_ace_interact_menu_addBuildingActionsDescription";
	};
	class ace_interact_menu_menuAnimationSpeed
	{
		value = 0;
		typeName = "SCALAR";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_interact_menu_menuAnimationSpeed";
		description = "$STR_ace_interact_menu_menuAnimationSpeed_Description";
		values[] = {"$str_speed_normal","2x","3x"};
	};
};
class ACE_Extensions
{
	extensions[] += {"ace_break_line","ace_parse_imagepath"};
};
