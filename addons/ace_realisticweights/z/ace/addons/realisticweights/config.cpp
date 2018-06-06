////////////////////////////////////////////////////////////////////
//DeRap: ace_realisticweights\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:24 2018 : 'file' last modified on Mon Apr 16 21:47:19 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_realisticweights
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"BaerMitUmlaut"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_MX_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 79;
		};
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72;
		};
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 119;
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 81;
		};
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_Katiba_F: arifle_Katiba_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 81;
		};
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 73;
		};
	};
	class arifle_Katiba_GL_F: arifle_Katiba_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 111;
		};
	};
	class mk20_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_Mk20_F: mk20_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
		};
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 74;
		};
	};
	class arifle_Mk20_GL_F: mk20_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72;
		};
	};
	class arifle_TRG20_F: Tavor_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
		};
	};
	class arifle_TRG21_GL_F: arifle_TRG21_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 102;
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 163;
		};
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_01_F: DMR_01_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 112;
		};
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_GM6_F: GM6_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 253;
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_LRR_F: LRR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 310;
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo;
	};
	class hgun_PDW2000_F: pdw2000_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 33;
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SMG_01_F: SMG_01_Base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
		};
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SMG_02_F: SMG_02_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 61;
		};
	};
	class launch_NLAW_F: Launcher_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 275;
		};
	};
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
		};
	};
	class launch_Titan_base: Launcher_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
		};
	};
	class launch_Titan_short_base: launch_Titan_base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 88;
		};
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 24;
		};
	};
	class hgun_P07_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 13;
		};
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 21;
		};
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
		};
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_02_F: DMR_02_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 130;
		};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_05_blk_F: DMR_05_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
		};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_03_F: DMR_03_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
		};
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 92;
		};
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 218;
		};
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 240;
		};
	};
};
