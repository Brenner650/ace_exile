////////////////////////////////////////////////////////////////////
//DeRap: ace_finger\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:16 2018 : 'file' last modified on Mon Apr 16 21:43:17 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_finger
	{
		name = "ACE3 - Finger";
		units[] = {"ace_finger_moduleSettings"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Drill"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_finger_enabled
	{
		category = "$STR_ace_finger_DisplayName";
		value = 0;
		typeName = "BOOL";
		displayName = "$STR_ace_finger_enabled_displayName";
	};
	class ace_finger_maxRange
	{
		category = "$STR_ace_finger_DisplayName";
		value = 4;
		typeName = "SCALAR";
		displayName = "$STR_ace_finger_maxRange_displayName";
		description = "$STR_ace_finger_maxRange_description";
		sliderSettings[] = {0,50,4,1};
	};
	class ace_finger_indicatorForSelf
	{
		category = "$STR_ace_finger_DisplayName";
		value = 1;
		typeName = "BOOL";
		isClientSettable = 1;
		displayName = "$STR_ace_finger_indicatorForSelf_name";
		description = "$STR_ace_finger_indicatorForSelf_description";
	};
	class ace_finger_indicatorColor
	{
		category = "$STR_ace_finger_DisplayName";
		value[] = {0.83,0.68,0.21,0.75};
		typeName = "COLOR";
		isClientSettable = 1;
		displayName = "$STR_ace_finger_indicatorColor_name";
		description = "$STR_ace_finger_indicatorColor_description";
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_finger
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\finger\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_finger
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\finger\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_finger
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\finger\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_finger_moduleSettings: ACE_Module
	{
		scope = 1;
		category = "ACE";
		displayName = "$STR_ace_finger_moduleSettings_displayName";
		icon = "\z\ace\addons\finger\UI\Icon_Module_finger_ca.paa";
		function = "ace_finger_fnc_moduleSettings";
		isGlobal = 1;
		isSingular = 1;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class enabled
			{
				displayName = "$STR_ace_finger_enabled_DisplayName";
				description = "$STR_ace_finger_enabled_DisplayName";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class maxRange
			{
				displayName = "$STR_ace_finger_maxRange_displayName";
				description = "$STR_ace_finger_maxRange_description";
				typeName = "NUMBER";
				defaultValue = 4;
			};
		};
	};
};
