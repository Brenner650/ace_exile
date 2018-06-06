////////////////////////////////////////////////////////////////////
//DeRap: ace_weather\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:26 2018 : 'file' last modified on Mon Apr 16 21:49:06 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_weather
	{
		name = "ACE3 - Weather";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"q1184","Rocko","esteldunedain","Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_weather
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\weather\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_weather
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\weather\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_weather
	{
		serverInit = "call compile preProcessFileLineNumbers '\z\ace\addons\weather\XEH_PostServerInit.sqf'";
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\weather\XEH_postInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class Display3DEN
	{
		ace_weather = "call compile preProcessFileLineNumbers '\z\ace\addons\weather\init3DEN.sqf'";
	};
};
class CfgWorlds
{
	class CAWorld;
	class Stratis: CAWorld
	{
		ACE_TempDay[] = {10,10,12,16,21,26,29,28,25,20,15,11};
		ACE_TempNight[] = {4,4,6,8,13,17,20,20,16,12,8,6};
		ACE_Humidity[] = {78,77,78,74,71,60,59,61,65,72,79,80};
		ACE_WindSpeedMax[] = {{8.8,5.5},{8.8,5},{8.6,4.8},{7.6,3.4},{7.0,3.0},{7.1,3.0},{7.5,3.1},{8.0,3.2},{7.6,3.5},{7.8,4.6},{7.9,5.0},{8.2,5.5}};
		ACE_WindSpeedMean[] = {4.8,4.9,4.6,4.1,3.5,3.5,4.3,4.4,4.1,4.5,4.5,5.0};
		ACE_WindSpeedMin[] = {{0.2,5.0},{0.1,5.0},{0.2,4.3},{0.0,3.0},{0.0,2.1},{0.0,2.0},{0.1,3.1},{0.3,3.1},{0.0,3.6},{0.0,4.2},{0.1,5.0},{0.2,5.5}};
		ACE_WindDirectionProbabilities[] = {{0.06,0.32,0.05,0.04,0.15,0.06,0.02,0.02},{0.08,0.32,0.04,0.04,0.18,0.06,0.02,0.02},{0.09,0.3,0.04,0.04,0.2,0.06,0.02,0.03},{0.1,0.25,0.03,0.04,0.22,0.06,0.02,0.04},{0.18,0.25,0.03,0.04,0.18,0.04,0.01,0.05},{0.25,0.25,0.03,0.03,0.15,0.03,0.0,0.08},{0.32,0.3,0.02,0.02,0.1,0.01,0.0,0.09},{0.28,0.35,0.02,0.01,0.08,0.01,0.0,0.08},{0.2,0.37,0.03,0.01,0.11,0.01,0.01,0.05},{0.1,0.39,0.04,0.02,0.15,0.02,0.01,0.03},{0.08,0.38,0.06,0.04,0.19,0.03,0.02,0.02},{0.06,0.37,0.05,0.03,0.18,0.04,0.02,0.02}};
	};
	class Altis: CAWorld
	{
		ACE_TempDay[] = {10,10,12,16,21,26,29,28,25,20,15,11};
		ACE_TempNight[] = {4,4,6,8,13,17,20,20,16,12,8,6};
		ACE_Humidity[] = {78,77,78,74,71,60,59,61,65,72,79,80};
		ACE_WindSpeedMax[] = {{8.8,5.5},{8.8,5},{8.6,4.8},{7.6,3.4},{7.0,3.0},{7.1,3.0},{7.5,3.1},{8.0,3.2},{7.6,3.5},{7.8,4.6},{7.9,5.0},{8.2,5.5}};
		ACE_WindSpeedMean[] = {4.8,4.9,4.6,4.1,3.5,3.5,4.3,4.4,4.1,4.5,4.5,5.0};
		ACE_WindSpeedMin[] = {{0.2,5.0},{0.1,5.0},{0.2,4.3},{0.0,3.0},{0.0,2.1},{0.0,2.0},{0.1,3.1},{0.3,3.1},{0.0,3.6},{0.0,4.2},{0.1,5.0},{0.2,5.5}};
		ACE_WindDirectionProbabilities[] = {{0.06,0.32,0.05,0.04,0.15,0.06,0.02,0.02},{0.08,0.32,0.04,0.04,0.18,0.06,0.02,0.02},{0.09,0.3,0.04,0.04,0.2,0.06,0.02,0.03},{0.1,0.25,0.03,0.04,0.22,0.06,0.02,0.04},{0.18,0.25,0.03,0.04,0.18,0.04,0.01,0.05},{0.25,0.25,0.03,0.03,0.15,0.03,0.0,0.08},{0.32,0.3,0.02,0.02,0.1,0.01,0.0,0.09},{0.28,0.35,0.02,0.01,0.08,0.01,0.0,0.08},{0.2,0.37,0.03,0.01,0.11,0.01,0.01,0.05},{0.1,0.39,0.04,0.02,0.15,0.02,0.01,0.03},{0.08,0.38,0.06,0.04,0.19,0.03,0.02,0.02},{0.06,0.37,0.05,0.03,0.18,0.04,0.02,0.02}};
	};
	class Tanoa: CAWorld
	{
		ACE_TempDay[] = {31,31,31,30,28,28,27,27,28,20,29,30};
		ACE_TempNight[] = {24,24,24,23,22,21,20,21,21,22,23,23};
		ACE_Humidity[] = {81,83,85,84,80,80,78,76,77,78,79,80};
		ACE_WindSpeedMax[] = {{6.9,4.9},{6.5,4.8},{6.4,4.5},{6.5,4.3},{6.4,4.2},{6.6,4.5},{6.5,4.8},{7.0,4.9},{7.3,5.1},{7.3,5.1},{7.2,5.2},{6.8,5.1}};
		ACE_WindSpeedMean[] = {2.2,2,1.9,1.6,1.9,2,2.1,2.3,2.7,3,2.7,2.4};
		ACE_WindSpeedMin[] = {{0.0,0.1},{0.1,0.1},{0.0,0.0},{0.0,0.4},{0.0,0.4},{0.0,0.2},{0.0,0.5},{0.0,0.5},{0.1,1.0},{0.2,1.3},{0.0,0.5},{0.0,0.5}};
		ACE_WindDirectionProbabilities[] = {{0.05,0.08,0.18,0.13,0.05,0.01,0.02,0.05},{0.06,0.08,0.14,0.11,0.05,0.01,0.02,0.06},{0.06,0.08,0.12,0.09,0.04,0.01,0.03,0.06},{0.05,0.08,0.13,0.13,0.05,0.01,0.02,0.06},{0.02,0.06,0.15,0.16,0.06,0.01,0.01,0.03},{0.02,0.07,0.17,0.17,0.06,0.01,0.01,0.03},{0.02,0.07,0.14,0.18,0.08,0.02,0.01,0.02},{0.02,0.05,0.18,0.18,0.09,0.03,0.01,0.02},{0.01,0.04,0.21,0.22,0.08,0.01,0.01,0.01},{0.01,0.06,0.24,0.24,0.07,0.01,0.01,0.02},{0.02,0.07,0.25,0.2,0.04,0.01,0.01,0.02},{0.03,0.08,0.22,0.16,0.05,0.01,0.01,0.03}};
	};
};
class RscTitles
{
	class RscWindIntuitive
	{
		idd = -1;
		onLoad = "with uiNameSpace do { RscWindIntuitive = _this select 0 };";
		movingEnable = 0;
		duration = 60;
		fadeIn = "false";
		fadeOut = "false";
		class controls
		{
			class RscWindIntuitive
			{
				idc = 132948;
				type = 0;
				style = 48;
				font = "TahomaB";
				colorBackground[] = {0,0,0,0};
				colorText[] = {0,0,0,0};
				x = "SafeZoneX + 0.001";
				y = "SafeZoneY + 0.001";
				w = 0.2;
				h = "0.2*4/3";
				size = 0.034;
				sizeEx = 0.027;
				text = "";
			};
		};
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_weather_ModuleSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_weather_Module_DisplayName";
		icon = "\z\ace\addons\weather\UI\Icon_Module_Wind_ca.paa";
		category = "ACE";
		function = "ace_weather_fnc_initModuleSettings";
		functionPriority = 1;
		isGlobal = 1;
		isSingular = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class enabled
			{
				displayName = "$STR_ace_weather_enabled_DisplayName";
				description = "$STR_ace_weather_enabled_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class updateInterval
			{
				displayName = "$STR_ace_weather_updateInterval_DisplayName";
				description = "$STR_ace_weather_updateInterval_Description";
				typeName = "NUMBER";
				defaultValue = 60;
			};
			class windSimulation
			{
				displayName = "$STR_ace_weather_windSimulation_DisplayName";
				description = "$STR_ace_weather_windSimulation_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_weather_Module_Description";
		};
	};
};
class ACE_Settings
{
	class ace_weather_enabled
	{
		category = "$STR_ace_weather_Module_DisplayName";
		displayName = "$STR_ace_weather_enabled_DisplayName";
		description = "$STR_ace_weather_enabled_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_weather_updateInterval
	{
		category = "$STR_ace_weather_Module_DisplayName";
		displayName = "$STR_ace_weather_updateInterval_DisplayName";
		description = "$STR_ace_weather_updateInterval_Description";
		typeName = "SCALAR";
		value = 60;
		sliderSettings[] = {0,300,0,0};
	};
	class ace_weather_windSimulation
	{
		category = "$STR_ace_weather_Module_DisplayName";
		displayName = "$STR_ace_weather_windSimulation_DisplayName";
		description = "$STR_ace_weather_windSimulation_Description";
		typeName = "BOOL";
		value = 1;
	};
};
