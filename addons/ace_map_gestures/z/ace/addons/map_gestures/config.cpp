////////////////////////////////////////////////////////////////////
//DeRap: ace_map_gestures\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:20 2018 : 'file' last modified on Mon Apr 16 21:45:46 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_map_gestures
	{
		name = "ACE3 - Map Gestures";
		units[] = {"ace_map_gestures_moduleGroupSettings"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Dslyecxi","MikeMatrix"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_map_gestures_enabled
	{
		displayName = "$STR_ace_map_gestures_enabled_displayName";
		description = "$STR_ace_map_gestures_enabled_description";
		category = "$STR_ace_map_gestures_mapGestures_category";
		typeName = "BOOL";
		value = 1;
	};
	class ace_map_gestures_maxRange
	{
		displayName = "$STR_ace_map_gestures_maxRange_displayName";
		description = "$STR_ace_map_gestures_maxRange_description";
		category = "$STR_ace_map_gestures_mapGestures_category";
		typeName = "SCALAR";
		value = 7;
		sliderSettings[] = {0,50,7,1};
	};
	class ace_map_gestures_interval
	{
		displayName = "$STR_ace_map_gestures_interval_displayName";
		description = "$STR_ace_map_gestures_interval_description";
		category = "$STR_ace_map_gestures_mapGestures_category";
		typeName = "SCALAR";
		value = 0.03;
		sliderSettings[] = {0,1,0.03,2};
	};
	class ace_map_gestures_nameTextColor
	{
		displayName = "$STR_ace_map_gestures_nameTextColor_displayName";
		description = "$STR_ace_map_gestures_nameTextColor_description";
		category = "$STR_ace_map_gestures_mapGestures_category";
		isClientSettable = 1;
		typeName = "COLOR";
		value[] = {0.2,0.2,0.2,0.3};
	};
	class ace_map_gestures_defaultLeadColor
	{
		displayName = "$STR_ace_map_gestures_defaultLeadColor_displayName";
		description = "$STR_ace_map_gestures_defaultLeadColor_description";
		category = "$STR_ace_map_gestures_mapGestures_category";
		isClientSettable = 1;
		typeName = "COLOR";
		value[] = {1,0.88,0,0.95};
	};
	class ace_map_gestures_defaultColor
	{
		displayName = "$STR_ace_map_gestures_defaultColor_displayName";
		description = "$STR_ace_map_gestures_defaultColor_description";
		category = "$STR_ace_map_gestures_mapGestures_category";
		isClientSettable = 1;
		typeName = "COLOR";
		value[] = {1,0.88,0,0.7};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_map_gestures
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\map_gestures\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_map_gestures
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\map_gestures\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_map_gestures
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\map_gestures\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_map_gestures_moduleSettings: ACE_Module
	{
		scope = 1;
		category = "ACE";
		displayName = "$STR_ace_map_gestures_moduleSettings_displayName";
		function = "ace_map_gestures_fnc_moduleSettings";
		isGlobal = 1;
		isSingular = 1;
		author = "$STR_ace_common_ACETeam";
		icon = "\z\ace\addons\map_gestures\ui\icon_module_map_gestures_ca.paa";
		class Arguments
		{
			class enabled
			{
				displayName = "$STR_ace_map_gestures_enabled_DisplayName";
				description = "$STR_ace_map_gestures_enabled_description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class maxRange
			{
				displayName = "$STR_ace_map_gestures_maxRange_displayName";
				description = "$STR_ace_map_gestures_maxRange_description";
				typeName = "NUMBER";
				defaultValue = 7;
			};
			class interval
			{
				displayName = "$STR_ace_map_gestures_interval_displayName";
				description = "$STR_ace_map_gestures_interval_description";
				typeName = "NUMBER";
				defaultValue = 0.03;
			};
			class defaultLeadColor
			{
				displayName = "$STR_ace_map_gestures_defaultLeadColor_displayName";
				description = "$STR_ace_map_gestures_defaultLeadColor_description";
				typeName = "STRING";
				defaultValue = "1,0.88,0,0.95";
			};
			class defaultColor
			{
				displayName = "$STR_ace_map_gestures_defaultColor_displayName";
				description = "$STR_ace_map_gestures_defaultColor_description";
				typeName = "STRING";
				defaultValue = "1,0.88,0,0.7";
			};
		};
	};
	class ace_map_gestures_moduleGroupSettings: ACE_Module
	{
		scope = 2;
		category = "ACE";
		displayName = "$STR_ace_map_gestures_moduleGroupSettings_displayName";
		function = "ace_map_gestures_fnc_moduleGroupSettings";
		isGlobal = 2;
		author = "$STR_ace_common_ACETeam";
		icon = "\z\ace\addons\map_gestures\ui\icon_module_map_gestures_ca.paa";
		class Arguments
		{
			class leadColor
			{
				displayName = "$STR_ace_map_gestures_leadColor_displayName";
				description = "$STR_ace_map_gestures_leadColor_description";
				typeName = "STRING";
				defaultValue = "1,0.88,0,0.95";
			};
			class color
			{
				displayName = "$STR_ace_map_gestures_color_displayName";
				description = "$STR_ace_map_gestures_color_description";
				typeName = "STRING";
				defaultValue = "1,0.88,0,0.7";
			};
		};
	};
};
