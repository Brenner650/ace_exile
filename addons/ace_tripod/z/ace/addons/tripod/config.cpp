////////////////////////////////////////////////////////////////////
//DeRap: ace_tripod\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:08 2018 : 'file' last modified on Mon Apr 16 21:48:59 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_tripod
	{
		name = "ACE3 - Tripod";
		units[] = {"ACE_Item_Tripod","ACE_TripodObject"};
		weapons[] = {"ACE_Tripod"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Rocko","Scubaman3D","Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_tripod
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\tripod\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_tripod
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\tripod\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_tripod
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\tripod\XEH_postInit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class ACE_TripodObject
	{
		class ace_tripod
		{
			init = "_this call ace_dragging_fnc_initObject";
		};
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_tripod
		{
			killed = "_this call ace_tripod_fnc_handleKilled";
		};
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_tripod = "_this call compile preProcessFileLineNumbers '\z\ace\addons\tripod\XEH_missionDisplayLoad.sqf'";
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
				class ace_tripod_place
				{
					displayName = "$STR_ace_tripod_Placedown";
					condition = "[_player,'ACE_Tripod'] call ace_common_fnc_hasItem";
					statement = "[_player,'ACE_Tripod'] call ace_tripod_fnc_place";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\tripod\UI\w_sniper_tripod_ca.paa";
				};
			};
		};
	};
	class Item_Base_F;
	class ACE_Item_Tripod: Item_Base_F
	{
		author[] = {"Rocko","Scubaman3D"};
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_tripod_DisplayName";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_Tripod
			{
				name = "ACE_Tripod";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_Tripod
			{
				name = "ACE_Tripod";
				count = 2;
			};
		};
	};
	class ThingX;
	class ACE_TripodObject: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1,0};
		ace_dragging_dragDirection = 0;
		scope = 2;
		displayName = "$STR_ace_tripod_DisplayName";
		model = "\z\ace\addons\tripod\data\sniper_tripod.p3d";
		icon = "\A3\Static_F_Gamma\data\UI\map_StaticTurret_AT_CA.paa";
		class AnimationSources
		{
			class slide_down_tripod
			{
				source = "user";
				animPeriod = 0.02;
				initPhase = 0.5;
				minValue = 0;
				maxValue = 1;
			};
			class retract_leg_1: slide_down_tripod{};
			class retract_leg_2: retract_leg_1{};
			class retract_leg_3: retract_leg_2{};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection = "interaction_point";
				distance = 5;
				condition = "(true)";
				class ACE_Pickup
				{
					selection = "";
					displayName = "$STR_ace_tripod_PickUp";
					distance = 5;
					condition = "(true)";
					statement = "[_player,_target] call ace_tripod_fnc_pickup";
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
					icon = "\z\ace\addons\tripod\UI\w_sniper_tripod_ca.paa";
				};
				class ACE_Adjust
				{
					selection = "";
					displayName = "$STR_ace_tripod_Adjust";
					distance = 5;
					condition = "(true)";
					statement = "[{_this call ace_tripod_fnc_adjust},[_player,_target]] call CBA_fnc_execNextFrame";
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
					icon = "\z\ace\addons\tripod\UI\w_sniper_tripod_ca.paa";
				};
			};
		};
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "ace_main_subcategory";
		editorPreview = "\z\ace\addons\tripod\data\preview_tripod.jpg";
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_Tripod: ACE_ItemCore
	{
		author = "Rocko, Scubaman3D";
		scope = 2;
		displayName = "$STR_ace_tripod_DisplayName";
		descriptionShort = "";
		model = "\z\ace\addons\tripod\data\w_sniper_tripod.p3d";
		picture = "\z\ace\addons\tripod\UI\w_sniper_tripod_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 40;
		};
	};
};
