////////////////////////////////////////////////////////////////////
//DeRap: ace_pylons\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:22 2018 : 'file' last modified on Mon Apr 16 21:47:18 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_pylons
	{
		name = "ACE3 - Pylons";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interact_menu"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"654wak654"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_pylons_enabled
	{
		category = "$STR_ace_pylons_Category_Pylons";
		displayName = "$STR_ace_pylons_Enabled";
		description = "$STR_ace_pylons_Enabled_description";
		value = 1;
		typeName = "BOOL";
	};
	class ace_pylons_rearmNewPylons
	{
		category = "$STR_ace_pylons_Category_Pylons";
		displayName = "$STR_ace_pylons_RearmNewPylons";
		description = "$STR_ace_pylons_RearmNewPylons_description";
		value = 0;
		typeName = "BOOL";
	};
	class ace_pylons_searchDistance
	{
		category = "$STR_ace_pylons_Category_Pylons";
		displayName = "$STR_ace_pylons_SearchDistance";
		description = "$STR_ace_pylons_SearchDistance_description";
		value = 15;
		typeName = "SCALAR";
		sliderSettings[] = {0,50,15,1};
	};
	class ace_pylons_timePerPylon
	{
		category = "$STR_ace_pylons_Category_Pylons";
		displayName = "$STR_ace_pylons_TimePerPylon";
		description = "$STR_ace_pylons_TimePerPylon_description";
		value = 5;
		typeName = "SCALAR";
		sliderSettings[] = {0,10,5,1};
	};
	class ace_pylons_requireEngineer
	{
		category = "$STR_ace_pylons_Category_Pylons";
		displayName = "$STR_ace_pylons_RequireEngineer";
		description = "$STR_ace_pylons_RequireEngineer_description";
		value = 0;
		typeName = "BOOL";
	};
	class ace_pylons_requireToolkit
	{
		category = "$STR_ace_pylons_Category_Pylons";
		displayName = "$STR_ace_pylons_RequireToolkit";
		description = "$STR_ace_pylons_RequireToolkit_description";
		value = 1;
		typeName = "BOOL";
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_pylons
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\pylons\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_pylons
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\pylons\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_pylons
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\pylons\XEH_postInit.sqf'";
	};
};
class RscCombo;
class ace_pylons_CtrlCombo: RscCombo
{
	arrowEmpty = "\a3\3DEN\Data\Controls\ctrlCombo\arrowEmpty_ca.paa";
	arrowFull = "\a3\3DEN\Data\Controls\ctrlCombo\arrowFull_ca.paa";
	colorSelectBackground[] = {"(profileNamespace getVariable ['GUI_BCG_RGB_R', 0.13])","(profileNamespace getVariable ['GUI_BCG_RGB_G', 0.54])","(profileNamespace getVariable ['GUI_BCG_RGB_B', 0.21])",1};
};
class IGUIBack;
class RscCheckBox;
class RscListBox;
class RscEdit;
class RscButtonMenu;
class RscText;
class RscPictureKeepAspect;
class ace_pylons_DialogLoadout
{
	idd = 654654;
	name = "ace_pylons_DialogLoadout";
	enableSimulation = 1;
	class Controls
	{
		class TextTitlebar: RscText
		{
			idc = 100;
			text = "$STR_ace_pylons_AircraftLoadoutTitle";
			x = "0.15835 * safezoneW + safezoneX";
			y = "0.262 * safezoneH + safezoneY";
			w = "0.68304 * safezoneW";
			h = "0.028 * safezoneH";
			colorBackground[] = {"(profileNamespace getVariable ['GUI_BCG_RGB_R', 0.13])","(profileNamespace getVariable ['GUI_BCG_RGB_G', 0.54])","(profileNamespace getVariable ['GUI_BCG_RGB_B', 0.21])",1};
		};
		class BackgroundDialog: IGUIBack
		{
			idc = 110;
			x = "0.15835 * safezoneW + safezoneX";
			y = "0.29 * safezoneH + safezoneY";
			w = "0.68304 * safezoneW";
			h = "0.448 * safezoneH";
			colorBackground[] = {0,0,0,0.3};
		};
		class BackgroundPicture: IGUIBack
		{
			idc = 111;
			x = "0.171616 * safezoneW + safezoneX";
			y = "0.318 * safezoneH + safezoneY";
			w = "0.440035 * safezoneW";
			h = "0.392 * safezoneH";
			colorBackground[] = {0.3,0.3,0.3,1};
		};
		class PictureAircraft: RscPictureKeepAspect
		{
			idc = 120;
			x = "0.171616 * safezoneW + safezoneX";
			y = "0.318 * safezoneH + safezoneY";
			w = "0.440035 * safezoneW";
			h = "0.392 * safezoneH";
		};
		class CheckboxMirror: RscCheckBox
		{
			idc = 130;
			x = "0.171616 * safezoneW + safezoneX";
			y = "0.318 * safezoneH + safezoneY";
			w = "0.0165 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class TextMirror: RscText
		{
			idc = 140;
			text = "$STR_3DEN_Object_Attribute_PylonsMirror_displayName";
			tooltip = "$STR_3DEN_Object_Attribute_PylonsMirror_tooltip";
			x = "0.188116 * safezoneW + safezoneX";
			y = "0.318 * safezoneH + safezoneY";
			w = "0.0656768 * safezoneW";
			h = "0.028 * safezoneH";
			colorBackground[] = {0,0,0,0.5};
		};
		class CheckboxFRIES: RscCheckBox
		{
			idc = 141;
			x = "0.171616 * safezoneW + safezoneX";
			y = "0.346 * safezoneH + safezoneY";
			w = "0.0165 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class TextFRIES: RscText
		{
			idc = 142;
			text = "FRIES";
			x = "0.188116 * safezoneW + safezoneX";
			y = "0.346 * safezoneH + safezoneY";
			w = "0.0656768 * safezoneW";
			h = "0.028 * safezoneH";
			colorBackground[] = {0,0,0,0.5};
		};
		class TextListTitle: RscText
		{
			idc = 150;
			x = "0.624786 * safezoneW + safezoneX";
			y = "0.318 * safezoneH + safezoneY";
			w = "0.203437 * safezoneW";
			h = "0.028 * safezoneH";
			colorBackground[] = {0,0,0,0.5};
		};
		class ListLoadouts: RscListBox
		{
			idc = 160;
			x = "0.624786 * safezoneW + safezoneX";
			y = "0.346 * safezoneH + safezoneY";
			w = "0.203437 * safezoneW";
			h = "0.294 * safezoneH";
		};
		class EditLoadoutName: RscEdit
		{
			idc = 170;
			x = "0.624786 * safezoneW + safezoneX";
			y = "0.64 * safezoneH + safezoneY";
			w = "0.203437 * safezoneW";
			h = "0.028 * safezoneH";
			colorBackground[] = {0,0,0,0.7};
		};
		class ButtonSave: RscButtonMenu
		{
			idc = 180;
			action = "call ace_pylons_fnc_onButtonSave";
			text = "$STR_disp_int_save";
			x = "0.624786 * safezoneW + safezoneX";
			y = "0.682 * safezoneH + safezoneY";
			w = "0.0590625 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class ButtonLoad: RscButtonMenu
		{
			idc = 190;
			action = "call ace_pylons_fnc_onButtonLoad";
			text = "$STR_disp_int_load";
			x = "0.69703 * safezoneW + safezoneX";
			y = "0.682 * safezoneH + safezoneY";
			w = "0.0590625 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class ButtonDelete: RscButtonMenu
		{
			idc = 200;
			action = "call ace_pylons_fnc_onButtonDelete";
			text = "$STR_disp_delete";
			x = "0.769275 * safezoneW + safezoneX";
			y = "0.682 * safezoneH + safezoneY";
			w = "0.0590625 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class ButtonApply: RscButtonMenu
		{
			idc = 210;
			action = "call ace_pylons_fnc_onButtonApply";
			text = "$STR_ui_debug_but_apply";
			x = "0.683895 * safezoneW + safezoneX";
			y = "0.738 * safezoneH + safezoneY";
			w = "0.0721875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class ButtonClose: RscButtonMenu
		{
			idc = 211;
			text = "$STR_disp_cancel";
			action = "call ace_pylons_fnc_onButtonClose";
			x = "0.769275 * safezoneW + safezoneX";
			y = "0.738 * safezoneH + safezoneY";
			w = "0.0721875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class TextBanner: RscText
		{
			idc = 220;
			text = "$STR_ace_pylons_BannerText";
			x = "0.171616 * safezoneW + safezoneX";
			y = "0.738 * safezoneH + safezoneY";
			w = "0.440035 * safezoneW";
			h = "0.028 * safezoneH";
			colorBackground[] = {0.5,0,0,0.5};
		};
	};
};
