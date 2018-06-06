////////////////////////////////////////////////////////////////////
//DeRap: ace_interaction\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:59 2018 : 'file' last modified on Mon Apr 16 21:45:14 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_interaction
	{
		name = "ACE3 - Interaction";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interact_menu"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","KoffeinFlummi","esteldunedain","bux578","dixon13"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_interaction
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\interaction\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_interaction
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\interaction\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_interaction
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\interaction\XEH_postInit.sqf'";
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class ace_interaction
		{
			respawn = "(_this select 0) setVariable [""ace_interaction_assignedFireTeam"",(_this select 0) getVariable [""ace_interaction_assignedFireTeam"",'MAIN'],true]";
		};
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_interaction = "_this call compile preProcessFileLineNumbers '\z\ace\addons\interaction\XEH_missionDisplayLoad.sqf'";
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class ACE_Module;
	class ACE_ModuleInteraction: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_interaction_Module_DisplayName";
		function = "ace_interaction_fnc_moduleInteraction";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		icon = "\z\ace\addons\interaction\UI\Icon_Module_Interaction_ca.paa";
		class Arguments
		{
			class EnableTeamManagement
			{
				displayName = "$STR_ace_interaction_EnableTeamManagement_DisplayName";
				description = "$STR_ace_interaction_EnableTeamManagement_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class DisableNegativeRating
			{
				displayName = "$STR_ace_interaction_DisableNegativeRating_DisplayName";
				description = "$STR_ace_interaction_DisableNegativeRating_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_interaction_Module_Description";
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				distance = 4;
				condition = "true";
				statement = "";
				icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
				selection = "pelvis";
				class ACE_PassMagazine
				{
					displayName = "$STR_ace_interaction_PassMagazine";
					condition = "";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 3.3;
					icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargomag_ca.paa";
					class ACE_PassMagazinePrimary
					{
						displayName = "$STR_ace_interaction_PassMagazinePrimary";
						condition = "[_player,_target,primaryWeapon _target] call ace_interaction_fnc_canPassMagazine";
						statement = "[_player,_target,primaryWeapon _target] call ace_interaction_fnc_passMagazine";
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 3;
						icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryweapon_ca.paa";
					};
					class ACE_PassMagazineHandgun
					{
						displayName = "$STR_ace_interaction_PassMagazineHandgun";
						condition = "[_player,_target,handgunWeapon _target] call ace_interaction_fnc_canPassMagazine";
						statement = "[_player,_target,handgunWeapon _target] call ace_interaction_fnc_passMagazine";
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 1;
						icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
					};
				};
				class ACE_TeamManagement
				{
					displayName = "$STR_ace_interaction_TeamManagement";
					condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam&& {ace_interaction_EnableTeamManagement}";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 3.2;
					icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
					class ACE_AssignTeamRed
					{
						displayName = "$STR_ace_interaction_AssignTeamRed";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'RED'] call ace_interaction_fnc_joinTeam";
						exceptions[] = {"isNotSwimming"};
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_red_ca.paa";
						priority = 2.4;
					};
					class ACE_AssignTeamGreen
					{
						displayName = "$STR_ace_interaction_AssignTeamGreen";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'GREEN'] call ace_interaction_fnc_joinTeam";
						exceptions[] = {"isNotSwimming"};
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_green_ca.paa";
						priority = 2.3;
					};
					class ACE_AssignTeamBlue
					{
						displayName = "$STR_ace_interaction_AssignTeamBlue";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'BLUE'] call ace_interaction_fnc_joinTeam";
						exceptions[] = {"isNotSwimming"};
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_blue_ca.paa";
						priority = 2.2;
					};
					class ACE_AssignTeamYellow
					{
						displayName = "$STR_ace_interaction_AssignTeamYellow";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'YELLOW'] call ace_interaction_fnc_joinTeam";
						exceptions[] = {"isNotSwimming"};
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_yellow_ca.paa";
						priority = 2.1;
					};
					class ACE_UnassignTeam
					{
						displayName = "$STR_ace_interaction_LeaveTeam";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam&& {assignedTeam _target != 'MAIN'}";
						statement = "[_target,'MAIN'] call ace_interaction_fnc_joinTeam";
						exceptions[] = {"isNotSwimming"};
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_white_ca.paa";
						priority = 2.5;
					};
				};
				class ACE_JoinGroup
				{
					displayName = "$STR_ace_interaction_JoinGroup";
					condition = "ace_interaction_EnableTeamManagement&& {[_player, _target] call ace_interaction_fnc_canJoinGroup}";
					statement = "[_player] joinSilent group _target";
					modifierFunction = "call ace_interaction_fnc_modifyJoinGroupAction";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2.6;
					icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
				};
				class ACE_GetDown
				{
					displayName = "$STR_ace_interaction_GetDown";
					condition = "[_player,_target] call ace_interaction_fnc_canInteractWithCivilian";
					statement = "[_player,_target] call ace_interaction_fnc_getDown";
					showDisabled = 0;
					priority = 2.2;
				};
				class ACE_SendAway
				{
					displayName = "$STR_ace_interaction_SendAway";
					condition = "[_player,_target] call ace_interaction_fnc_canInteractWithCivilian";
					statement = "[_player,_target] call ace_interaction_fnc_sendAway";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2.0;
				};
				class ACE_Pardon
				{
					displayName = "$STR_ace_interaction_Pardon";
					condition = "[_player,_target] call ace_interaction_fnc_canPardon";
					statement = "[_player,_target] call ace_interaction_fnc_pardon";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2.5;
				};
				class ACE_GetOut
				{
					displayName = "$STR_ace_interaction_GetOut";
					condition = "!(isNull objectParent _target) && [_player,_target] call ace_interaction_fnc_canInteractWithCivilian";
					statement = "[_target] call ace_common_fnc_unloadPerson";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2.6;
				};
				class ace_interaction_PullOutBody
				{
					displayName = "$STR_ace_interaction_PullOutBody";
					condition = "call ace_interaction_fnc_canPullOutBody";
					statement = "call ace_interaction_fnc_pullOutBody";
					exceptions[] = {"isNotSwimming"};
					icon = "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\getout_ca.paa";
				};
			};
			class ACE_Torso
			{
				displayName = "$STR_ace_interaction_Torso";
				selection = "spine3";
				distance = 1.5;
				condition = "";
				statement = "";
				exceptions[] = {"isNotSwimming"};
			};
			class ACE_Head
			{
				displayName = "$STR_ace_interaction_Head";
				selection = "pilot";
				distance = 1.5;
				condition = "";
				statement = "";
				exceptions[] = {"isNotSwimming"};
			};
			class ACE_ArmLeft
			{
				displayName = "$STR_ace_interaction_ArmLeft";
				selection = "LeftForeArm";
				distance = 1.5;
				condition = "";
				statement = "";
				exceptions[] = {"isNotSwimming"};
			};
			class ACE_ArmRight
			{
				displayName = "$STR_ace_interaction_ArmRight";
				selection = "RightForeArm";
				distance = 1.5;
				condition = "";
				statement = "";
				exceptions[] = {"isNotSwimming"};
			};
			class ACE_LegLeft
			{
				displayName = "$STR_ace_interaction_LegLeft";
				selection = "LKnee";
				distance = 1.5;
				condition = "";
				statement = "";
				exceptions[] = {"isNotSwimming"};
			};
			class ACE_LegRight
			{
				displayName = "$STR_ace_interaction_LegRight";
				selection = "RKnee";
				distance = 1.5;
				condition = "";
				statement = "";
				exceptions[] = {"isNotSwimming"};
			};
			class ACE_Weapon
			{
				displayName = "$STR_ace_interaction_Weapon";
				position = "call ace_interaction_fnc_getWeaponPos";
				distance = 1.5;
				condition = "";
				statement = "";
				exceptions[] = {"isNotSwimming"};
			};
			class ACE_TapShoulderRight
			{
				displayName = "$STR_ace_interaction_TapShoulder";
				selection = "rightshoulder";
				distance = 2.0;
				condition = "[_player,_target] call ace_interaction_fnc_canTapShoulder";
				statement = "[_player,_target,0] call ace_interaction_fnc_tapShoulder";
				exceptions[] = {"isNotSwimming"};
			};
			class ACE_TapShoulderLeft
			{
				displayName = "$STR_ace_interaction_TapShoulder";
				selection = "leftshoulder";
				distance = 2.0;
				condition = "[_player,_target] call ace_interaction_fnc_canTapShoulder";
				statement = "[_player,_target,1] call ace_interaction_fnc_tapShoulder";
				exceptions[] = {"isNotSwimming"};
			};
		};
		class ACE_SelfActions
		{
			class ACE_TeamManagement
			{
				displayName = "$STR_ace_interaction_TeamManagement";
				condition = "ace_interaction_EnableTeamManagement";
				exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
				statement = "";
				showDisabled = 1;
				priority = 3.2;
				icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
				class ACE_JoinTeamRed
				{
					displayName = "$STR_ace_interaction_JoinTeamRed";
					condition = "true";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
					statement = "[_player,'RED'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.4;
					icon = "\z\ace\addons\interaction\UI\team\team_red_ca.paa";
				};
				class ACE_JoinTeamGreen
				{
					displayName = "$STR_ace_interaction_JoinTeamGreen";
					condition = "true";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
					statement = "[_player,'GREEN'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.3;
					icon = "\z\ace\addons\interaction\UI\team\team_green_ca.paa";
				};
				class ACE_JoinTeamBlue
				{
					displayName = "$STR_ace_interaction_JoinTeamBlue";
					condition = "true";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
					statement = "[_player,'BLUE'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.2;
					icon = "\z\ace\addons\interaction\UI\team\team_blue_ca.paa";
				};
				class ACE_JoinTeamYellow
				{
					displayName = "$STR_ace_interaction_JoinTeamYellow";
					condition = "true";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
					statement = "[_player,'YELLOW'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.1;
					icon = "\z\ace\addons\interaction\UI\team\team_yellow_ca.paa";
				};
				class ACE_LeaveTeam
				{
					displayName = "$STR_ace_interaction_LeaveTeam";
					condition = "assignedTeam _player != 'MAIN'";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
					statement = "[_player,'MAIN'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.5;
					icon = "\z\ace\addons\interaction\UI\team\team_white_ca.paa";
				};
				class ACE_BecomeLeader
				{
					displayName = "$STR_ace_interaction_BecomeLeader";
					condition = "_this call ace_interaction_fnc_canBecomeLeader";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
					statement = "_this call ace_interaction_fnc_doBecomeLeader";
					showDisabled = 1;
					priority = 1.0;
					icon = "\z\ace\addons\interaction\UI\team\team_white_ca.paa";
				};
				class ACE_LeaveGroup
				{
					displayName = "$STR_ace_interaction_LeaveGroup";
					condition = "count (units group _player) > 1";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
					statement = "_oldGroup = units group _player; _newGroup = createGroup side _player; [_player] joinSilent _newGroup; {_player reveal _x} forEach _oldGroup;";
					showDisabled = 1;
					priority = 1.2;
					icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
				};
			};
			class ACE_Equipment
			{
				displayName = "$STR_ace_interaction_Equipment";
				condition = "true";
				exceptions[] = {"isNotSwimming","isNotInside","notOnMap","isNotSitting"};
				statement = "";
				showDisabled = 1;
				priority = 4.5;
				icon = "";
			};
		};
	};
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				position = "call ace_interaction_fnc_getVehiclePos";
				selection = "";
				distance = 4;
				condition = "true";
				class ACE_Passengers
				{
					displayName = "$STR_ace_interaction_Passengers";
					condition = "alive _target";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				displayName = "$STR_ace_interaction_Passengers";
				condition = "alive _target";
				statement = "";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
			};
		};
	};
	class Car_F: Car{};
	class Quadbike_01_base_F: Car_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				class ace_interaction_flip
				{
					displayName = "$STR_ace_interaction_Flip";
					condition = "call ace_interaction_fnc_canFlip";
					statement = "[""ace_interaction_flip"",_target,_target] call CBA_fnc_targetEvent";
				};
				class ace_interaction_push
				{
					displayName = "$STR_ace_interaction_Push";
					condition = "_target call ace_interaction_fnc_canPush";
					statement = "call ace_interaction_fnc_push";
				};
			};
		};
	};
	class Kart_01_Base_F: Car_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				class ace_interaction_flip
				{
					displayName = "$STR_ace_interaction_Flip";
					condition = "call ace_interaction_fnc_canFlip";
					statement = "[""ace_interaction_flip"",_target,_target] call CBA_fnc_targetEvent";
				};
				class ace_interaction_push
				{
					displayName = "$STR_ace_interaction_Push";
					condition = "_target call ace_interaction_fnc_canPush";
					statement = "call ace_interaction_fnc_push";
				};
			};
		};
	};
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				position = "call ace_interaction_fnc_getVehiclePos";
				selection = "";
				distance = 4;
				condition = "true";
				class ACE_Passengers
				{
					displayName = "$STR_ace_interaction_Passengers";
					condition = "alive _target";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				displayName = "$STR_ace_interaction_Passengers";
				condition = "alive _target";
				statement = "";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
			};
		};
	};
	class Motorcycle: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				selection = "";
				distance = 10;
				condition = "true";
				class ACE_Passengers
				{
					displayName = "$STR_ace_interaction_Passengers";
					condition = "alive _target";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				displayName = "$STR_ace_interaction_Passengers";
				condition = "alive _target";
				statement = "";
				exceptions[] = {"isNotSwimming"};
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
			};
		};
	};
	class Air;
	class Helicopter: Air
	{
		ace_interaction_bodyWidth = 3;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				position = "[_target,ace_interact_menu_cameraPosASL] call ace_interaction_fnc_getVehiclePosComplex";
				selection = "";
				distance = 4;
				condition = "true";
				class ACE_Passengers
				{
					displayName = "$STR_ace_interaction_Passengers";
					condition = "alive _target";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				displayName = "$STR_ace_interaction_Passengers";
				condition = "alive _target";
				statement = "";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
			};
		};
	};
	class Plane: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				position = "[_target,ace_interact_menu_cameraPosASL] call ace_interaction_fnc_getVehiclePosComplex";
				selection = "";
				distance = 4;
				condition = "true";
				class ACE_Passengers
				{
					displayName = "$STR_ace_interaction_Passengers";
					condition = "alive _target";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				displayName = "$STR_ace_interaction_Passengers";
				condition = "alive _target";
				statement = "";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
			};
		};
	};
	class VTOL_Base_F;
	class VTOL_01_base_F: VTOL_Base_F
	{
		ace_interaction_bodyWidth = 4;
		ace_interaction_bodyLength = 10;
	};
	class VTOL_02_base_F: VTOL_Base_F
	{
		ace_interaction_bodyWidth = 3;
		ace_interaction_bodyLength = 7;
	};
	class Ship;
	class Ship_F: Ship
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				position = "call ace_interaction_fnc_getVehiclePos";
				selection = "";
				distance = 4;
				condition = "true";
				class ACE_Push
				{
					displayName = "$STR_ace_interaction_Push";
					distance = 6;
					condition = "_target call ace_interaction_fnc_canPush";
					statement = "_this call ace_interaction_fnc_push";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = -1;
				};
				class ACE_Passengers
				{
					displayName = "$STR_ace_interaction_Passengers";
					condition = "alive _target";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				displayName = "$STR_ace_interaction_Passengers";
				condition = "alive _target";
				statement = "";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
			};
		};
	};
	class StaticWeapon: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				selection = "gunnerview";
				distance = 4;
				condition = "true";
				class ACE_Passengers
				{
					displayName = "$STR_ace_interaction_Passengers";
					condition = "alive _target";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				};
				class ace_interaction_flip
				{
					displayName = "$STR_ace_interaction_Flip";
					condition = "call ace_interaction_fnc_canFlip";
					statement = "[""ace_interaction_flip"",_target,_target] call CBA_fnc_targetEvent";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				displayName = "$STR_ace_interaction_Passengers";
				condition = "alive _target";
				statement = "";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
			};
		};
	};
	class StaticMGWeapon: StaticWeapon{};
	class HMG_01_base_F: StaticMGWeapon{};
	class HMG_01_high_base_F: HMG_01_base_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[-0.172852,0.164063,-0.476091]";
			};
		};
	};
	class AA_01_base_F: StaticMGWeapon
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,0.515869,-0.200671]";
			};
		};
	};
	class AT_01_base_F: StaticMGWeapon
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,0.515869,-0.200671]";
			};
		};
	};
	class ThingX;
	class ReammoBox_F: ThingX
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				selection = "";
				distance = 2;
				condition = "true";
				class ACE_OpenBox
				{
					displayName = "$STR_ace_interaction_OpenBox";
					condition = "(alive _target) && {(getNumber (configFile >> 'CfgVehicles' >> (typeOf _target) >> 'disableInventory')) == 0}";
					statement = "_player action [""Gear"",_target]";
					showDisabled = 0;
					priority = -1;
				};
			};
		};
		class ACE_SelfActions{};
	};
	class Slingload_base_F: ReammoBox_F{};
	class Slingload_01_Base_F: Slingload_base_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				distance = 5;
			};
		};
	};
	class Pod_Heli_Transport_04_base_F: Slingload_base_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				distance = 5;
			};
		};
	};
	class ACE_RepairItem_Base: ThingX
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				selection = "";
				distance = 2;
				condition = "true";
			};
		};
		class ACE_SelfActions{};
	};
	class Lamps_base_F;
	class Land_PortableLight_single_F: Lamps_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				distance = 2;
				class ace_interaction_TurnOn
				{
					displayName = "$STR_ace_interaction_TurnOn";
					icon = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LightsIconOn_ca.paa";
					condition = "alive _target && !(_target getVariable ['ACE_lampOn',true])";
					statement = "_target call ace_interaction_fnc_switchLamp";
				};
				class ace_interaction_TurnOff
				{
					displayName = "$STR_ace_interaction_TurnOff";
					icon = "\A3\ui_f\data\igui\cfg\actions\ico_cpt_land_OFF_ca.paa";
					condition = "alive _target && _target getVariable ['ACE_lampOn',true]";
					statement = "_target call ace_interaction_fnc_switchLamp";
				};
			};
		};
	};
	class FloatingStructure_F;
	class Land_Camping_Light_F: FloatingStructure_F
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				distance = 2;
				class ace_interaction_TurnOn
				{
					displayName = "$STR_ace_interaction_TurnOn";
					icon = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LightsIconOn_ca.paa";
					condition = "alive _target && !isCollisionLightOn _target";
					statement = "[""ace_interaction_setCollisionLight"",[_target,true],_target] call CBA_fnc_targetEvent";
				};
				class ace_interaction_TurnOff
				{
					displayName = "$STR_ace_interaction_TurnOff";
					icon = "\A3\ui_f\data\igui\cfg\actions\ico_cpt_land_OFF_ca.paa";
					condition = "alive _target && isCollisionLightOn _target";
					statement = "[""ace_interaction_setCollisionLight"",[_target,false],_target] call CBA_fnc_targetEvent";
				};
			};
		};
	};
	class RoadCone_F: ThingX
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				selection = "";
				distance = 2;
				condition = "true";
			};
		};
	};
	class RoadBarrier_F: RoadCone_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,0,0.500671]";
			};
		};
	};
};
class ACE_Interaction_Button_Base
{
	tooltip = "";
	action = "";
	idc = -1;
	type = 1;
	text = "";
	font = "RobotoCondensed";
	sizeEx = "0.8 / 40 / (getResolution select 5)";
	shadow = 2;
	style = 2;
	x = 0;
	y = 0;
	w = "2.0 / 16 * safezoneW";
	h = "0.3 / 9 * safezoneH";
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
	colorText[] = {1,1,1,1};
	colorDisabled[] = {0.5,0.5,0.5,1};
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundDisabled[] = {0,0,0,0.8};
	colorBackgroundActive[] = {1,1,1,0};
	colorFocused[] = {1,1,1,1};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {1,1,1,0.8};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};
class RscListbox;
class IGUIBack;
class RscText;
class RscACE_SelectAnItem
{
	idd = 8854;
	movingEnable = 0;
	class controls
	{
		class back: IGUIBack
		{
			x = 0.2;
			y = 0;
			w = 0.6;
			h = 0.71;
			colorBackground[] = {0,0,0,0.2};
		};
		class header: RscText
		{
			idc = 8870;
			x = "0.2+ 0.005";
			y = 0.005;
			w = 0.59;
			h = 0.05;
			style = 2;
			text = "";
		};
		class itemList: RscListBox
		{
			onMouseButtonDblClick = "_this call ACE_Interaction_fnc_onSelectMenuDblClick";
			idc = 8866;
			x = "0.2+ 0.005";
			w = 0.59;
			h = 0.54;
			y = 0.06;
		};
		class cancelBtnBackground: ACE_Interaction_Button_Base
		{
			type = 0;
			style = 2;
			idc = -1;
			colorBackground[] = {0,0,0,0.5};
			colorBackgroundDisabled[] = {0,0,0,0.5};
			x = "0.2+ 0.005";
			w = 0.15;
			h = 0.1;
			y = 0.605;
		};
		class approveBtnBackground: ACE_Interaction_Button_Base
		{
			type = 0;
			style = 2;
			idc = -1;
			colorBackground[] = {0,0,0,0.5};
			colorBackgroundDisabled[] = {0,0,0,0.5};
			x = "0.2+ 0.445";
			y = 0.605;
			h = 0.1;
			w = 0.15;
		};
		class cancelBtn: ACE_Interaction_Button_Base
		{
			idc = 8855;
			x = "0.2+ 0.005";
			w = 0.15;
			h = 0.1;
			y = 0.605;
			style = 2;
			text = "$STR_ace_interaction_Back";
			action = "call ACE_Interaction_fnc_hideMenu;";
			colorBackground[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {1,1,1,0.2};
			colorFocused[] = {0,0,0,0};
		};
		class approveBtn: ACE_Interaction_Button_Base
		{
			idc = 8860;
			x = "0.2+ 0.445";
			y = 0.605;
			h = 0.1;
			w = 0.15;
			style = 2;
			text = "$STR_ace_interaction_MakeSelection";
			action = "call ACE_Interaction_fnc_hideMenu;";
			colorBackground[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {1,1,1,0.2};
			colorFocused[] = {0,0,0,0};
		};
	};
};
class RscPicture;
class RscInteractionIcon: RscPicture
{
	x = "19.25 * (0.025)";
	y = "15.75 * (0.04)";
	w = "2*(0.04)";
	h = "2*(0.04)";
};
class RscInteractionHelperIcon: RscInteractionIcon
{
	x = "20 * (0.025)";
	y = "16 * (0.04)";
	w = "(0.04)";
	h = "(0.04)";
};
class RscInteractionText: RscText
{
	x = "21 * (0.025)";
	y = "16 * (0.04)";
	w = "24 * (0.025)";
	h = "1.5 * (0.04)";
};
class RscInteractionText_right: RscText
{
	style = 1;
};
class RscTitles
{
	class ace_interaction_InteractionHelper
	{
		idd = 9930;
		enableSimulation = 1;
		movingEnable = 0;
		fadeIn = 0.5;
		fadeOut = 0.5;
		duration = "10e10";
		onLoad = "uiNamespace setVariable ['ACE_Helper_Display', _this select 0];";
		class controls
		{
			class SelectIcon: RscInteractionHelperIcon
			{
				idc = 1200;
				text = "\z\ace\addons\interaction\UI\mouse_left_ca.paa";
				y = "17.5 * (0.04)";
			};
			class SelectText: RscInteractionText
			{
				idc = 1000;
				y = "17 * (0.04)";
				text = "$STR_ace_interaction_MakeSelection";
			};
			class GoBackIcon: RscInteractionHelperIcon
			{
				idc = 1201;
				text = "\z\ace\addons\interaction\UI\mouse_right_ca.paa";
				y = "19.5 * (0.04)";
			};
			class GoBackText: RscInteractionText
			{
				idc = 1001;
				y = "19 * (0.04)";
				text = "$STR_ace_interaction_Back";
			};
			class ScrollIcon: RscInteractionHelperIcon
			{
				idc = 1202;
				text = "\z\ace\addons\interaction\UI\mouse_scroll_ca.paa";
				y = "18.5 * (0.04)";
			};
			class ScrollText: RscInteractionText
			{
				idc = 1002;
				y = "18 * (0.04)";
				text = "$STR_ace_interaction_ScrollHint";
			};
		};
	};
};
class ACE_Settings
{
	class ace_interaction_enableTeamManagement
	{
		category = "$STR_ace_interaction_DisplayName";
		displayName = "$STR_ace_interaction_EnableTeamManagement_DisplayName";
		description = "$STR_ace_interaction_EnableTeamManagement_Description";
		value = 1;
		typeName = "BOOL";
	};
	class ace_interaction_enableMagazinePassing
	{
		category = "$STR_ace_interaction_DisplayName";
		value = 1;
		typeName = "BOOL";
		isClientSettable = 1;
		displayName = "$STR_ace_interaction_PassMagazineSetting";
	};
	class ace_interaction_disableNegativeRating
	{
		category = "$STR_ace_interaction_DisplayName";
		displayName = "$STR_ace_interaction_DisableNegativeRating_DisplayName";
		description = "$STR_ace_interaction_DisableNegativeRating_Description";
		value = 0;
		typeName = "BOOL";
	};
};
class ACE_ZeusActions
{
	class ZeusUnits
	{
		displayName = "$STR_A3_RscDisplayCurator_ModeUnits_tooltip";
		icon = "\A3\UI_F_Curator\Data\Displays\RscDisplayCurator\modeUnits_ca.paa";
		condition = "(count (curatorSelected select 0)) > 0";
		class stance
		{
			displayName = "$STR_A3_RscAttributeUnitPos_Title";
			class prone
			{
				displayName = "$STR_Pos_Down";
				icon = "\A3\UI_F\Data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_ca.paa";
				statement = "[""ace_interaction_zeusStance"",['DOWN',curatorSelected select 0],curatorSelected select 0] call CBA_fnc_targetEvent;";
			};
			class crouch
			{
				displayName = "$STR_Pos_Crouch";
				icon = "\A3\UI_F\Data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_ca.paa";
				statement = "[""ace_interaction_zeusStance"",['MIDDLE',curatorSelected select 0],curatorSelected select 0] call CBA_fnc_targetEvent;";
			};
			class stand
			{
				displayName = "$STR_Pos_Up";
				icon = "\A3\UI_F\Data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_ca.paa";
				statement = "[""ace_interaction_zeusStance"",['UP',curatorSelected select 0],curatorSelected select 0] call CBA_fnc_targetEvent;";
			};
			class auto
			{
				displayName = "$STR_Pos_Automatic";
				icon = "\A3\UI_F_Curator\Data\default_ca.paa";
				statement = "[""ace_interaction_zeusStance"",['AUTO',curatorSelected select 0],curatorSelected select 0] call CBA_fnc_targetEvent;";
			};
		};
		class remoteControl
		{
			displayName = "$STR_A3_CfgVehicles_ModuleRemoteControl_F";
			icon = "\A3\Modules_F_Curator\Data\portraitRemoteControl_ca.paa";
			statement = "_unit = objNull; { if ((side _x in [east,west,resistance,civilian]) && !(isPlayer _x)) exitWith { _unit = _x; }; } forEach (curatorSelected select 0); bis_fnc_curatorObjectPlaced_mouseOver = ['OBJECT',_unit]; (group _target) createUnit ['ModuleRemoteControl_F',[0,0,0],[],0,'NONE'];";
		};
	};
	class ZeusGroups
	{
		displayName = "$STR_A3_RscDisplayCurator_ModeGroups_tooltip";
		icon = "\A3\UI_F_Curator\Data\Displays\RscDisplayCurator\modeGroups_ca.paa";
		condition = "(count (curatorSelected select 1)) > 0";
		class behaviour
		{
			displayName = "$STR_Combat_Mode";
			class careless
			{
				displayName = "$STR_Combat_Careless";
				statement = "[""ace_interaction_zeusBehaviour"",['CARELESS',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class safe
			{
				displayName = "$STR_Combat_Safe";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeBehaviour\safe_ca.paa";
				statement = "[""ace_interaction_zeusBehaviour"",['SAFE',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class aware
			{
				displayName = "$STR_Combat_Aware";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeBehaviour\aware_ca.paa";
				statement = "[""ace_interaction_zeusBehaviour"",['AWARE',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class combat
			{
				displayName = "$STR_Combat_Combat";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeBehaviour\combat_ca.paa";
				statement = "[""ace_interaction_zeusBehaviour"",['COMBAT',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class stealth
			{
				displayName = "$STR_Combat_Stealth";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeBehaviour\stealth_ca.paa";
				statement = "[""ace_interaction_zeusBehaviour"",['STEALTH',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
		};
		class speed
		{
			displayName = "$STR_HC_Menu_Speed";
			class limited
			{
				displayName = "$STR_Speed_Limited";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeSpeedMode\limited_ca.paa";
				statement = "[""ace_interaction_zeusSpeed"",['LIMITED',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class normal
			{
				displayName = "$STR_Speed_Normal";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeSpeedMode\normal_ca.paa";
				statement = "[""ace_interaction_zeusSpeed"",['NORMAL',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class full
			{
				displayName = "$STR_Speed_Full";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeSpeedMode\full_ca.paa";
				statement = "[""ace_interaction_zeusSpeed"",['FULL',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
		};
		class formation
		{
			displayName = "$STR_Formation";
			class wedge
			{
				displayName = "$STR_Wedge";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\wedge_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['WEDGE',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class vee
			{
				displayName = "$STR_Vee";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\vee_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['VEE',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class line
			{
				displayName = "$STR_Line";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\line_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['LINE',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class column
			{
				displayName = "$STR_Column";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\column_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['COLUMN',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class file
			{
				displayName = "$STR_File";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\file_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['FILE',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class stag_column
			{
				displayName = "$STR_Staggered";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\stag_column_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['STAG COLUMN',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class ech_left
			{
				displayName = "$STR_EchL";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\ech_left_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['ECH LEFT',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class ech_right
			{
				displayName = "$STR_EchR";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\ech_right_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['ECH RIGHT',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
			class diamond
			{
				displayName = "$STR_Diamond";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\diamond_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['DIAMOND',curatorSelected select 1],curatorSelected select 1] call CBA_fnc_targetEvent;";
			};
		};
	};
	class ZeusWaypoints
	{
		displayName = "Waypoints";
		icon = "\A3\UI_F_Curator\Data\Displays\RscDisplayCurator\modeRecent_ca.paa";
		condition = "(count (curatorSelected select 2)) > 0";
		class behaviour
		{
			displayName = "$STR_Combat_Mode";
			class careless
			{
				displayName = "$STR_Combat_Careless";
				statement = "[""ace_interaction_zeusBehaviour"",['CARELESS',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class safe
			{
				displayName = "$STR_Combat_Safe";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeBehaviour\safe_ca.paa";
				statement = "[""ace_interaction_zeusBehaviour"",['SAFE',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class aware
			{
				displayName = "$STR_Combat_Aware";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeBehaviour\aware_ca.paa";
				statement = "[""ace_interaction_zeusBehaviour"",['AWARE',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class combat
			{
				displayName = "$STR_Combat_Combat";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeBehaviour\combat_ca.paa";
				statement = "[""ace_interaction_zeusBehaviour"",['COMBAT',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class stealth
			{
				displayName = "$STR_Combat_Stealth";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeBehaviour\stealth_ca.paa";
				statement = "[""ace_interaction_zeusBehaviour"",['STEALTH',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
		};
		class speed
		{
			displayName = "$STR_HC_Menu_Speed";
			class limited
			{
				displayName = "$STR_Speed_Limited";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeSpeedMode\limited_ca.paa";
				statement = "[""ace_interaction_zeusSpeed"",['LIMITED',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class normal
			{
				displayName = "$STR_Speed_Normal";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeSpeedMode\normal_ca.paa";
				statement = "[""ace_interaction_zeusSpeed"",['NORMAL',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class full
			{
				displayName = "$STR_Speed_Full";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeSpeedMode\full_ca.paa";
				statement = "[""ace_interaction_zeusSpeed"",['FULL',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
		};
		class formation
		{
			displayName = "$STR_Formation";
			class wedge
			{
				displayName = "$STR_Wedge";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\wedge_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['WEDGE',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class vee
			{
				displayName = "$STR_Vee";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\vee_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['VEE',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class line
			{
				displayName = "$STR_Line";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\line_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['LINE',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class column
			{
				displayName = "$STR_Column";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\column_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['COLUMN',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class file
			{
				displayName = "$STR_File";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\file_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['FILE',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class stag_column
			{
				displayName = "$STR_Staggered";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\stag_column_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['COLUMN',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class ech_left
			{
				displayName = "$STR_EchL";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\ech_left_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['LEFT',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class ech_right
			{
				displayName = "$STR_EchR";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\ech_right_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['RIGHT',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
			class diamond
			{
				displayName = "$STR_Diamond";
				icon = "\A3\UI_F_Curator\Data\RscCommon\RscAttributeFormation\diamond_ca.paa";
				statement = "[""ace_interaction_zeusFormation"",['DIAMOND',curatorSelected select 2,true]] call CBA_fnc_serverEvent;";
			};
		};
	};
	class ZeusMarkers
	{
		displayName = "$STR_A3_RscDisplayCurator_ModeMarkers_tooltip";
		icon = "\A3\UI_F_Curator\Data\Displays\RscDisplayCurator\modeMarkers_ca.paa";
		condition = "(count (curatorSelected select 3)) > 0";
	};
};
