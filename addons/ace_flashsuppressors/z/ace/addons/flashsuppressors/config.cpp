////////////////////////////////////////////////////////////////////
//DeRap: ace_flashsuppressors\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:16 2018 : 'file' last modified on Mon Apr 16 21:43:18 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_flashsuppressors
	{
		name = "ACE3 - Flash Suppressors";
		units[] = {};
		weapons[] = {"ACE_muzzle_mzls_H","ACE_muzzle_mzls_B","ACE_muzzle_mzls_L","ACE_muzzle_mzls_smg_01","ACE_muzzle_mzls_smg_02","ACE_muzzle_mzls_338","ACE_muzzle_mzls_93mmg"};
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
class CfgVehicles
{
	class NATO_Box_Base;
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_muzzle_mzls_H
			{
				name = "ACE_muzzle_mzls_H";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_B
			{
				name = "ACE_muzzle_mzls_B";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_smg_01
			{
				name = "ACE_muzzle_mzls_smg_01";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_smg_02
			{
				name = "ACE_muzzle_mzls_smg_02";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_338
			{
				name = "ACE_muzzle_mzls_338";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_93mmg
			{
				name = "ACE_muzzle_mzls_93mmg";
				count = 5;
			};
		};
	};
	class EAST_Box_Base;
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_muzzle_mzls_H
			{
				name = "ACE_muzzle_mzls_H";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_B
			{
				name = "ACE_muzzle_mzls_B";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_smg_01
			{
				name = "ACE_muzzle_mzls_smg_01";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_smg_02
			{
				name = "ACE_muzzle_mzls_smg_02";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_338
			{
				name = "ACE_muzzle_mzls_338";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_93mmg
			{
				name = "ACE_muzzle_mzls_93mmg";
				count = 5;
			};
		};
	};
	class IND_Box_Base;
	class Box_IND_Support_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_muzzle_mzls_H
			{
				name = "ACE_muzzle_mzls_H";
				count = 1;
			};
			class _xx_ACE_muzzle_mzls_B
			{
				name = "ACE_muzzle_mzls_B";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_L
			{
				name = "ACE_muzzle_mzls_L";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_smg_01
			{
				name = "ACE_muzzle_mzls_smg_01";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_smg_02
			{
				name = "ACE_muzzle_mzls_smg_02";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_338
			{
				name = "ACE_muzzle_mzls_338";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_93mmg
			{
				name = "ACE_muzzle_mzls_93mmg";
				count = 5;
			};
		};
	};
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_muzzle_mzls_H
			{
				name = "ACE_muzzle_mzls_H";
				count = 2;
			};
			class _xx_ACE_muzzle_mzls_B
			{
				name = "ACE_muzzle_mzls_B";
				count = 2;
			};
			class _xx_ACE_muzzle_mzls_L
			{
				name = "ACE_muzzle_mzls_L";
				count = 2;
			};
			class _xx_ACE_muzzle_mzls_smg_01
			{
				name = "ACE_muzzle_mzls_smg_01";
				count = 2;
			};
			class _xx_ACE_muzzle_mzls_smg_02
			{
				name = "ACE_muzzle_mzls_smg_02";
				count = 2;
			};
			class _xx_ACE_muzzle_mzls_338
			{
				name = "ACE_muzzle_mzls_338";
				count = 5;
			};
			class _xx_ACE_muzzle_mzls_93mmg
			{
				name = "ACE_muzzle_mzls_93mmg";
				count = 5;
			};
		};
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_338: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_338 = 1;
	};
};
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_B = 1;
	};
};
class asdg_MuzzleSlot_65: asdg_MuzzleSlot_762
{
	class compatibleItems: compatibleItems
	{
		ACE_muzzle_mzls_H = 1;
		ACE_muzzle_mzls_B = 0;
	};
};
class asdg_MuzzleSlot_93x64: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_93mmg = 1;
	};
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_smg_02 = 1;
	};
};
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_smg_02 = 1;
	};
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_L = 1;
	};
};
class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_smg_01 = 1;
	};
};
class asdg_MuzzleSlot_45ACP: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_smg_01 = 1;
	};
};
class asdg_MuzzleSlot_762MG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_B = 1;
	};
};
class MuzzleSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762MG
			{
				class compatibleItems: compatibleItems
				{
					ACE_muzzle_mzls_H = 1;
					ACE_muzzle_mzls_B = 0;
				};
			};
		};
	};
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class ACE_muzzle_mzls_H: ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_muzzle_mzls_H";
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "$STR_ace_flashsuppressors_muzzle_mzls_H";
		picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_h_ca.paa";
		model = "\A3\weapons_f\acc\acca_mzls_H_F";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 8;
			soundTypeIndex = 0;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 1.0;
				visibleFireTime = 0.5;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.9f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.2;
	};
	class ACE_muzzle_mzls_B: ACE_muzzle_mzls_H
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_muzzle_mzls_B";
		displayName = "$STR_ace_flashsuppressors_muzzle_mzls_B";
		picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_h_ca.paa";
		model = "\A3\weapons_f\acc\acca_mzls_H_F";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			soundTypeIndex = 0;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 1.0;
				visibleFireTime = 0.5;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.9f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.2;
	};
	class ACE_muzzle_mzls_L: ACE_muzzle_mzls_H
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_muzzle_mzls_L";
		displayName = "$STR_ace_flashsuppressors_muzzle_mzls_L";
		picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_l_ca.paa";
		model = "\A3\weapons_f\acc\acca_mzls_l_F";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			soundTypeIndex = 0;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 1.0;
				visibleFireTime = 0.5;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.9f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.1;
	};
	class ACE_muzzle_mzls_smg_01: ACE_muzzle_mzls_H
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_muzzle_mzls_smg_01";
		displayName = "$STR_ace_flashsuppressors_muzzle_mzls_smg_01";
		picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_l_ca.paa";
		model = "\A3\weapons_f\acc\acca_mzls_H_F";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			soundTypeIndex = 0;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 1.0;
				visibleFireTime = 0.5;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.9f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.1;
	};
	class ACE_muzzle_mzls_smg_02: ACE_muzzle_mzls_H
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_muzzle_mzls_smg_02";
		displayName = "$STR_ace_flashsuppressors_muzzle_mzls_smg_02";
		picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_l_ca.paa";
		model = "\A3\weapons_f\acc\acca_mzls_H_F";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			soundTypeIndex = 0;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 1.0;
				visibleFireTime = 0.5;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.9f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.1;
	};
	class ACE_muzzle_mzls_338: ACE_muzzle_mzls_H
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_muzzle_mzls_338";
		displayName = "$STR_ace_flashsuppressors_muzzle_mzls_338";
		picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_h_ca.paa";
		model = "\A3\weapons_f\acc\acca_mzls_H_F";
		class ItemInfo: ItemInfo
		{
			mass = 8;
			soundTypeIndex = 0;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 1.0;
				visibleFireTime = 0.5;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.9f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.2;
	};
	class ACE_muzzle_mzls_93mmg: ACE_muzzle_mzls_H
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_muzzle_mzls_93mmg";
		displayName = "$STR_ace_flashsuppressors_muzzle_mzls_93mmg";
		picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_h_ca.paa";
		model = "\A3\weapons_f\acc\acca_mzls_H_F";
		class ItemInfo: ItemInfo
		{
			mass = 8;
			soundTypeIndex = 0;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 1.0;
				visibleFireTime = 0.5;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.9f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.2;
	};
};
