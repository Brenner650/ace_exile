////////////////////////////////////////////////////////////////////
//DeRap: ace_concertina_wire\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:56 2018 : 'file' last modified on Mon Apr 16 21:42:46 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_concertina_wire
	{
		name = "ACE3 - Concertina Wire";
		units[] = {"ACE_ConcertinaWire","ACE_ConcertinaWireNoGeo","ACE_ConcertinaWireCoil"};
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
	class ace_concertina_wire
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\concertina_wire\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_concertina_wire
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\concertina_wire\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_concertina_wire
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\concertina_wire\XEH_postInit.sqf'";
	};
};
class Extended_Killed_EventHandlers
{
	class ACE_ConcertinaWire
	{
		class ace_concertina_wire
		{
			killed = "call ace_concertina_wire_fnc_handleKilled";
		};
	};
	class Land_Razorwire_F
	{
		class ace_concertina_wire
		{
			killed = "call ace_concertina_wire_fnc_handleKilled";
		};
	};
};
class Extended_Init_EventHandlers
{
	class ACE_ConcertinaWireCoil
	{
		class ace_concertina_wire
		{
			init = "_this call ace_dragging_fnc_initObject";
		};
	};
	class ACE_ConcertinaWire
	{
		class ace_concertina_wire
		{
			init = "call ace_concertina_wire_fnc_handleInit";
		};
	};
	class Land_Razorwire_F
	{
		class ace_concertina_wire
		{
			init = "call ace_concertina_wire_fnc_handleInit";
		};
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class Fence;
	class ACE_ConcertinaWireNoGeo: Fence
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		scope = 1;
		displayName = "";
		model = "\z\ace\addons\concertina_wire\data\ACE_ConcertinaWireNoGeo.p3d";
		destrType = "DestructTent";
		accuracy = 0.3;
		mapSize = 2.8;
		animated = 1;
		autocenter = 0;
		armor = 200;
		class AnimationSources
		{
			class fix1
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class fix2: fix1{};
			class fix3: fix1{};
			class fix4: fix1{};
			class rotate
			{
				source = "user";
				animPeriod = 1e-007;
			};
			class wire_2
			{
				source = "user";
				animPeriod = 1e-007;
			};
			class wire_3: wire_2{};
			class wire_4: wire_2{};
			class wire_5: wire_2{};
			class wire_6: wire_2{};
			class wire_7: wire_2{};
			class wire_8: wire_2{};
			class wire_9: wire_2{};
			class wire_10: wire_2{};
			class wire_11: wire_2{};
			class wire_12: wire_2{};
			class wire_13: wire_2{};
			class wire_14: wire_2{};
			class wire_15: wire_2{};
			class wire_16: wire_2{};
			class wire_17: wire_2{};
			class wire_18: wire_2{};
			class wire_2_1: wire_2
			{
				animPeriod = 8;
			};
			class wire_3_1: wire_2_1{};
			class wire_4_1: wire_2_1{};
			class wire_5_1: wire_2_1{};
			class wire_6_1: wire_2_1{};
			class wire_7_1: wire_2_1{};
			class wire_8_1: wire_2_1{};
			class wire_9_1: wire_2_1{};
			class wire_10_1: wire_2_1{};
			class wire_11_1: wire_2_1{};
			class wire_12_1: wire_2_1{};
			class wire_13_1: wire_2_1{};
			class wire_14_1: wire_2_1{};
			class wire_15_1: wire_2_1{};
			class wire_16_1: wire_2_1{};
			class wire_17_1: wire_2_1{};
			class wire_18_1: wire_2_1{};
		};
	};
	class ACE_ConcertinaWire: ACE_ConcertinaWireNoGeo
	{
		scope = 2;
		displayName = "$STR_ACE_CONCERTINA_WIRE";
		model = "\z\ace\addons\concertina_wire\data\ACE_ConcertinaWire.p3d";
		ace_logistics_wirecutter_isFence = 1;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection = "";
				distance = 5;
				condition = "true";
				class ACE_Dismount
				{
					selection = "";
					displayName = "$STR_ACE_UNROLLWIRE";
					distance = 5;
					condition = "alive _target";
					statement = "[_target,_player] call ace_concertina_wire_fnc_dismount";
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
					icon = "\z\ace\addons\concertina_wire\UI\icon_sandbag_ca.paa";
				};
			};
		};
	};
	class ThingX;
	class ACE_ConcertinaWireCoil: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		scope = 2;
		displayName = "$STR_ACE_CONCERTINA_WIRECOIL";
		model = "\z\ace\addons\concertina_wire\data\ACE_ConcertinaWireCoil.p3d";
		mapsize = 0.5;
		animated = 0;
		nameSound = "fence";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 1000;
		destrType = "DestructNo";
		accuracy = 1000;
		autocenter = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,0.5,0.5};
		ace_dragging_dragDirection = 0;
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection = "";
				distance = 4;
				condition = "true";
				class ACE_Deploy
				{
					selection = "";
					displayName = "$STR_ACE_ROLLWIRE";
					distance = 4;
					condition = "true";
					statement = "[{_this call ace_concertina_wire_fnc_deploy},[_target,_player]] call CBA_fnc_execNextFrame";
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
					icon = "\z\ace\addons\concertina_wire\UI\icon_sandbag_ca.paa";
				};
			};
		};
	};
	class NonStrategic;
	class Land_Razorwire_F: NonStrategic
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
	};
};
