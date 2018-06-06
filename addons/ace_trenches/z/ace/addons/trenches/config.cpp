////////////////////////////////////////////////////////////////////
//DeRap: ace_trenches\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:26 2018 : 'file' last modified on Mon Apr 16 21:48:58 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_trenches
	{
		name = "ACE3 - Trenches";
		units[] = {"ACE_envelope_small","ACE_envelope_big"};
		weapons[] = {"ACE_EntrenchingTool"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Grey","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_trenches
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\trenches\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_trenches
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\trenches\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_trenches
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\trenches\XEH_postInit.sqf'";
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_trenches
		{
			killed = "_this call ace_trenches_fnc_handleKilled";
		};
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_trenches = "_this call compile preProcessFileLineNumbers '\z\ace\addons\trenches\XEH_missionDisplayLoad.sqf'";
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
				class ace_trenches_digEnvelopeSmall
				{
					displayName = "$STR_ace_trenches_DigEnvelopeSmall";
					condition = "_player call ace_trenches_fnc_canDigTrench";
					statement = "[{_this call ace_trenches_fnc_placeTrench},[_this select 0,'ACE_envelope_small']] call CBA_fnc_execNextFrame";
					exceptions[] = {};
					showDisabled = 0;
					priority = 4;
				};
				class ace_trenches_digEnvelopeBig
				{
					displayName = "$STR_ace_trenches_DigEnvelopeBig";
					condition = "_player call ace_trenches_fnc_canDigTrench";
					statement = "[{_this call ace_trenches_fnc_placeTrench},[_this select 0,'ACE_envelope_big']] call CBA_fnc_execNextFrame";
					exceptions[] = {};
					showDisabled = 0;
					priority = 4;
				};
			};
		};
	};
	class BagFence_base_F;
	class ACE_envelope_small: BagFence_base_F
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_trenches_EnvelopeSmallName";
		descriptionShort = "$STR_ace_trenches_EnevlopeSmallDescription";
		model = "\z\ace\addons\apl\ace_envelope_small4.p3d";
		scope = 2;
		ace_trenches_diggingDuration = 20;
		ace_trenches_removalDuration = 12;
		ace_trenches_noGeoClass = "ACE_envelope_small_NoGeo";
		ace_trenches_placementData[] = {2,3,0.35};
		ace_trenches_grassCuttingPoints[] = {{0,-0.5,0}};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				selection = "";
				distance = 3;
				condition = "true";
				class ACE_ContinueDiggingTrench
				{
					displayName = "$STR_ace_trenches_ContinueDiggingTrench";
					condition = "[_target,_player] call ace_trenches_fnc_canContinueDiggingTrench";
					statement = "[_target,_player] call ace_trenches_fnc_continueDiggingTrench;";
					priority = -1;
				};
				class ACE_RemoveTrench
				{
					displayName = "$STR_ace_trenches_RemoveEnvelope";
					condition = "[_target,_player] call ace_trenches_fnc_canRemoveTrench";
					statement = "[_target,_player] call ace_trenches_fnc_removeTrench;";
					priority = -1;
				};
			};
		};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
	};
	class ACE_envelope_big: BagFence_base_F
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_trenches_EnvelopeBigName";
		descriptionShort = "$STR_ace_trenches_EnevlopeBigDescription";
		model = "\z\ace\addons\apl\ace_envelope_big4.p3d";
		scope = 2;
		ace_trenches_diggingDuration = 25;
		ace_trenches_removalDuration = 15;
		ace_trenches_noGeoClass = "ACE_envelope_big_NoGeo";
		ace_trenches_placementData[] = {6,1.1,0.2};
		ace_trenches_grassCuttingPoints[] = {{-1.5,-1,0},{1.5,-1,0}};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				selection = "";
				distance = 3;
				condition = "true";
				class ACE_ContinueDiggingTrench
				{
					displayName = "$STR_ace_trenches_ContinueDiggingTrench";
					condition = "[_target,_player] call ace_trenches_fnc_canContinueDiggingTrench";
					statement = "[_target,_player] call ace_trenches_fnc_continueDiggingTrench;";
					priority = -1;
				};
				class ACE_RemoveTrench
				{
					displayName = "$STR_ace_trenches_RemoveEnvelope";
					condition = "[_target,_player] call ace_trenches_fnc_canRemoveTrench";
					statement = "[_target,_player] call ace_trenches_fnc_removeTrench;";
					priority = -1;
				};
			};
		};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
	};
	class ACE_envelope_small_NoGeo: ACE_envelope_small
	{
		scope = 1;
		model = "\z\ace\addons\apl\ace_envelope_small4_nogeo.p3d";
	};
	class ACE_envelope_big_NoGeo: ACE_envelope_big
	{
		scope = 1;
		model = "\z\ace\addons\apl\ace_envelope_big4_nogeo.p3d";
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 50;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_EntrenchingTool: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_trenches_EntrenchingToolName";
		descriptionShort = "$STR_ace_trenches_EntrenchingToolDescription";
		model = "\z\ace\addons\apl\ace_entrchtool.p3d";
		picture = "\z\ace\addons\trenches\ui\w_entrchtool_ca.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
};
