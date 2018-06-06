////////////////////////////////////////////////////////////////////
//DeRap: ace_tracers\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:29 2018 : 'file' last modified on Mon Apr 16 21:50:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_tracers
	{
		name = "ACE3 - Tracers";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_ballistics"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"ACE2 Team"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		ammo[] = {"B_56x15_dual","B_9x21_Ball","B_9x21_Ball_Tracer_Green","B_45ACP_Ball","B_45ACP_Ball_Green","B_45ACP_Ball_Yellow","B_556x45_Ball","B_556x45_Ball_Tracer_Red","B_556x45_Ball_Tracer_Green","B_556x45_Ball_Tracer_Yellow","B_65x39_Caseless","B_65x39_Caseless_green","B_65x39_Caseless_yellow","B_65x39_Case_green","B_65x39_Case_yellow","B_65x39_Minigun_Caseless","B_65x39_Minigun_Caseless_Yellow_splash","B_65x39_Minigun_Caseless_Green_splash","B_762x51_Ball","B_762x51_Tracer_Red","B_762x51_Tracer_Green","B_762x51_Tracer_Yellow","B_762x51_Minigun_Tracer_Red","B_762x51_Minigun_Tracer_Red_splash","B_762x51_Minigun_Tracer_Yellow","B_762x51_Minigun_Tracer_Yellow_splash","B_762x54_Tracer_Red","B_762x54_Tracer_Green","B_762x54_Tracer_Yellow","B_127x99_Ball","B_127x99_Ball_Tracer_Red","B_127x99_Ball_Tracer_Green","B_127x99_Ball_Tracer_Yellow","B_127x99_SLAP_Tracer_Red","B_127x99_SLAP_Tracer_Green","B_127x99_SLAP_Tracer_Yellow","B_408_Ball","B_127x33_Ball","B_127x108_Ball","B_338_Ball","B_338_NM_Ball","B_127x54_Ball","B_93x64_Ball","B_19mm_HE","B_30mm_HE_Tracer_Red","B_30mm_HE_Tracer_Green","B_30mm_HE_Tracer_Yellow","B_30mm_MP_Tracer_Red","B_30mm_MP_Tracer_Green","B_30mm_MP_Tracer_Yellow","B_40mm_GPR_Tracer_Red","B_40mm_GPR_Tracer_Green","B_40mm_GPR_Tracer_Yellow","B_20mm","B_20mm_Tracer_Red","B_25mm","B_30mm_AP","B_30mm_AP_Tracer_Red","B_30mm_AP_Tracer_Green","B_30mm_AP_Tracer_Yellow","B_30mm_APFSDS_Tracer_Red","B_30mm_APFSDS_Tracer_Green","B_30mm_APFSDS_Tracer_Yellow","B_40mm_APFSDS_Tracer_Red","B_40mm_APFSDS_Tracer_Green","B_40mm_APFSDS_Tracer_Yellow","B_35mm_AA","B_35mm_AA_Tracer_Red","B_35mm_AA_Tracer_Green","B_35mm_AA_Tracer_Yellow","Gatling_30mm_HE_Plane_CAS_01_F","Cannon_30mm_HE_Plane_CAS_02_F","Sh_120mm_HE","Sh_120mm_HE_Tracer_Red","Sh_120mm_HE_Tracer_Green","Sh_120mm_HE_Tracer_Yellow","Sh_120mm_APFSDS","Sh_120mm_APFSDS_Tracer_Red","Sh_120mm_APFSDS_Tracer_Green","Sh_120mm_APFSDS_Tracer_Yellow","Sh_125mm_APFSDS_T_Red","Sh_125mm_APFSDS_T_Green","Sh_125mm_APFSDS_T_Yellow","Sh_125mm_HE_T_Red","Sh_125mm_HE_T_Green","Sh_125mm_HE_T_Yellow","Sh_125mm_HEAT_T_Red","Sh_125mm_HEAT_T_Green","Sh_125mm_HEAT_T_Yellow","Sh_105mm_APFSDS_T_Red","Sh_105mm_APFSDS_T_Green","Sh_105mm_APFSDS_T_Yellow","Sh_105mm_HEAT_MP_T_Red","Sh_105mm_HEAT_MP_T_Green","Sh_105mm_HEAT_MP_T_Yellow"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class ShellBase;
	class SubmunitionBullet;
	class B_56x15_dual: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_9x21_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_9x21_Ball_Tracer_Green: B_9x21_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_45ACP_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_45ACP_Ball_Green: B_45ACP_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_45ACP_Ball_Yellow: B_45ACP_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_556x45_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_556x45_Ball_Tracer_Green: B_556x45_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_65x39_Caseless: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_65x39_Caseless_green: B_65x39_Caseless
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_65x39_Caseless_yellow: B_65x39_Caseless
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_65x39_Case;
	class B_65x39_Case_green: B_65x39_Case
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_65x39_Case_yellow: B_65x39_Case
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_65x39_Minigun_Caseless: SubmunitionBullet
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_65x39_Minigun_Caseless_Red_splash;
	class B_65x39_Minigun_Caseless_Yellow_splash: B_65x39_Minigun_Caseless_Red_splash
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_65x39_Minigun_Caseless_Green_splash: B_65x39_Minigun_Caseless_Red_splash
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_762x51_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_762x51_Tracer_Red: B_762x51_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_762x51_Tracer_Green: B_762x51_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_762x51_Tracer_Yellow: B_762x51_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_762x51_Minigun_Tracer_Red: SubmunitionBullet
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_762x51_Minigun_Tracer_Red_splash: B_762x51_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_762x51_Minigun_Tracer_Yellow: B_762x51_Minigun_Tracer_Red
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_762x51_Minigun_Tracer_Yellow_splash: B_762x51_Minigun_Tracer_Red_splash
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_762x54_Ball;
	class B_762x54_Tracer_Red: B_762x54_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_762x54_Tracer_Green: B_762x54_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_762x54_Tracer_Yellow: B_762x54_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_127x99_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_127x99_Ball_Tracer_Red: B_127x99_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_127x99_Ball_Tracer_Green: B_127x99_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_127x99_SLAP;
	class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_408_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_127x33_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_127x108_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_338_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_338_NM_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_127x54_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_93x64_Ball: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_19mm_HE: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_30mm_HE;
	class B_30mm_HE_Tracer_Red: B_30mm_HE
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_30mm_HE_Tracer_Green: B_30mm_HE
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_30mm_HE_Tracer_Yellow: B_30mm_HE
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_30mm_MP;
	class B_30mm_MP_Tracer_Red: B_30mm_MP
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_30mm_MP_Tracer_Green: B_30mm_MP
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_30mm_MP_Tracer_Yellow: B_30mm_MP
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_40mm_GPR;
	class B_40mm_GPR_Tracer_Red: B_40mm_GPR
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_40mm_GPR_Tracer_Green: B_40mm_GPR
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_20mm: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_20mm_Tracer_Red: B_20mm
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_25mm: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_30mm_AP: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_30mm_AP_Tracer_Red: B_30mm_AP
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_30mm_AP_Tracer_Green: B_30mm_AP
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_30mm_AP_Tracer_Yellow: B_30mm_AP
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_30mm_APFSDS;
	class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_40mm_APFSDS;
	class B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_40mm_APFSDS_Tracer_Green: B_40mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_40mm_APFSDS_Tracer_Yellow: B_40mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class B_35mm_AA: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_35mm_AA_Tracer_Red: B_35mm_AA
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class B_35mm_AA_Tracer_Green: B_35mm_AA
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class B_35mm_AA_Tracer_Yellow: B_35mm_AA
	{
		model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
	class Cannon_30mm_HE_Plane_CAS_02_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
	};
	class Sh_120mm_HE: ShellBase
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
	};
	class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
	};
	class Sh_120mm_HE_Tracer_Green: Sh_120mm_HE
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_green.p3d";
	};
	class Sh_120mm_HE_Tracer_Yellow: Sh_120mm_HE
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_yellow.p3d";
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
	};
	class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
	};
	class Sh_120mm_APFSDS_Tracer_Green: Sh_120mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_green.p3d";
	};
	class Sh_120mm_APFSDS_Tracer_Yellow: Sh_120mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_yellow.p3d";
	};
	class Sh_125mm_APFSDS;
	class Sh_125mm_APFSDS_T_Red: Sh_125mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
	};
	class Sh_125mm_APFSDS_T_Green: Sh_125mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_green.p3d";
	};
	class Sh_125mm_APFSDS_T_Yellow: Sh_125mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_yellow.p3d";
	};
	class Sh_125mm_HE;
	class Sh_125mm_HE_T_Red: Sh_125mm_HE
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
	};
	class Sh_125mm_HE_T_Green: Sh_125mm_HE
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_green.p3d";
	};
	class Sh_125mm_HE_T_Yellow: Sh_125mm_HE
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_yellow.p3d";
	};
	class Sh_125mm_HEAT;
	class Sh_125mm_HEAT_T_Red: Sh_125mm_HEAT
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
	};
	class Sh_125mm_HEAT_T_Green: Sh_125mm_HEAT
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_green.p3d";
	};
	class Sh_125mm_HEAT_T_Yellow: Sh_125mm_HEAT
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_yellow.p3d";
	};
	class Sh_105mm_APFSDS;
	class Sh_105mm_APFSDS_T_Red: Sh_105mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
	};
	class Sh_105mm_APFSDS_T_Green: Sh_105mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_green.p3d";
	};
	class Sh_105mm_APFSDS_T_Yellow: Sh_105mm_APFSDS
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_yellow.p3d";
	};
	class Sh_105mm_HEAT_MP;
	class Sh_105mm_HEAT_MP_T_Red: Sh_105mm_HEAT_MP
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
	};
	class Sh_105mm_HEAT_MP_T_Green: Sh_105mm_HEAT_MP
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_green.p3d";
	};
	class Sh_105mm_HEAT_MP_T_Yellow: Sh_105mm_HEAT_MP
	{
		model = "\z\ace\addons\tracers\ace_shell_tracer_yellow.p3d";
	};
};
