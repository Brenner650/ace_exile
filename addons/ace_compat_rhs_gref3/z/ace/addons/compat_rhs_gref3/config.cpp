////////////////////////////////////////////////////////////////////
//DeRap: ace_compat_rhs_gref3\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:29 2018 : 'file' last modified on Mon Apr 16 21:50:16 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_compat_rhs_gref3
	{
		name = "ACE3 - RHS GREF Compatibility";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"rhsgref_main","rhsgref_c_weapons"};
		author = "$STR_ace_common_ACETeam";
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		ammo[] = {"rhsgref_ammo_rkg3em","rhs_ammo_762x25_Ball","rhs_ammo_792x57_Ball"};
	};
};
class CfgAmmo
{
	class GrenadeHand;
	class rhsgref_ammo_rkg3em: GrenadeHand
	{
		ace_frag_force = 0;
	};
	class BulletBase;
	class rhs_ammo_762x25_Ball: BulletBase
	{
		ACE_caliber = 7.874;
		ACE_bulletLength = 13.856;
		ACE_bulletMass = 5.5728;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.17};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {360,380,400};
		ACE_barrelLengths[] = {101.6,152.4,228.6};
	};
	class rhs_ammo_792x57_Ball: BulletBase
	{
		ACE_caliber = 8.077;
		ACE_bulletLength = 28.651;
		ACE_bulletMass = 12.7008;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.315};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {785,800,815};
		ACE_barrelLengths[] = {508.0,599.948,660.4};
	};
};
class CfgWeapons
{
	class rhs_weap_kar98k_Base_F;
	class rhs_weap_kar98k: rhs_weap_kar98k_Base_F
	{
		ACE_barrelTwist = 240;
		ACE_barrelLength = 600;
	};
	class rhs_weap_m38_Base_F;
	class rhs_weap_m38: rhs_weap_m38_Base_F
	{
		ACE_barrelTwist = 250;
		ACE_barrelLength = 315;
	};
	class rhs_weap_m38_rail;
	class rhs_weap_mosin_sbr: rhs_weap_m38_rail
	{
		ACE_barrelTwist = 240;
		ACE_barrelLength = 254;
	};
	class rhs_weap_m70_base;
	class rhs_weap_m70ab2: rhs_weap_m70_base
	{
		ACE_barrelTwist = 240;
		ACE_barrelLength = 415;
	};
	class rhs_weap_m92: rhs_weap_m70_base
	{
		ACE_barrelTwist = 240;
		ACE_barrelLength = 254;
	};
	class rhs_weap_m76: rhs_weap_m70_base
	{
		ACE_barrelTwist = 250;
		ACE_barrelLength = 200;
	};
	class rhs_weap_m21_base;
	class rhs_weap_m21: rhs_weap_m21_base
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 460;
	};
	class rhs_weap_m21a: rhs_weap_m21_base
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 290;
	};
	class rhs_weap_m21a_pr: rhs_weap_m21_base
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 290;
	};
	class rhs_weap_m21a_pr_pbg40: rhs_weap_m21_base
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 290;
	};
	class rhs_weap_m21s: rhs_weap_m21_base
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 375;
	};
	class rhs_weap_m21s_pr: rhs_weap_m21a_pr
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 375;
	};
	class Rifle_Base_F;
	class rhs_weap_savz58_base: Rifle_Base_F
	{
		ACE_barrelTwist = 240;
		ACE_barrelLength = 390;
	};
	class rhs_weap_stgw57_base;
	class rhs_weap_stgw57: rhs_weap_stgw57_base
	{
		ACE_barrelTwist = 270;
		ACE_barrelLength = 583;
	};
	class rhs_weap_g36_base;
	class rhs_weap_g36c: rhs_weap_g36_base
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 228.6;
	};
	class rhs_weap_g36kv: rhs_weap_g36_base
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 317.5;
	};
	class Rifle_Long_Base_F;
	class rhs_weap_m84: Rifle_Long_Base_F
	{
		ACE_barrelTwist = 240;
		ACE_barrelLength = 658;
	};
};
