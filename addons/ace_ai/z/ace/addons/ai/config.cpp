////////////////////////////////////////////////////////////////////
//DeRap: ace_ai\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:11 2018 : 'file' last modified on Mon Apr 16 21:40:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_ai
	{
		name = "ACE3 - AI";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F;
	class Rifle_Long_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 300;
			midRangeProbab = 0.5;
		};
		class FullAuto;
		class fullauto_medium: FullAuto
		{
			minRange = 20;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
		class single_medium_optics1: Single
		{
			aiRateOfFireDistance = 700;
			minRange = 120;
			maxRange = 700;
		};
		class single_far_optics2: single_medium_optics1
		{
			aiRateOfFireDistance = 900;
			minRange = 200;
			maxRange = 900;
		};
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		class Single: Single
		{
			minRange = 120;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.3;
		};
		class FullAuto;
		class fullauto_medium: fullauto_medium
		{
			minRange = 20;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
		class single_medium_optics1: single_medium_optics1
		{
			aiRateOfFireDistance = 600;
			minRange = 120;
			maxRange = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			aiRateOfFireDistance = 800;
			minRange = 200;
			maxRange = 800;
		};
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		class Single: Single
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 350;
			midRangeProbab = 0.5;
		};
		class fullauto_medium: fullauto_medium
		{
			minRange = 20;
			burst = "3 + round random 5";
		};
		class single_medium_optics1: single_medium_optics1
		{
			aiRateOfFireDistance = 700;
			minRange = 120;
			maxRange = 750;
		};
		class single_far_optics2: single_far_optics2
		{
			aiRateOfFireDistance = 900;
			minRange = 200;
			maxRange = 900;
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		modes[] = {"Single","manual","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 120;
		};
		class close;
		class medium;
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6.0;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
		};
		class far_optic1: close
		{
			aiRateOfFireDistance = 750;
			maxRange = 750;
		};
		class far_optic2: far_optic1
		{
			maxRange = 1100;
			aiRateOfFireDistance = 1100;
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 300;
			midRangeProbab = 0.5;
		};
		class FullAuto;
		class fullauto_medium: FullAuto
		{
			minRange = 20;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
		class single_medium_optics1: Single
		{
			aiRateOfFireDistance = 700;
			minRange = 120;
			maxRange = 700;
		};
		class single_far_optics2: single_medium_optics1
		{
			aiRateOfFireDistance = 900;
			minRange = 200;
			maxRange = 900;
		};
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F
	{
		class Single: Single
		{
			minRange = 120;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.3;
		};
		class fullauto_medium: fullauto_medium
		{
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
		class single_medium_optics1: single_medium_optics1
		{
			minRange = 120;
			maxRange = 600;
		};
		class single_medium_optics2: single_medium_optics1
		{
			aiRateOfFireDistance = 800;
			minRange = 200;
			maxRange = 800;
		};
	};
	class mk20_base_F: Rifle_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 250;
			midRangeProbab = 0.5;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
		};
		class fullauto_medium: FullAuto
		{
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
		class single_medium_optics1: Single
		{
			aiRateOfFireDistance = 600;
			minRange = 120;
			maxRange = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			aiRateOfFireDistance = 800;
			minRange = 200;
			maxRange = 800;
		};
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		class Single: Single
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 250;
			midRangeProbab = 0.5;
			maxRange = 350;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
		};
		class single_medium_optics1: single_medium_optics1
		{
			aiRateOfFireDistance = 600;
			minRange = 120;
			maxRange = 550;
		};
		class fullauto_medium: fullauto_medium
		{
			minRange = 20;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 250;
			midRangeProbab = 0.5;
			maxRange = 350;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
		};
		class fullauto_medium: FullAuto
		{
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
		class single_medium_optics1: Single
		{
			aiRateOfFireDistance = 600;
			minRange = 120;
			maxRange = 550;
		};
		class single_medium_optics2: single_medium_optics1
		{
			aiRateOfFireDistance = 700;
			minRange = 200;
			maxRange = 700;
		};
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		class Single: Single
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 300;
			midRangeProbab = 0.5;
			maxRange = 400;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
		};
		class fullauto_medium: fullauto_medium
		{
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
		class single_medium_optics1: single_medium_optics1
		{
			aiRateOfFireDistance = 700;
			minRange = 120;
			maxRange = 600;
		};
		class single_medium_optics2: single_medium_optics1
		{
			aiRateOfFireDistance = 800;
			minRange = 200;
			maxRange = 800;
		};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			minRange = 10;
		};
		class Burst: Mode_Burst
		{
			minRange = 5;
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			minRange = 100;
		};
		class Burst: Mode_Burst
		{
			minRange = 50;
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			minRange = 50;
		};
		class Burst: Mode_Burst
		{
			minRange = 25;
		};
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			minRange = 50;
		};
		class Burst: Mode_Burst
		{
			minRange = 25;
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class medium;
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6.0;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
		};
		class far_optic1: medium
		{
			maxRange = 750;
		};
		class far_optic2: far_optic1
		{
			maxRange = 1100;
			aiRateOfFireDistance = 1100;
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 120;
		};
		class close;
		class medium;
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6.0;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
		};
		class far_optic1: close
		{
			maxRange = 800;
		};
		class far_optic2: far_optic1
		{
			maxRange = 1200;
		};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRangeProbab = 0.3;
		};
		class FullAuto;
		class single_close_optics1: Single
		{
			minRange = 120;
			minRangeProbab = 0.8;
			midRangeProbab = 0.05;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRangeProbab = 0.7;
			midRangeProbab = 0.05;
		};
		class single_far_optics1: single_medium_optics1
		{
			minRange = 400;
			minRangeProbab = 0.5;
			midRangeProbab = 0.05;
		};
		class fullauto_medium: FullAuto
		{
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRangeProbab = 0.3;
		};
		class FullAuto;
		class single_close_optics1: Single
		{
			minRange = 120;
			minRangeProbab = 0.8;
			midRangeProbab = 0.05;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRangeProbab = 0.7;
			midRangeProbab = 0.05;
		};
		class single_far_optics1: single_medium_optics1
		{
			minRange = 400;
			minRangeProbab = 0.5;
			midRangeProbab = 0.05;
		};
		class fullauto_medium: FullAuto
		{
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 120;
			minRangeProbab = 0.7;
			midRangeProbab = 0.3;
		};
		class FullAuto;
		class single_close_optics1: Single
		{
			minRange = 120;
			minRangeProbab = 0.8;
			midRangeProbab = 0.05;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRangeProbab = 0.7;
			midRangeProbab = 0.05;
		};
		class single_far_optics1: single_medium_optics1
		{
			minRange = 400;
			minRangeProbab = 0.5;
			midRangeProbab = 0.05;
		};
		class fullauto_medium: FullAuto
		{
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
		};
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class manual;
		class burst;
		class close;
		class short;
		class medium;
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6.0;
			aiRateOfFireDistance = 900;
			minRange = 700;
			minRangeProbab = 0.1;
			midRange = 900;
			midRangeProbab = 0.2;
			maxRange = 1100;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
		};
		class far_optic1;
		class far_optic2;
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		modes[] += {"ACE_Burst_far"};
		class manual;
		class close;
		class short;
		class medium;
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6.0;
			aiRateOfFireDistance = 900;
			minRange = 700;
			minRangeProbab = 0.1;
			midRange = 900;
			midRangeProbab = 0.2;
			maxRange = 1100;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
		};
		class far_optic1;
		class far_optic2;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_ai
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\ai\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_ai
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\ai\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_ai
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\ai\XEH_postInit.sqf'";
	};
};
