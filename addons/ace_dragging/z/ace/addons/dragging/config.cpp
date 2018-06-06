////////////////////////////////////////////////////////////////////
//DeRap: ace_dragging\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:43:11 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_dragging
	{
		name = "ACE3 - Dragging";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Garth 'L-H' de Wet","commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_dragging
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\dragging\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_dragging
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\dragging\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_dragging
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\dragging\XEH_postInit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class ace_dragging
		{
			init = "_this call ace_dragging_fnc_initPerson";
		};
	};
	class StaticWeapon
	{
		class ace_dragging
		{
			init = "_this call ace_dragging_fnc_initObject";
		};
	};
	class ThingX
	{
		class ace_dragging
		{
			init = "_this call ace_dragging_fnc_initObject";
		};
	};
	class Land_PortableLight_single_F
	{
		class ace_dragging
		{
			init = "_this call ace_dragging_fnc_initObject";
		};
	};
	class Land_Camping_Light_F
	{
		class ace_dragging
		{
			init = "_this call ace_dragging_fnc_initObject";
		};
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_dragging
		{
			killed = "_this call ace_dragging_fnc_handleKilled";
		};
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_dragging = "_this call compile preProcessFileLineNumbers '\z\ace\addons\dragging\XEH_missionDisplayLoad.sqf'";
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class StaticCannon: StaticWeapon
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class StaticMortar;
	class Mortar_01_base_F: StaticMortar
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class StaticMGWeapon;
	class AAA_System_01_base_F: StaticMGWeapon
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class SAM_System_01_base_F: StaticMGWeapon
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class SAM_System_02_base_F: StaticMGWeapon
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class ThingX;
	class Items_base_F;
	class ReammoBox_F: ThingX
	{
		ace_dragging_canCarry = 0;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 0;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class Slingload_base_F: ReammoBox_F
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class Pod_Heli_Transport_04_base_F: Slingload_base_F
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class Pod_Heli_Transport_04_crewed_base_F: StaticWeapon
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class EAST_Box_Base: ReammoBox_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
	};
	class IND_Box_Base: ReammoBox_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
	};
	class NATO_Box_Base: ReammoBox_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
	};
	class Box_Syndicate_Ammo_F: ReammoBox_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
	};
	class Box_IED_Exp_F: ReammoBox_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
	};
	class Box_Syndicate_Wps_F: ReammoBox_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
	};
	class Box_Syndicate_WpsLaunch_F: ReammoBox_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
	};
	class Box_NATO_Equip_F: ReammoBox_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryDirection = 270;
		ace_dragging_canDrag = 1;
	};
	class Box_NATO_Uniforms_F: ReammoBox_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryDirection = 270;
		ace_dragging_canDrag = 1;
	};
	class Box_East_AmmoVeh_F: EAST_Box_Base
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class Box_NATO_AmmoVeh_F: NATO_Box_Base
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class Box_IND_AmmoVeh_F: IND_Box_Base
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
	};
	class PlasticCase_01_base_F: Items_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 270;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class MetalCase_01_base_F: Items_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 270;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class RoadCone_F: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class RoadBarrier_F: RoadCone_F
	{
		ace_dragging_carryPosition[] = {0,1,0.300671};
	};
	class Constructions_base_F;
	class Land_WoodenBox_F: Constructions_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 270;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.4,0};
		ace_dragging_dragDirection = 0;
	};
	class Land_WoodenCrate_01_F: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 270;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.5,0};
		ace_dragging_dragDirection = 90;
	};
	class Land_PaperBox_01_small_closed_base_F: Items_base_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.5,0};
		ace_dragging_dragDirection = 90;
	};
	class Box_UAV_06_base_F: Items_base_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.5,0};
		ace_dragging_dragDirection = 0;
	};
	class ACE_RepairItem_Base: ThingX{};
	class ACE_Track: ACE_RepairItem_Base
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 0;
	};
	class ACE_Wheel: ACE_RepairItem_Base
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 0;
	};
	class Lamps_base_F;
	class Land_PortableLight_single_F: Lamps_base_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 180;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 180;
	};
	class FloatingStructure_F;
	class Land_Camping_Light_F: FloatingStructure_F
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,0.9,1};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,0.7,0};
		ace_dragging_dragDirection = 0;
	};
	class Land_Camping_Light_off_F: ThingX
	{
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,0.9,1};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,0.7,0};
		ace_dragging_dragDirection = 0;
	};
};
class CfgMovesBasic
{
	class Actions
	{
		class MoveWithInjuredManDragger;
		class MoveWithInjuredManDraggerRfl: MoveWithInjuredManDragger
		{
			Up = "amovpercmstpsraswrfldnon";
		};
	};
};
