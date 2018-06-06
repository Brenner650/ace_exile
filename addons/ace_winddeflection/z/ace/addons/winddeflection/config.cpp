////////////////////////////////////////////////////////////////////
//DeRap: ace_winddeflection\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:29 2018 : 'file' last modified on Mon Apr 16 21:49:06 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_winddeflection
	{
		name = "ACE3 - Wind Deflection";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_weather"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"$STR_ace_common_ACETeam","Glowbal","Ruthberg"};
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
		class ace_winddeflection
		{
			list[] = {"ace_winddeflection"};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_winddeflection
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\winddeflection\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_winddeflection
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\winddeflection\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_winddeflection
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\winddeflection\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_winddeflection_ModuleSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_winddeflection_windDeflection_DisplayName";
		icon = "\z\ace\addons\winddeflection\UI\Icon_Module_Wind_ca.paa";
		category = "ACE";
		function = "ace_winddeflection_fnc_initModuleSettings";
		functionPriority = 1;
		isGlobal = 1;
		isSingular = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class enabled
			{
				displayName = "$STR_ace_winddeflection_deflectionModule_DisplayName";
				description = "$STR_ace_winddeflection_deflectionModule_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleEnabled
			{
				displayName = "$STR_ace_winddeflection_vehicleEnabled_DisplayName";
				description = "$STR_ace_winddeflection_vehicleEnabled_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class simulationInterval
			{
				displayName = "$STR_ace_winddeflection_simulationInterval_DisplayName";
				description = "$STR_ace_winddeflection_simulationInterval_Description";
				typeName = "NUMBER";
				defaultValue = 0.05;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_winddeflection_windDeflection_Description";
		};
	};
};
class ACE_Settings
{
	class ace_winddeflection_enabled
	{
		category = "$STR_ace_winddeflection_windDeflection_DisplayName";
		displayName = "$STR_ace_winddeflection_deflectionModule_DisplayName";
		description = "$STR_ace_winddeflection_deflectionModule_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_winddeflection_vehicleEnabled
	{
		category = "$STR_ace_winddeflection_windDeflection_DisplayName";
		displayName = "$STR_ace_winddeflection_vehicleEnabled_DisplayName";
		description = "$STR_ace_winddeflection_vehicleEnabled_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_winddeflection_simulationInterval
	{
		category = "$STR_ace_winddeflection_windDeflection_DisplayName";
		displayName = "$STR_ace_winddeflection_simulationInterval_DisplayName";
		description = "$STR_ace_winddeflection_simulationInterval_Description";
		typeName = "SCALAR";
		value = 0.05;
		sliderSettings[] = {0,0.2,0.05,2};
	};
};
