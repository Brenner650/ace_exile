////////////////////////////////////////////////////////////////////
//DeRap: ace_quickmount\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:24 2018 : 'file' last modified on Mon Apr 16 21:47:18 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_quickmount
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Kingsley"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_quickmount
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\quickmount\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_quickmount
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\quickmount\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_quickmount
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\quickmount\XEH_postInitClient.sqf'";
	};
};
class ACE_Settings
{
	class ace_quickmount_enabled
	{
		value = 0;
		typeName = "BOOL";
		category = "$STR_ace_quickmount_Category";
		displayName = "$STR_ace_common_Enabled";
		description = "$STR_ace_quickmount_KeybindDescription";
		isClientSettable = 1;
		force = 0;
	};
	class ace_quickmount_distance
	{
		value = 3;
		typeName = "SCALAR";
		category = "$STR_ace_quickmount_Category";
		displayName = "$STR_ace_quickmount_Distance";
		description = "$STR_ace_quickmount_DistanceDescription";
		isClientSettable = 0;
		force = 0;
		values[] = {"0m","1m","2m","3m","4m","5m","6m","7m","8m","9m","10m"};
	};
	class ace_quickmount_speed
	{
		value = 18;
		typeName = "SCALAR";
		category = "$STR_ace_quickmount_Category";
		displayName = "$STR_ace_quickmount_Speed";
		description = "$STR_ace_quickmount_SpeedDescription";
		isClientSettable = 0;
		force = 0;
		values[] = {"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30"};
	};
	class ace_quickmount_priority
	{
		value = 0;
		typeName = "SCALAR";
		category = "$STR_ace_quickmount_Category";
		displayName = "$STR_ace_quickmount_Priority";
		description = "$STR_ace_quickmount_PriorityDescription";
		isClientSettable = 1;
		force = 0;
		values[] = {"$str_getin_pos_driver","$str_getin_pos_gunn","$str_getin_pos_comm","$STR_GETIN_POS_PASSENGER"};
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_quickmount_module: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_quickmount_Category";
		function = "ace_quickmount_fnc_moduleInit";
		scope = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "a3\ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_getin_ca.paa";
		class Arguments
		{
			class enabled
			{
				displayName = "$STR_ace_common_Enabled";
				description = "$STR_ace_quickmount_KeybindDescription";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class distance
			{
				displayName = "$STR_ace_quickmount_Distance";
				description = "$STR_ace_quickmount_DistanceDescription";
				typeName = "NUMBER";
				defaultValue = 3;
			};
			class speed
			{
				displayName = "$STR_ace_quickmount_Speed";
				description = "$STR_ace_quickmount_SpeedDescription";
				typeName = "NUMBER";
				defaultValue = 18;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_quickmount_KeybindDescription";
		};
	};
};
