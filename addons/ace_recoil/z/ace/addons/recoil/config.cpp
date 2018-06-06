////////////////////////////////////////////////////////////////////
//DeRap: ace_recoil\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:24 2018 : 'file' last modified on Mon Apr 16 21:47:20 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_recoil
	{
		name = "ACE3 - Recoil";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_recoil
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\recoil\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_recoil
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\recoil\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_recoil
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\recoil\XEH_postInit.sqf'";
	};
};
class CfgMovesBasic
{
	class Default
	{
		camShakeFire = 0;
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMstpSlowWrflDnon;
		class AmovPknlMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon
		{
			camShakeFire = 0;
		};
		class AmovPercMstpSrasWrflDnon;
		class AmovPpneMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon
		{
			camShakeFire = 0;
		};
		class AmovPknlMstpSrasWlnrDnon: Default
		{
			camShakeFire = 0;
		};
		class AmovPknlMrunSlowWrflDf;
		class AmovPknlMtacSlowWrflDf: AmovPknlMrunSlowWrflDf
		{
			camShakeFire = 0;
		};
		class AmovPknlMrunSlowWrflDfl;
		class AmovPknlMtacSlowWrflDfl: AmovPknlMrunSlowWrflDfl
		{
			camShakeFire = 0;
		};
		class AmovPknlMrunSlowWrflDl;
		class AmovPknlMtacSlowWrflDl: AmovPknlMrunSlowWrflDl
		{
			camShakeFire = 0;
		};
		class AmovPknlMrunSlowWrflDbl;
		class AmovPknlMtacSlowWrflDbl: AmovPknlMrunSlowWrflDbl
		{
			camShakeFire = 0;
		};
		class AmovPknlMrunSlowWrflDb;
		class AmovPknlMtacSlowWrflDb: AmovPknlMrunSlowWrflDb
		{
			camShakeFire = 0;
		};
		class AmovPknlMrunSlowWrflDbr;
		class AmovPknlMtacSlowWrflDbr: AmovPknlMrunSlowWrflDbr
		{
			camShakeFire = 0;
		};
		class AmovPknlMrunSlowWrflDr;
		class AmovPknlMtacSlowWrflDr: AmovPknlMrunSlowWrflDr
		{
			camShakeFire = 0;
		};
		class AmovPknlMrunSlowWrflDfr;
		class AmovPknlMtacSlowWrflDfr: AmovPknlMrunSlowWrflDfr
		{
			camShakeFire = 0;
		};
		class AmovPknlMstpSrasWrflDnon;
		class AmovPknlMwlkSrasWrflDf: AmovPknlMstpSrasWrflDnon
		{
			camShakeFire = 0;
		};
		class AmovPknlMrunSrasWrflDf;
		class AmovPknlMtacSrasWrflDf: AmovPknlMrunSrasWrflDf
		{
			camShakeFire = 0;
		};
		class AmovPknlMwlkSrasWpstDf;
		class AmovPknlMtacSrasWpstDf: AmovPknlMwlkSrasWpstDf
		{
			camShakeFire = 0;
		};
	};
};
class CfgRecoils
{
	class Default
	{
		muzzleOuter[] = {"0*0.2","0.4*1","0.5*1","0.6*1"};
		muzzleInner[] = {0,0.05,0.2,0.2};
		kickBack[] = {"0.05*1.4","0.1*1.4"};
		permanent = "0.1*0.4";
		temporary = "0.01*1.2";
	};
	class recoil_default: Default
	{
		muzzleOuter[] = {"0.3*0.2","1*1","0.3*1","0.2*1"};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		permanent = "0.1*0.4";
		temporary = "0.01*1.2";
	};
	class recoil_mk20: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.6*1","0.2*1","0.2*1"};
		kickBack[] = {"0.01*1.4","0.03*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_mk20c: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.8*1","0.3*1","0.2*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.015*1.2";
	};
	class recoil_trg20: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.015*1.2";
	};
	class recoil_trg21: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.8*1","0.3*1","0.2*1"};
		kickBack[] = {"0.01*1.4","0.03*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_mx: recoil_default
	{
		muzzleOuter[] = {"0.3*0.2","1*1","0.4*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_mxc: recoil_default
	{
		muzzleOuter[] = {"0.3*0.2","1.2*1","0.4*1","0.3*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.015*1.2";
	};
	class recoil_sw: recoil_default
	{
		muzzleOuter[] = {"0.3*0.2","0.8*1","0.5*1","0.2*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_mxm: recoil_default
	{
		muzzleOuter[] = {"0.3*0.2","0.8*1","0.4*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_ktb: recoil_default
	{
		muzzleOuter[] = {"0.3*0.2","1*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_ktbc: recoil_default
	{
		muzzleOuter[] = {"0.3*0.2","1.2*1","0.3*1","0.3*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.015*1.2";
	};
	class recoil_smg_01: recoil_default
	{
		muzzleOuter[] = {"0.1*0.2","0.8*1","0.3*1","0.2*1"};
		kickBack[] = {"0.01*1.4","0.03*1.4"};
		temporary = "0.015*1.2";
	};
	class recoil_smg_02: recoil_default
	{
		muzzleOuter[] = {"0.1*0.2","0.6*1","0.2*1","0.2*1"};
		kickBack[] = {"0.01*1.4","0.02*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_pdw: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.02*1.2";
	};
	class recoil_sdar: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_pistol_p07: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1*1","0.2*1","0.3*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.03*1.2";
	};
	class recoil_pistol_rook40: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1*1","0.2*1","0.3*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.02*1.2";
	};
	class recoil_pistol_acpc2: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1.5*1","0.2*1","0.3*1"};
		kickBack[] = {"0.04*1.4","0.08*1.4"};
		temporary = "0.04*1.2";
	};
	class recoil_pistol_4five: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1.5*1","0.2*1","0.3*1"};
		kickBack[] = {"0.04*1.4","0.08*1.4"};
		temporary = "0.06*1.2";
	};
	class recoil_pistol_zubr: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1.5*1","0.2*1","0.3*1"};
		kickBack[] = {"0.04*1.4","0.08*1.4"};
		temporary = "0.08*1.2";
	};
	class recoil_pistol_signal: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1.5*1","0.2*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.02*1.2";
	};
	class recoil_rpg: recoil_default
	{
		muzzleOuter[] = {"2*0.2","3*1","1*1","0.5*1"};
		kickBack[] = {"0.08*1.4","0.1*1.4"};
		temporary = "0.1*1.2";
	};
	class recoil_nlaw: recoil_default
	{
		muzzleOuter[] = {"2*0.2","3*1","1*1","0.5*1"};
		kickBack[] = {"0.06*1.4","0.08*1.4"};
		temporary = "0.08*1.2";
	};
	class recoil_titan_long: recoil_default
	{
		muzzleOuter[] = {"2*0.2","3*1","1*1","0.5*1"};
		kickBack[] = {"0.1*1.4","0.12*1.4"};
		temporary = "0.15*1.2";
	};
	class recoil_titan_short: recoil_default
	{
		muzzleOuter[] = {"2*0.2","3*1","1*1","0.5*1"};
		kickBack[] = {"0.1*1.4","0.12*1.4"};
		temporary = "0.12*1.2";
	};
	class recoil_mk200: recoil_default
	{
		muzzleOuter[] = {"0.4*0.2","0.6*1","0.6*1","0.2*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_zafir: recoil_default
	{
		muzzleOuter[] = {"0.5*0.2","1*1","0.7*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.08*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_m320: recoil_default
	{
		muzzleOuter[] = {"1*0.2","3*1","0.5*1","0.6*1"};
		kickBack[] = {"0.08*1.4","0.1*1.4"};
		temporary = "0.02*1.2";
	};
	class recoil_gm6: recoil_default
	{
		muzzleOuter[] = {"1.4*0.2","3.5*1","0.7*1","0.8*1"};
		kickBack[] = {"0.1*1.4","0.12*1.4"};
		temporary = "0.025*1.2";
	};
	class recoil_ebr: recoil_default
	{
		muzzleOuter[] = {"0.4*0.2","1.5*1","0.6*1","0.4*1"};
		kickBack[] = {"0.04*1.4","0.07*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_dmr_01: recoil_default
	{
		muzzleOuter[] = {"0.5*0.2","2*1","0.5*1","0.5*1"};
		kickBack[] = {"0.03*1.4","0.08*1.4"};
		temporary = "0.015*1.2";
	};
	class recoil_dmr_02: recoil_default
	{
		muzzleOuter[] = {"0.5*0.2","2.5*1","0.6*1","0.5*1"};
		kickBack[] = {"0.06*1.4","0.08*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_dmr_03: recoil_default
	{
		muzzleOuter[] = {"0.3*0.2","1.5*1","0.5*1","0.4*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.005*1.2";
	};
	class recoil_dmr_04: recoil_default
	{
		muzzleOuter[] = {"0.4*0.2","1.5*1","0.5*1","0.4*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.015*1.2";
	};
	class recoil_dmr_05: recoil_default
	{
		muzzleOuter[] = {"0.5*0.2","2.5*1","0.8*1","0.6*1"};
		kickBack[] = {"0.08*1.4","0.1*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_dmr_06: recoil_default
	{
		muzzleOuter[] = {"0.5*0.2","2*1","0.7*1","0.5*1"};
		kickBack[] = {"0.05*1.4","0.1*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_mmg_01: recoil_default
	{
		muzzleOuter[] = {"0.6*0.2","1.5*1","0.8*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.08*1.4"};
		temporary = "0.01*1.2";
	};
	class recoil_mmg_02: recoil_default
	{
		muzzleOuter[] = {"0.5*0.2","1.5*1","0.6*1","0.4*1"};
		kickBack[] = {"0.04*1.4","0.08*1.4"};
		temporary = "0.01*1.2";
	};
};
class CfgCameraShake
{
	defaultCaliberCoefWeaponFire = 0;
};
