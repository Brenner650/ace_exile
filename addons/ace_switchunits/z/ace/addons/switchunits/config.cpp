////////////////////////////////////////////////////////////////////
//DeRap: ace_switchunits\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:26 2018 : 'file' last modified on Mon Apr 16 21:48:52 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_switchunits
	{
		name = "ACE3 - Switch Units";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"bux578"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_switchunits
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\switchunits\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_switchunits
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\switchunits\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_switchunits
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\switchunits\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ACE_ModuleSwitchUnits: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_switchunits_DisplayName";
		function = "ace_switchunits_fnc_module";
		scope = 1;
		isGlobal = 1;
		icon = "\z\ace\addons\switchunits\UI\Icon_Module_SwitchUnits_ca.paa";
		class Arguments
		{
			class SwitchToWest
			{
				displayName = "$STR_ace_switchunits_SwitchToWest_DisplayName";
				description = "$STR_ace_switchunits_SwitchToWest_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class SwitchToEast
			{
				displayName = "$STR_ace_switchunits_SwitchToEast_DisplayName";
				description = "$STR_ace_switchunits_SwitchToEast_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class SwitchToIndependent
			{
				displayName = "$STR_ace_switchunits_SwitchToIndependent_DisplayName";
				description = "$STR_ace_switchunits_SwitchToIndependent_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class SwitchToCivilian
			{
				displayName = "$STR_ace_switchunits_SwitchToCivilian_DisplayName";
				description = "$STR_ace_switchunits_SwitchToCivilian_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class EnableSafeZone
			{
				displayName = "$STR_ace_switchunits_EnableSafeZone_DisplayName";
				description = "$STR_ace_switchunits_EnableSafeZone_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class SafeZoneRadius
			{
				displayName = "$STR_ace_switchunits_SafeZoneRadius_DisplayName";
				description = "$STR_ace_switchunits_SafeZoneRadius_Description";
				typeName = "NUMBER";
				defaultValue = 100;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_switchunits_Module_Description";
		};
	};
};
class ACE_Settings
{
	class ace_switchunits_enableSwitchUnits
	{
		category = "$STR_ace_switchunits_DisplayName";
		value = 0;
		typeName = "BOOL";
	};
	class ace_switchunits_switchToWest
	{
		category = "$STR_ace_switchunits_DisplayName";
		displayName = "$STR_ace_switchunits_SwitchToWest_DisplayName";
		description = "$STR_ace_switchunits_SwitchToWest_Description";
		value = 0;
		typeName = "BOOL";
	};
	class ace_switchunits_switchToEast
	{
		category = "$STR_ace_switchunits_DisplayName";
		displayName = "$STR_ace_switchunits_SwitchToEast_DisplayName";
		description = "$STR_ace_switchunits_SwitchToEast_Description";
		value = 0;
		typeName = "BOOL";
	};
	class ace_switchunits_switchToIndependent
	{
		category = "$STR_ace_switchunits_DisplayName";
		displayName = "$STR_ace_switchunits_SwitchToIndependent_DisplayName";
		description = "$STR_ace_switchunits_SwitchToIndependent_Description";
		value = 0;
		typeName = "BOOL";
	};
	class ace_switchunits_switchToCivilian
	{
		category = "$STR_ace_switchunits_DisplayName";
		displayName = "$STR_ace_switchunits_SwitchToCivilian_DisplayName";
		description = "$STR_ace_switchunits_SwitchToCivilian_Description";
		value = 0;
		typeName = "BOOL";
	};
	class ace_switchunits_enableSafeZone
	{
		category = "$STR_ace_switchunits_DisplayName";
		displayName = "$STR_ace_switchunits_EnableSafeZone_DisplayName";
		description = "$STR_ace_switchunits_EnableSafeZone_Description";
		value = 1;
		typeName = "BOOL";
	};
	class ace_switchunits_safeZoneRadius
	{
		category = "$STR_ace_switchunits_DisplayName";
		displayName = "$STR_ace_switchunits_SafeZoneRadius_DisplayName";
		description = "$STR_ace_switchunits_SafeZoneRadius_Description";
		value = 100;
		typeName = "SCALAR";
		sliderSettings[] = {0,1000,100,0};
	};
};
