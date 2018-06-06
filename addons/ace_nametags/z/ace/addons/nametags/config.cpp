////////////////////////////////////////////////////////////////////
//DeRap: ace_nametags\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:06 2018 : 'file' last modified on Mon Apr 16 21:46:50 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_nametags
	{
		name = "ACE3 - Name Tags";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_nametags
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\nametags\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_nametags
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\nametags\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_nametags
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\nametags\XEH_postInit.sqf'";
	};
};
class ACE_Settings
{
	class ace_nametags_defaultNametagColor
	{
		value[] = {0.77,0.51,0.08,1};
		typeName = "COLOR";
		isClientSettable = 1;
		displayName = "$STR_ace_nametags_DefaultNametagColor";
		category = "$STR_ace_nametags_Module_DisplayName";
	};
	class ace_nametags_showPlayerNames
	{
		value = 1;
		typeName = "SCALAR";
		isClientSettable = 1;
		displayName = "$STR_ace_nametags_ShowPlayerNames";
		description = "$STR_ace_nametags_ShowPlayerNames_Desc";
		values[] = {"$STR_ace_common_Disabled","$STR_ace_common_Enabled","$STR_ace_nametags_OnlyCursor","$STR_ace_nametags_OnlyKeypress","$STR_ace_nametags_OnlyCursorAndKeypress","$STR_ace_nametags_FadeOnBorder"};
		category = "$STR_ace_nametags_Module_DisplayName";
	};
	class ace_nametags_showPlayerRanks
	{
		value = 1;
		typeName = "BOOL";
		isClientSettable = 1;
		displayName = "$STR_ace_nametags_ShowPlayerRanks";
		category = "$STR_ace_nametags_Module_DisplayName";
	};
	class ace_nametags_showVehicleCrewInfo
	{
		value = 1;
		typeName = "BOOL";
		isClientSettable = 1;
		displayName = "$STR_ace_nametags_ShowVehicleCrewInfo";
		category = "$STR_ace_nametags_Module_DisplayName";
	};
	class ace_nametags_showNamesForAI
	{
		value = 0;
		typeName = "BOOL";
		isClientSettable = 1;
		displayName = "$STR_ace_nametags_ShowNamesForAI";
		category = "$STR_ace_nametags_Module_DisplayName";
	};
	class ace_nametags_showCursorTagForVehicles
	{
		displayName = "$STR_ace_nametags_showCursorTagForVehicles_DisplayName";
		value = 0;
		typeName = "BOOL";
		isClientSettable = 0;
		category = "$STR_ace_nametags_Module_DisplayName";
	};
	class ace_nametags_showSoundWaves
	{
		value = 1;
		typeName = "SCALAR";
		isClientSettable = 1;
		displayName = "$STR_ace_nametags_ShowSoundWaves";
		description = "$STR_ace_nametags_ShowSoundWaves_Desc";
		values[] = {"$STR_ace_common_Disabled","$STR_ace_nametags_NameTagSettings","$STR_ace_nametags_AlwaysShowAll"};
		category = "$STR_ace_nametags_Module_DisplayName";
	};
	class ace_nametags_playerNamesViewDistance
	{
		displayName = "$STR_ace_nametags_playerNamesViewDistance_DisplayName";
		value = 5;
		typeName = "SCALAR";
		isClientSettable = 0;
		category = "$STR_ace_nametags_Module_DisplayName";
		sliderSettings[] = {0,50,5,1};
	};
	class ace_nametags_playerNamesMaxAlpha
	{
		displayName = "$STR_ace_nametags_playerNamesMaxAlpha";
		value = 0.8;
		typeName = "SCALAR";
		isClientSettable = 0;
		category = "$STR_ace_nametags_Module_DisplayName";
		sliderSettings[] = {0,1,0.8,2};
	};
	class ace_nametags_tagSize
	{
		value = 2;
		typeName = "SCALAR";
		isClientSettable = 1;
		displayName = "$STR_ace_nametags_TagSize_Name";
		description = "$STR_ace_nametags_TagSize_Description";
		values[] = {"$str_very_small","$str_small","$str_medium","$str_large","$str_very_large"};
		category = "$STR_ace_nametags_Module_DisplayName";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ACE_ModuleNameTags: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_nametags_Module_DisplayName";
		function = "ace_nametags_fnc_moduleNameTags";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		icon = "\z\ace\addons\nametags\UI\Icon_Module_NameTags_ca.paa";
		class Arguments
		{
			class showPlayerNames
			{
				displayName = "$STR_ace_nametags_ShowPlayerNames";
				description = "$STR_ace_nametags_ShowPlayerNames_Desc";
				typeName = "NUMBER";
				class values
				{
					class DoNotForce
					{
						default = 1;
						name = "$STR_ace_common_DoNotForce";
						value = -1;
					};
					class ForceHide
					{
						name = "$STR_ace_nametags_ForceHide";
						value = 0;
					};
					class ForceShow
					{
						name = "$STR_ace_nametags_ForceShow";
						value = 1;
					};
					class ForceShowFadeOnBorder
					{
						name = "$STR_ace_nametags_FadeOnBorder";
						value = 5;
					};
					class ForceShowOnlyCursor
					{
						name = "$STR_ace_nametags_ForceShowOnlyCursor";
						value = 2;
					};
					class ForceShowOnlyKeypress
					{
						name = "$STR_ace_nametags_ForceShowOnlyKeypress";
						value = 3;
					};
					class ForceShowOnlyCursorAndKeypress
					{
						name = "$STR_ace_nametags_ForceShowOnlyCursorAndKeypress";
						value = 4;
					};
				};
			};
			class playerNamesViewDistance
			{
				displayName = "$STR_ace_nametags_PlayerNamesViewDistance_DisplayName";
				description = "$STR_ace_nametags_PlayerNamesViewDistance_Description";
				typeName = "NUMBER";
				defaultValue = 5;
			};
			class showNamesForAI
			{
				displayName = "$STR_ace_nametags_showNamesForAI_DisplayName";
				description = "$STR_ace_nametags_showNamesForAI_Description";
				typeName = "NUMBER";
				class values
				{
					class DoNotForce
					{
						default = 1;
						name = "$STR_ace_common_DoNotForce";
						value = -1;
					};
					class ForceHide
					{
						name = "$STR_ace_nametags_ForceHide";
						value = 0;
					};
					class ForceShow
					{
						name = "$STR_ace_nametags_ForceShow";
						value = 1;
					};
				};
			};
			class showVehicleCrewInfo
			{
				displayName = "$STR_ace_nametags_showVehicleCrewInfo_DisplayName";
				description = "$STR_ace_nametags_showVehicleCrewInfo_Description";
				typeName = "NUMBER";
				class values
				{
					class DoNotForce
					{
						default = 1;
						name = "$STR_ace_common_DoNotForce";
						value = -1;
					};
					class ForceHide
					{
						name = "$STR_ace_nametags_ForceHide";
						value = 0;
					};
					class ForceShow
					{
						name = "$STR_ace_nametags_ForceShow";
						value = 1;
					};
				};
			};
			class showCursorTagForVehicles
			{
				displayName = "$STR_ace_nametags_showCursorTagForVehicles_DisplayName";
				description = "$STR_ace_nametags_showCursorTagForVehicles_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_nametags_Module_Description";
		};
	};
};
class RscTitles
{
	titles[] = {"ACE_CrewInfo_dialog"};
	class ACE_CrewInfo_dialog
	{
		idd = -1;
		movingEnable = 1;
		duration = 1;
		fadein = 0;
		fadeout = 999999;
		name = "ACE_CrewInfo_dialog";
		controlsBackground[] = {"ACE_CrewInfo_text"};
		onLoad = "uiNamespace setVariable ['ACE_CrewInfo_dialog', _this select 0]";
		onUnload = "uiNamespace setVariable ['ACE_CrewInfo_dialog', objNull]";
		class ACE_CrewInfo_text
		{
			idc = 11123;
			type = 13;
			style = 0;
			x = "SafeZonex + SafezoneW - 0.31";
			y = "SafeZoneY + SafeZoneH * 0.4";
			w = 0.3;
			h = 0.6;
			size = 0.018;
			colorBackground[] = {0,0,0,0};
			colortext[] = {"(profilenamespace getVariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getVariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getVariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getVariable ['IGUI_TEXT_RGB_A',0.8])"};
			text = "";
			class Attributes
			{
				align = "right";
			};
		};
	};
};
