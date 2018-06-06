////////////////////////////////////////////////////////////////////
//DeRap: ace_smallarms\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:26 2018 : 'file' last modified on Mon Apr 16 21:48:08 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_smallarms
	{
		name = "ACE3 - Small Arms";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"TaoSensai","KoffeinFlummi"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		displayname = "6.5mm 30Rnd Mag";
		displaynameshort = "6.5mm";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
		displayname = "6.5mm 30Rnd Tracer Mag";
		displaynameshort = "6.5mm Tracer";
	};
	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag
	{
		displayname = "6.5mm 30Rnd Mag";
		displaynameshort = "6.5mm";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class 30Rnd_65x39_caseless_green_Tracer: 30Rnd_65x39_caseless_green
	{
		displayname = "6.5mm 30Rnd Tracer Magazine";
		displaynameshort = "6.5mm Tracer";
	};
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		displayname = "6.5mm 100Rnd Mag";
		displaynameshort = "6.5mm";
		tracersEvery = 5;
		lastRoundsTracer = 3;
	};
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
		displayname = "6.5mm 100Rnd Tracer Mag";
		displaynameshort = "6.5mm Tracer";
	};
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
	{
		displayname = "6.5mm 200Rnd Box";
		displaynameshort = "6.5mm";
		tracersEvery = 5;
		lastRoundsTracer = 3;
	};
	class 200Rnd_65x39_cased_Box_Tracer: 200Rnd_65x39_cased_Box
	{
		displayname = "6.5mm 200Rnd Tracer Box";
		displaynameshort = "6.5mm Tracer";
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		displayname = "7.62mm 20Rnd Mag";
		displaynameshort = "7.62mm";
	};
	class 150Rnd_762x51_Box: CA_Magazine
	{
		displayname = "7.62mm 150Rnd Box";
		tracersEvery = 5;
		lastRoundsTracer = 3;
	};
	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box
	{
		displayname = "7.62mm 150Rnd Tracer Box";
	};
	class 7Rnd_408_Mag: CA_Magazine
	{
		displayname = ".408 7Rnd Mag";
	};
	class 5Rnd_127x108_Mag: CA_Magazine
	{
		displayname = "12.7mm 5Rnd Mag";
	};
	class 30Rnd_9x21_Mag: CA_Magazine
	{
		displayname = "9mm 30Rnd Mag";
		displaynameshort = "9mm";
		lastRoundsTracer = 0;
	};
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		displayname = "9mm 17Rnd Mag";
		displaynameshort = "9mm";
		count = 17;
	};
	class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag
	{
		displayname = ".45 25Rnd Mag";
		displaynameshort = ".45";
		picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		count = 25;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		displayname = ".45 8Rnd Mag";
		displaynameshort = ".45";
		count = 8;
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01
	{
		displayname = ".45 25Rnd Tracer Mag";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F{};
	class Rifle_Long_Base_F: Rifle_Base_F{};
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher{};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.075;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.075;
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		modes[] = {"Single","manual","close","short","medium","far_optic1","far_optic2"};
	};
	class arifle_katiba_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.075;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.075;
		};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto"};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.07;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.07;
		};
	};
	class mk20_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.07;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.07;
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.05;
		};
		class Burst: Mode_Burst
		{
			burst = 2;
			reloadTime = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.05;
		};
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.052;
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.052;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.052;
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.06;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.06;
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		modes[] = {"manual","Single","close","short","medium","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
			reloadTime = 0.109;
		};
		class Single: manual
		{
			reloadTime = 0.109;
			dispersion = 0.00175;
			autofire = 0;
			burst = 1;
			displayname = "Semi";
			texturetype = "semi";
			showToPlayer = 1;
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.07;
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		cursor = "arifle";
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		cursor = "arifle";
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		cursor = "arifle";
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.24;
		};
	};
};
