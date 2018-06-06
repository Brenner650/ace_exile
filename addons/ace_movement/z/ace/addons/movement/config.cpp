////////////////////////////////////////////////////////////////////
//DeRap: ace_movement\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:20 2018 : 'file' last modified on Mon Apr 16 21:46:48 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_movement
	{
		name = "ACE3 - Movement";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","KoffeinFlummi","Tachii"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_movement
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\movement\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_movement
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\movement\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_movement
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\movement\XEH_postInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayInventory
	{
		ace_movement = "_this call ace_movement_fnc_inventoryDisplayLoad";
	};
};
class CfgFatigue
{
	MinValue1 = 0.2;
	MinValue2 = 0.8;
	NormalRunSpeed = 7.2;
	TiredRunSpeedLimit = 0.8;
	FrequencyMin = 0.2;
	FrequencyMax = 1.0;
	TotalLoadCoef = 1.1;
	MaxDuty = 10;
};
class CfgMovesBasic
{
	class ManActions
	{
		ACE_Climb = "ACE_Climb";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleKneelActions: RifleBaseStandActions
		{
			Civil = "AmovPknlMstpSnonWnonDnon";
		};
		class RifleProneActions: RifleBaseStandActions
		{
			Civil = "AmovPpneMstpSnonWnonDnon";
			SecondaryWeapon = "AmovPpneMstpSrasWlnrDnon";
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			SecondaryWeapon = "AmovPpneMstpSrasWlnrDnon";
		};
		class LauncherKneelActions;
		class LauncherProneActions: LauncherKneelActions
		{
			TurnL = "AmovPpneMstpSrasWlnrDnon_turnl";
			TurnLRelaxed = "AmovPpneMstpSrasWlnrDnon_turnl";
			TurnR = "AmovPpneMstpSrasWlnrDnon_turnr";
			TurnRRelaxed = "AmovPpneMstpSrasWlnrDnon_turnr";
		};
		class RifleStandActionsNoAdjust;
		class RifleStandActionsRunF: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMrunSrasWrflDf";
		};
		class RifleStandActionsRunFL: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMrunSrasWrflDf";
		};
		class RifleStandActionsRunFR: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMrunSrasWrflDf";
		};
		class RifleStandEvasiveActionsF: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMrunSrasWrflDf";
		};
		class RifleStandEvasiveActionsFL: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMrunSrasWrflDf";
		};
		class RifleStandEvasiveActionsFR: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMrunSrasWrflDf";
		};
		class RifleLowStandActionsNoAdjust;
		class RifleLowStandActionsRunF: RifleLowStandActionsNoAdjust
		{
			getOver = "AovrPercMrunSrasWrflDf";
		};
		class RifleLowStandActionsRunFL: RifleLowStandActionsNoAdjust
		{
			getOver = "AovrPercMrunSrasWrflDf";
		};
		class RifleLowStandActionsRunFR: RifleLowStandActionsNoAdjust
		{
			getOver = "AovrPercMrunSrasWrflDf";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class StandBase;
	class States
	{
		class AovrPercMstpSrasWrflDf;
		class AovrPercMrunSrasWrflDf: AovrPercMstpSrasWrflDf
		{
			forceAim = 0;
		};
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			InterpolateTo[] = {"AovrPercMrunSrasWrflDf",0.22,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMwlkSrasWrflDf",0.025,"AmovPknlMrunSrasWrflDf",0.03,"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDf",0.025,"Unconscious",0.01,"AmovPercMtacSrasWrflDf",0.02,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDb",0.02,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMrunSrasWrflDf_ldst",0.02,"AmovPercMrunSrasWrflDf",0.02};
		};
		class AadjPpneMstpSrasWrflDup;
		class AadjPpneMstpSrasWrflDdown: AadjPpneMstpSrasWrflDup
		{
			enableOptics = 1;
		};
		class AadjPpneMstpSrasWpstDup;
		class AadjPpneMstpSrasWpstDdown: AadjPpneMstpSrasWpstDup
		{
			enableOptics = 2;
		};
		class AmovPercMstpSnonWnonDnon: StandBase
		{
			ConnectTo[] += {"ACE_Climb",0.02};
		};
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium;
		class ACE_Climb: AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium
		{
			canReload = 0;
			forceAim = 1;
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		maxGunElev = 80;
	};
};
