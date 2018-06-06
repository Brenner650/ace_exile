////////////////////////////////////////////////////////////////////
//DeRap: ace_respawn\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:24 2018 : 'file' last modified on Mon Apr 16 21:48:05 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_respawn
	{
		name = "ACE3 - Respawn";
		units[] = {"ACE_ModuleFriendlyFire","ACE_ModuleRallypoint"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"bux578","commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_respawn
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\respawn\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_respawn
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\respawn\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_respawn
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\respawn\XEH_postInit.sqf'";
		serverInit = "call compile preProcessFileLineNumbers '\z\ace\addons\respawn\XEH_serverPostInit.sqf'";
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_respawn
		{
			killed = "_this call ace_respawn_fnc_handleKilled";
		};
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class ace_respawn
		{
			respawn = "_this call ace_respawn_fnc_handleRespawn";
		};
	};
};
class Extended_Init_EventHandlers
{
	class ACE_Rallypoint_West
	{
		class ace_respawn
		{
			init = "[_this select 0,'',west] call ace_respawn_fnc_initRallypoint";
		};
	};
	class ACE_Rallypoint_East
	{
		class ace_respawn
		{
			init = "[_this select 0,'',east] call ace_respawn_fnc_initRallypoint";
		};
	};
	class ACE_Rallypoint_Independent
	{
		class ace_respawn
		{
			init = "[_this select 0,'',independent] call ace_respawn_fnc_initRallypoint";
		};
	};
	class ACE_Rallypoint_West_Base
	{
		class ace_respawn
		{
			init = "[_this select 0,'respawn_west',west] call ace_respawn_fnc_initRallypoint";
		};
	};
	class ACE_Rallypoint_East_Base
	{
		class ace_respawn
		{
			init = "[_this select 0,'respawn_east',east] call ace_respawn_fnc_initRallypoint";
		};
	};
	class ACE_Rallypoint_Independent_Base
	{
		class ace_respawn
		{
			init = "[_this select 0,'respawn_guerrila',independent] call ace_respawn_fnc_initRallypoint";
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class CAManBase
	{
		class ace_respawn
		{
			serverInit = "_this call ace_respawn_fnc_handleInitPostServer";
		};
	};
};
class CfgAddons
{
	class ace_respawn_Rallypoints
	{
		list[] = {"ACE_Rallypoint_West","ACE_Rallypoint_East","ACE_Rallypoint_Independent","ACE_Rallypoint_West_Base","ACE_Rallypoint_East_Base","ACE_Rallypoint_Independent_Base"};
	};
};
class CfgVehicleClasses
{
	class ace_respawn_Rallypoints
	{
		displayName = "$STR_ace_respawn_EditorCategory";
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class ACE_Module;
	class ACE_ModuleRespawn: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_respawn_Module_DisplayName";
		function = "ace_respawn_fnc_module";
		scope = 1;
		isGlobal = 1;
		icon = "\z\ace\addons\respawn\UI\Icon_Module_Respawn_ca.paa";
		class Arguments
		{
			class SavePreDeathGear
			{
				displayName = "$STR_ace_respawn_SavePreDeathGear_DisplayName";
				description = "$STR_ace_respawn_SavePreDeathGear_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class RemoveDeadBodiesDisconnected
			{
				displayName = "$STR_ace_respawn_RemoveDeadBodiesDisconnected_DisplayName";
				description = "$STR_ace_respawn_RemoveDeadBodiesDisconnected_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_respawn_Module_Description";
		};
	};
	class ACE_ModuleFriendlyFire: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_respawn_FriendlyFire_Module_DisplayName";
		function = "ace_respawn_fnc_moduleFriendlyFire";
		scope = 2;
		isGlobal = 1;
		icon = "\z\ace\addons\respawn\UI\Icon_Module_FriendlyFire_ca.paa";
		class Arguments{};
		class ModuleDescription
		{
			description = "$STR_ace_respawn_FriendlyFire_Module_Description";
		};
	};
	class ACE_ModuleRallypoint: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_respawn_Rallypoint_Module_DisplayName";
		function = "ace_respawn_fnc_moduleRallypoint";
		scope = 2;
		isGlobal = 1;
		icon = "\z\ace\addons\respawn\UI\Icon_Module_Rallypoint_ca.paa";
		class Arguments{};
		class ModuleDescription
		{
			description = "$STR_ace_respawn_Rallypoint_Module_Description";
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_MoveRallypoint
			{
				displayName = "$STR_ace_respawn_Rallypoint_MoveRallypoint";
				condition = "[_player,side group _player] call ace_respawn_fnc_canMoveRallypoint";
				statement = "[_player,side group _player] call ace_respawn_fnc_moveRallypoint";
				exceptions[] = {"isNotSwimming"};
				showDisabled = 0;
				priority = -0.5;
			};
		};
	};
	class FlagCarrier;
	class Flag_NATO_F: FlagCarrier
	{
		class EventHandlers;
		class ACE_Actions;
	};
	class Flag_CSAT_F: FlagCarrier
	{
		class EventHandlers;
		class ACE_Actions;
	};
	class Flag_AAF_F: FlagCarrier
	{
		class EventHandlers;
		class ACE_Actions;
	};
	class ACE_Rallypoint_West_Base: Flag_NATO_F
	{
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_respawn_RallypointWestBase";
		vehicleClass = "ace_respawn_Rallypoints";
		class ACE_Actions: ACE_Actions
		{
			class ACE_Teleport
			{
				displayName = "$STR_ace_respawn_TeleportToRallypoint";
				distance = 4;
				condition = "side group _player == west";
				statement = "[_player,side group _player,'ACE_Rallypoint_West'] call ace_respawn_fnc_teleportToRallypoint";
				exceptions[] = {"isNotSwimming"};
				position = "[-0.05,-0.35,-2.6]";
				showDisabled = 1;
				priority = 1;
			};
		};
	};
	class ACE_Rallypoint_East_Base: Flag_CSAT_F
	{
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_respawn_RallypointEastBase";
		vehicleClass = "ace_respawn_Rallypoints";
		class ACE_Actions: ACE_Actions
		{
			class ACE_Teleport
			{
				displayName = "$STR_ace_respawn_TeleportToRallypoint";
				distance = 4;
				condition = "side group _player == east";
				statement = "[_player,side group _player,'ACE_Rallypoint_East'] call ace_respawn_fnc_teleportToRallypoint";
				exceptions[] = {"isNotSwimming"};
				position = "[-0.05,-0.35,-2.6]";
				showDisabled = 1;
				priority = 1;
			};
		};
	};
	class ACE_Rallypoint_Independent_Base: Flag_AAF_F
	{
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_respawn_RallypointIndependentBase";
		vehicleClass = "ace_respawn_Rallypoints";
		class ACE_Actions: ACE_Actions
		{
			class ACE_Teleport
			{
				displayName = "$STR_ace_respawn_TeleportToRallypoint";
				distance = 4;
				condition = "side group _player == independent";
				statement = "[_player,side group _player,'ACE_Rallypoint_Independent'] call ace_respawn_fnc_teleportToRallypoint";
				exceptions[] = {"isNotSwimming"};
				position = "[-0.05,-0.35,-2.6]";
				showDisabled = 1;
				priority = 1;
			};
		};
	};
	class ACE_Rallypoint_West: Flag_NATO_F
	{
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_respawn_RallypointWest";
		vehicleClass = "ace_respawn_Rallypoints";
		class ACE_Actions: ACE_Actions
		{
			class ACE_Teleport
			{
				displayName = "$STR_ace_respawn_TeleportToBase";
				distance = 4;
				condition = "side group _player == west";
				statement = "[_player,side group _player,'ACE_Rallypoint_West_Base'] call ace_respawn_fnc_teleportToRallypoint";
				exceptions[] = {"isNotSwimming"};
				position = "[-0.05,-0.35,-2.6]";
				showDisabled = 1;
				priority = 1;
			};
		};
	};
	class ACE_Rallypoint_East: Flag_CSAT_F
	{
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_respawn_RallypointEast";
		vehicleClass = "ace_respawn_Rallypoints";
		class ACE_Actions: ACE_Actions
		{
			class ACE_Teleport
			{
				displayName = "$STR_ace_respawn_TeleportToBase";
				distance = 4;
				condition = "side group _player == east";
				statement = "[_player,side group _player,'ACE_Rallypoint_East_Base'] call ace_respawn_fnc_teleportToRallypoint";
				exceptions[] = {"isNotSwimming"};
				position = "[-0.05,-0.35,-2.6]";
				showDisabled = 1;
				priority = 1;
			};
		};
	};
	class ACE_Rallypoint_Independent: Flag_AAF_F
	{
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_respawn_RallypointIndependent";
		vehicleClass = "ace_respawn_Rallypoints";
		class ACE_Actions: ACE_Actions
		{
			class ACE_Teleport
			{
				displayName = "$STR_ace_respawn_TeleportToBase";
				distance = 4;
				condition = "side group _player == independent";
				statement = "[_player,side group _player,'ACE_Rallypoint_Independent_Base'] call ace_respawn_fnc_teleportToRallypoint";
				exceptions[] = {"isNotSwimming"};
				position = "[-0.05,-0.35,-2.6]";
				showDisabled = 1;
				priority = 1;
			};
		};
	};
};
class ACE_Settings
{
	class ace_respawn_savePreDeathGear
	{
		category = "$STR_ace_respawn_DisplayName";
		displayName = "$STR_ace_respawn_SavePreDeathGear_DisplayName";
		description = "$STR_ace_respawn_SavePreDeathGear_Description";
		value = 0;
		typeName = "BOOL";
	};
	class ace_respawn_removeDeadBodiesDisconnected
	{
		category = "$STR_ace_respawn_DisplayName";
		displayName = "$STR_ace_respawn_RemoveDeadBodiesDisconnected_DisplayName";
		description = "$STR_ace_respawn_RemoveDeadBodiesDisconnected_Description";
		value = 1;
		typeName = "BOOL";
	};
};
