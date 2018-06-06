////////////////////////////////////////////////////////////////////
//DeRap: ace_missionmodules\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:20 2018 : 'file' last modified on Mon Apr 16 21:46:43 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_missionmodules
	{
		name = "ACE3 - Mission Modules";
		units[] = {"ACE_moduleAmbianceSound"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Glowbal"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_missionmodules
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\missionmodules\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_missionmodules
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\missionmodules\XEH_preInit.sqf'";
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class ACE_missionModules: NO_CATEGORY
	{
		displayName = "$STR_ace_missionmodules_Category_DisplayName";
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits{};
	};
	class ACE_moduleAmbianceSound: Module_F
	{
		scope = 2;
		displayName = "$STR_ace_missionmodules_AmbianceSounds_DisplayName";
		icon = "\z\ace\addons\missionmodules\UI\Icon_Module_Ambient_Sounds_ca.paa";
		category = "ACE_missionModules";
		function = "ace_missionmodules_fnc_moduleAmbianceSound";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class soundFiles
			{
				displayName = "$STR_ace_missionmodules_AmbianceSounds_soundFiles_DisplayName";
				description = "$STR_ace_missionmodules_AmbianceSounds_soundFiles_Description";
				typeName = "STRING";
				defaultValue = "";
			};
			class minimalDistance
			{
				displayName = "$STR_ace_missionmodules_AmbianceSounds_minimalDistance_DisplayName";
				description = "$STR_ace_missionmodules_AmbianceSounds_minimalDistance_Description";
				typeName = "NUMBER";
				defaultValue = 400;
			};
			class maximalDistance
			{
				displayName = "$STR_ace_missionmodules_AmbianceSounds_maximalDistance_DisplayName";
				description = "$STR_ace_missionmodules_AmbianceSounds_maximalDistance_Description";
				typeName = "NUMBER";
				defaultValue = 900;
			};
			class minimalDelay
			{
				displayName = "$STR_ace_missionmodules_AmbianceSounds_minimalDelay_DisplayName";
				description = "$STR_ace_missionmodules_AmbianceSounds_minimalDelay_Description";
				typeName = "NUMBER";
				defaultValue = 10;
			};
			class maximalDelay
			{
				displayName = "$STR_ace_missionmodules_AmbianceSounds_maximalDelay_DisplayName";
				description = "$STR_ace_missionmodules_AmbianceSounds_maximalDelay_Description";
				typeName = "NUMBER";
				defaultValue = 170;
			};
			class followPlayers
			{
				displayName = "$STR_ace_missionmodules_AmbianceSounds_followPlayers_DisplayName";
				description = "$STR_ace_missionmodules_AmbianceSounds_followPlayers_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class soundVolume
			{
				displayName = "$STR_ace_missionmodules_AmbianceSounds_soundVolume_DisplayName";
				description = "$STR_ace_missionmodules_AmbianceSounds_soundVolume_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_missionmodules_AmbianceSounds_Description";
			sync[] = {};
		};
	};
};
