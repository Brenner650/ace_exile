////////////////////////////////////////////////////////////////////
//DeRap: ace_tacticalladder\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:08 2018 : 'file' last modified on Mon Apr 16 21:48:53 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_tacticalladder
	{
		name = "ACE3 - Tactical Ladder";
		units[] = {"ACE_TacticalLadder_Pack"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_apl","ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Rocko","Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_tacticalladder
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\tacticalladder\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_tacticalladder
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\tacticalladder\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_tacticalladder
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\tacticalladder\XEH_postInit.sqf'";
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_tacticalladder
		{
			killed = "_this call ace_tacticalladder_fnc_handleKilled";
		};
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_tacticalladder = "_this call compile preProcessFileLineNumbers '\z\ace\addons\tacticalladder\XEH_missionDisplayLoad.sqf'";
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ACE_TacticalLadders
				{
					displayName = "$STR_ace_tacticalladder_Deploy";
					condition = "backpack _player == 'ACE_TacticalLadder_Pack'";
					statement = "[_player] call ace_tacticalladder_fnc_deployTL";
					exceptions[] = {};
					showDisabled = 1;
					priority = 4;
				};
			};
		};
	};
	class Bag_Base;
	class ACE_TacticalLadder_Pack: Bag_Base
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_tacticalladder_DisplayName";
		descriptionShort = "";
		model = "\z\ace\addons\tacticalladder\data\ace_tacticalladder_pack.p3d";
		picture = "\z\ace\addons\tacticalladder\UI\ace_tactical_ladder_pack_ca.paa";
		maximumLoad = 0;
		mass = 50;
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportBackpacks
		{
			class _xx_ACE_TacticalLadder_Pack
			{
				backpack = "ACE_TacticalLadder_Pack";
				count = 3;
			};
		};
	};
	class House;
	class ACE_TacticalLadder: House
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		displayName = "$STR_ace_tacticalladder_DisplayName";
		class DestructionEffects{};
		model = "\z\ace\addons\tacticalladder\data\ace_tacticalladder.p3d";
		animated = 1;
		autocenter = 0;
		featureSize = 12;
		ladders[] = {{"start","end"}};
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1e-007;
			};
			class extract_1
			{
				source = "user";
				animPeriod = 1e-007;
			};
			class extract_2: extract_1{};
			class extract_3: extract_1{};
			class extract_4: extract_1{};
			class extract_5: extract_1{};
			class extract_6: extract_1{};
			class extract_7: extract_1{};
			class extract_8: extract_1{};
			class extract_9: extract_1{};
			class extract_10: extract_1{};
			class extract_11: extract_1{};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection = "roadway";
				distance = 5;
				condition = "_target call ace_tacticalladder_fnc_isLadderEmpty";
				class ACE_PickUp
				{
					selection = "";
					displayName = "$STR_ace_tacticalladder_Pickup";
					distance = 4;
					condition = "(backpack ACE_player) == ''";
					statement = "[_player,_target] call ace_tacticalladder_fnc_pickupTL";
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
				};
				class ACE_Position
				{
					selection = "";
					displayName = "$STR_ace_tacticalladder_Position";
					distance = 4;
					condition = "true";
					statement = "[{_this call ace_tacticalladder_fnc_positionTL},[_player,_target]] call CBA_fnc_execNextFrame";
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
				};
			};
		};
	};
};
