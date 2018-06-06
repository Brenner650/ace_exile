////////////////////////////////////////////////////////////////////
//DeRap: ace_advanced_throwing\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:11 2018 : 'file' last modified on Mon Apr 16 21:40:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_advanced_throwing
	{
		name = "ACE3 - Advanced Throwing";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common","ace_weaponselect"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Jonpas","Dslyecxi","Zapat"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		ammo[] = {"Grenade","GrenadeCore"};
	};
};
class ACE_Settings
{
	class ace_advanced_throwing_enabled
	{
		category = "$STR_ace_advanced_throwing_Category";
		displayName = "$STR_ace_advanced_throwing_Enable_DisplayName";
		description = "$STR_ace_advanced_throwing_Enable_Description";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_advanced_throwing_showThrowArc
	{
		category = "$STR_ace_advanced_throwing_Category";
		displayName = "$STR_ace_advanced_throwing_ShowThrowArc_DisplayName";
		description = "$STR_ace_advanced_throwing_ShowThrowArc_Description";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_advanced_throwing_showMouseControls
	{
		category = "$STR_ace_advanced_throwing_Category";
		displayName = "$STR_ace_advanced_throwing_ShowMouseControls_DisplayName";
		description = "$STR_ace_advanced_throwing_ShowMouseControls_Description";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_advanced_throwing_enablePickUp
	{
		category = "$STR_ace_advanced_throwing_Category";
		displayName = "$STR_ace_advanced_throwing_EnablePickUp_DisplayName";
		description = "$STR_ace_advanced_throwing_EnablePickUp_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_advanced_throwing_enablePickUpAttached
	{
		category = "$STR_ace_advanced_throwing_Category";
		displayName = "$STR_ace_advanced_throwing_EnablePickUpAttached_DisplayName";
		description = "$STR_ace_advanced_throwing_EnablePickUpAttached_Description";
		typeName = "BOOL";
		value = 1;
	};
};
class CfgAmmo
{
	class Default;
	class Grenade: Default
	{
		ace_advanced_throwing_torqueDirection[] = {1,1,0};
		ace_advanced_throwing_torqueMagnitude = "(50 + random 100) * selectRandom [1, -1]";
	};
	class GrenadeCore: Default
	{
		ace_advanced_throwing_torqueDirection[] = {1,1,0};
		ace_advanced_throwing_torqueMagnitude = "(50 + random 100) * selectRandom [1, -1]";
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_advanced_throwing
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\advanced_throwing\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_advanced_throwing
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\advanced_throwing\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_advanced_throwing
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\advanced_throwing\XEH_postInit.sqf'";
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class ACE_Module;
	class ace_advanced_throwing_Module: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_advanced_throwing_Category";
		function = "ace_advanced_throwing_fnc_moduleInit";
		scope = 1;
		isGlobal = 1;
		icon = "\z\ace\addons\advanced_throwing\UI\Icon_Module_AdvancedThrowing_ca.paa";
		class Arguments
		{
			class enabled
			{
				displayName = "$STR_ace_advanced_throwing_Enable_DisplayName";
				description = "$STR_ace_advanced_throwing_Enable_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class showThrowArc
			{
				displayName = "$STR_ace_advanced_throwing_ShowThrowArc_DisplayName";
				description = "$STR_ace_advanced_throwing_ShowThrowArc_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class showMouseControls
			{
				displayName = "$STR_ace_advanced_throwing_ShowMouseControls_DisplayName";
				description = "$STR_ace_advanced_throwing_ShowMouseControls_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class enablePickUp
			{
				displayName = "$STR_ace_advanced_throwing_EnablePickUp_DisplayName";
				description = "$STR_ace_advanced_throwing_EnablePickUp_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class enablePickUpAttached
			{
				displayName = "$STR_ace_advanced_throwing_EnablePickUpAttached_DisplayName";
				description = "$STR_ace_advanced_throwing_EnablePickUpAttached_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_advanced_throwing_Module_Description";
		};
	};
	class Items_base_F;
	class ace_advanced_throwing_pickUpHelper: Items_base_F
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "ACE Throwable Pick Up Helper";
		model = "\a3\weapons_f\dummyweapon.p3d";
		scope = 1;
		class ACE_Actions
		{
			class ace_advanced_throwing_pickUp
			{
				displayName = "$STR_ace_advanced_throwing_PickUp";
				condition = "[_player,true] call ace_advanced_throwing_fnc_canPrepare";
				statement = "_this call ace_advanced_throwing_fnc_pickUp";
				exceptions[] = {"isNotSwimming"};
				distance = 1.8;
				icon = "\a3\ui_f\data\igui\cfg\actions\obsolete\ui_action_takemine_ca.paa";
			};
		};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
	};
};
