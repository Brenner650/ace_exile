////////////////////////////////////////////////////////////////////
//DeRap: ace_viewdistance\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:26 2018 : 'file' last modified on Mon Apr 16 21:49:05 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_viewdistance
	{
		name = "ACE3 - View Distance";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Winter","Jonpas","Arkhir"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_viewdistance
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\viewdistance\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_viewdistance
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\viewdistance\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_viewdistance
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\viewdistance\XEH_clientInit.sqf'";
	};
};
class ACE_Settings
{
	class ace_viewdistance_enabled
	{
		category = "$STR_ace_viewdistance_Module_DisplayName";
		typeName = "BOOL";
		value = 1;
		displayName = "$STR_ace_viewdistance_enabled_DisplayName";
		description = "$STR_ace_viewdistance_enabled_Description";
	};
	class ace_viewdistance_viewDistanceOnFoot
	{
		category = "$STR_ace_viewdistance_Module_DisplayName";
		typeName = "SCALAR";
		isClientSettable = 1;
		value = 0;
		values[] = {"$STR_ace_viewdistance_videosettings","500","1000","1500","2000","2500","3000","3500","4000","5000","6000","7000","8000","9000","10000"};
		displayName = "$STR_ace_viewdistance_onFoot_DisplayName";
		description = "$STR_ace_viewdistance_onFoot_Description";
	};
	class ace_viewdistance_viewDistanceLandVehicle
	{
		category = "$STR_ace_viewdistance_Module_DisplayName";
		typeName = "SCALAR";
		isClientSettable = 1;
		value = 0;
		values[] = {"$STR_ace_viewdistance_videosettings","500","1000","1500","2000","2500","3000","3500","4000","5000","6000","7000","8000","9000","10000"};
		displayName = "$STR_ace_viewdistance_landVehicle_DisplayName";
		description = "$STR_ace_viewdistance_landVehicle_Description";
	};
	class ace_viewdistance_viewDistanceAirVehicle
	{
		category = "$STR_ace_viewdistance_Module_DisplayName";
		typeName = "SCALAR";
		isClientSettable = 1;
		value = 0;
		values[] = {"$STR_ace_viewdistance_videosettings","500","1000","1500","2000","2500","3000","3500","4000","5000","6000","7000","8000","9000","10000"};
		displayName = "$STR_ace_viewdistance_airVehicle_DisplayName";
		description = "$STR_ace_viewdistance_airVehicle_Description";
	};
	class ace_viewdistance_limitViewDistance
	{
		category = "$STR_ace_viewdistance_Module_DisplayName";
		typeName = "SCALAR";
		value = 10000;
		displayName = "$STR_ace_viewdistance_limit_DisplayName";
		description = "$STR_ace_viewdistance_limit_setting";
		sliderSettings[] = {500,12000,10000,0};
	};
	class ace_viewdistance_objectViewDistanceCoeff
	{
		category = "$STR_ace_viewdistance_Module_DisplayName";
		typeName = "SCALAR";
		isClientSettable = 1;
		value = 0;
		values[] = {"$STR_ace_viewdistance_object_off","$STR_ace_viewdistance_object_verylow","$STR_ace_viewdistance_object_low","$STR_ace_viewdistance_object_medium","$STR_ace_viewdistance_object_high","$STR_ace_viewdistance_object_veryhigh","$STR_ace_viewdistance_object_fovBased"};
		displayName = "$STR_ace_viewdistance_object_DisplayName";
		description = "$STR_ace_viewdistance_object_Description";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_viewdistance_ModuleSettings: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		function = "ace_viewdistance_fnc_initModule";
		displayName = "$STR_ace_viewdistance_Module_DisplayName";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		class Arguments
		{
			class moduleViewDistanceEnabled
			{
				displayName = "$STR_ace_viewdistance_enabled_DisplayName";
				description = "$STR_ace_viewdistance_enabled_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class moduleViewDistanceLimit
			{
				displayName = "$STR_ace_viewdistance_limit_DisplayName";
				description = "$STR_ace_viewdistance_limit_Description";
				typeName = "NUMBER";
				defaultValue = 10000;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_viewdistance_Module_Description";
			sync[] = {};
		};
	};
};
