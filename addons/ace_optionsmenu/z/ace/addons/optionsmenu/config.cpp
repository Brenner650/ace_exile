////////////////////////////////////////////////////////////////////
//DeRap: ace_optionsmenu\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:22 2018 : 'file' last modified on Mon Apr 16 21:47:15 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_optionsmenu
	{
		name = "ACE3 - Options Menu";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Glowbal","PabstMirror"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ace_optionsmenu
		{
			list[] = {"ace_optionsmenu"};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_optionsmenu
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\optionsmenu\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_optionsmenu
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\optionsmenu\XEH_preInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMain
	{
		ace_optionsmenu_loadMainMenuBox = "_this call compile preProcessFileLineNumbers '\z\ace\addons\optionsmenu\init_loadMainMenuBox.sqf'";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ACE_moduleAllowConfigExport: ACE_Module
	{
		scope = 1;
		displayName = "Deprecated ACE Module";
	};
};
class ACE_Settings
{
	class ace_optionsmenu_showNewsOnMainMenu
	{
		value = 1;
		typeName = "BOOL";
		isClientSettable = 1;
		displayName = "$STR_ace_optionsmenu_showNewsOnMainMenu_name";
	};
};
class RscControlsGroupNoHScrollbars;
class RscHTML;
class RscText;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class controls
	{
		class InfoMods: RscControlsGroupNoHScrollbars
		{
			class Controls;
		};
		class InfoNews: InfoMods
		{
			class Controls: Controls
			{
				class Background;
				class BackgroundIcon;
				class Icon;
				class News;
				class Notification;
				class Button;
			};
		};
		class ACE_news_apex: InfoNews
		{
			idc = 80090;
			y = "safezoneY + safezoneH - (3 * 2 + 1) * (pixelH * pixelGrid * 2) - 4 * (4 * pixelH)";
			class Controls: Controls
			{
				class Background: Background{};
				class BackgroundIcon: BackgroundIcon{};
				class Icon: Icon
				{
					text = "\z\ace\addons\optionsmenu\gui\aceMenuIcon_ca.paa";
				};
				class CurrentVersionInfo: RscText
				{
					idc = 80091;
					style = 1;
					text = "";
					sizeEx = "(pixelH * pixelGrid * 1.5)";
					font = "RobotoCondensedLight";
					shadow = 1;
					colorBackground[] = {0,0,0,0};
					x = 0;
					y = 0;
					w = "(10 - 1.25 * 2) * (pixelW * pixelGrid * 2)";
					h = "1 * (pixelH * pixelGrid * 2)";
					onLoad = "(_this select 0) ctrlenable false;";
				};
				class HTTPVersionInfo: RscHTML
				{
					idc = 80092;
					shadow = 0;
					class H1
					{
						sizeEx = "(pixelH * pixelGrid * 1.5)";
						font = "RobotoCondensedLight";
						fontBold = "RobotoCondensedLight";
						align = "right";
					};
					class H2: H1
					{
						sizeEx = "(pixelH * pixelGrid * 1.5)";
					};
					class P: H1
					{
						sizeEx = "(pixelH * pixelGrid * 1.5)";
					};
					x = 0;
					y = "1 * (pixelH * pixelGrid * 2)";
					w = "(10 - 1.25 * 2) * (pixelW * pixelGrid * 2)";
					h = "1 * (pixelH * pixelGrid * 2)";
					onLoad = "(_this select 0) ctrlenable false;";
				};
				class Button: Button
				{
					tooltip = "Download latest and report issues:";
					url = "https://github.com/acemod/ACE3/releases";
				};
			};
		};
	};
};
class RscDisplayEmpty;
class ace_optionsmenu_MainMenuHelperDumpDebug: RscDisplayEmpty
{
	onLoad = "[] call ace_optionsmenu_fnc_debugDumpToClipboard; (_this select 0) closeDisplay 0;";
};
class ace_optionsmenu_MainMenuHelperHeadBugFix: RscDisplayEmpty
{
	onLoad = "0 spawn ace_common_fnc_headBugFix; (_this select 0) closeDisplay 0;";
};
class ACE_Extensions
{
	extensions[] += {"ace_clipboard"};
};
class CfgCommands
{
	allowedHTMLLoadURIs[] += {"https://ace3mod.com/version.html"};
};
