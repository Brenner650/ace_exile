////////////////////////////////////////////////////////////////////
//DeRap: ace_overpressure\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:22 2018 : 'file' last modified on Mon Apr 16 21:47:16 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_overpressure
	{
		name = "ACE3 - Overpressure";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","KoffeinFlummi","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_overpressure_distanceCoefficient
	{
		displayName = "$STR_ace_overpressure_distanceCoefficient_displayName";
		description = "$STR_ace_overpressure_distanceCoefficient_toolTip";
		typeName = "SCALAR";
		value = 1;
		sliderSettings[] = {-1,10,5,1};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_overpressure
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\overpressure\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_overpressure
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\overpressure\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_overpressure
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\overpressure\XEH_postInit.sqf'";
	};
};
class CfgWeapons
{
	class LauncherCore;
	class Launcher: LauncherCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 60;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.7;
	};
	class Launcher_Base_F: Launcher{};
	class launch_Titan_base: Launcher_Base_F
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 40;
		ace_overpressure_range = 8;
		ace_overpressure_damage = 0.5;
	};
	class launch_Titan_short_base: launch_Titan_base
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 30;
		ace_overpressure_range = 2;
		ace_overpressure_damage = 0.5;
	};
	class launch_NLAW_F: Launcher_Base_F
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 30;
		ace_overpressure_range = 2;
		ace_overpressure_damage = 0.6;
	};
	class launch_RPG32_F: Launcher_Base_F
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 60;
		ace_overpressure_range = 15;
		ace_overpressure_damage = 0.7;
	};
	class CannonCore;
	class cannon_120mm: CannonCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 90;
		ace_overpressure_range = 50;
		ace_overpressure_damage = 0.85;
	};
	class cannon_125mm: CannonCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 90;
		ace_overpressure_range = 50;
		ace_overpressure_damage = 0.85;
	};
	class cannon_105mm: CannonCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 90;
		ace_overpressure_range = 50;
		ace_overpressure_damage = 0.85;
	};
	class mortar_155mm_AMOS: CannonCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 90;
		ace_overpressure_range = 60;
		ace_overpressure_damage = 1;
	};
};
class ace_arsenal_stats
{
	class statBase;
	class ACE_backblastAngle: statBase
	{
		scope = 2;
		priority = 2;
		stats[] = {"ace_overpressure_angle"};
		displayName = "$STR_ace_overpressure_statBackblastAngle";
		showText = 1;
		textStatement = "params ['_stat','_config']; format ['%1°',getNumber (_config >> _stat select 0)]";
		tabs[] = {{2},{}};
	};
	class ACE_backblastRange: statBase
	{
		scope = 2;
		priority = 1;
		stats[] = {"ace_overpressure_range"};
		displayName = "$STR_ace_overpressure_statBackblastRange";
		showText = 1;
		textStatement = "params ['_stat','_config']; private _blastRangeStat = getNumber (_config >> _stat select 0); format ['%1m (%2ft)',_blastRangeStat,(_blastRangeStat / 0.3048) toFixed 1]";
		tabs[] = {{2},{}};
	};
};
