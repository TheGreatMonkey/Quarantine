class CfgPatches
{
	class ad_oh58
	{
		units[]=
		{
			"ad_oh58d"
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_data_F",
			"A3_Characters_F"
		};
	};
};
class CfgVehicleClasses
{
	class ad_oh58
	{
		displayName="ADuke's Helos";
	};
	class ad_units
	{
		displayName="ADuke's Units";
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
		class NewTurret;
		class ViewPilot;
	};
	class Helicopter: Air
	{
		class Turrets;
		class MainTurret;
		class NewTurret;
		class AnimationSources;
		class HitPoints;
		class ViewPilot;
		class ViewOptics;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class AnimationSources;
		class RotorLibHelicopterProperties;
		class Eventhandlers;
		class ViewOptics;
	};
	class ad_oh58_base: Helicopter_Base_F
	{
		destrType="DestructWreck";
		scope=0;
		side=1;
		editorSubcategory="EdSubcat_Helicopters";
		picture="\A3\Air_F\Heli_Light_01\Data\UI\Heli_Light_01_CA.paa";
		icon="\A3\Air_F\Heli_Light_01\Data\UI\Map_Heli_Light_01_CA.paa";
		mapSize=15;
		faction="BLU_F";
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
		cargoCanEject=1;
		driverCanEject=1;
		helmetMountedDisplay=0;
		maxFordingDepth=0.75;
		mainBladeRadius=7.5;
		altFullForce=4000;
		altNoForce=6000;
		bodyFrictionCoef=1.4;
		supplyRadius=0;
		liftForceCoef=2;
		transportSoldier=1;
		cyclicAsideForceCoef=0.40000001;
		cyclicForwardForceCoef=1.7;
		enableManualFire=0;
		class Library
		{
			libTextDesc="OH-58";
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		transportMaxBackpacks=4;
		fuelCapacity=336;
		fuelConsumptionRate=0.138;
		maxSpeed=222;
		simulation="helicopterX";
		armor=10;
		weapons[]=
		{
			"ej_master_arms_safe",
			"kuy_IR_Jammer_Weapon"
		};
		magazines[]=
		{
			"kuy_IR_Jammer_Magazine"
		};
		irScanRangeMin=0;
		irScanRangeMax=2000;
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		radarType=4;
		threat[]={0.80000001,1,0.60000002};
		memoryPointsGetInDriver="pos pilot";
		memoryPointsGetInDriverDir="pos pilot dir";
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		driverCanSee=31;
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		driverAction="pilot_Heli_Transport_01";
		driverInAction="pilot_Heli_Light_03_Enter";
		selectionFireAnim="muzzleFlash";
		selectionHRotorStill="main rotor static";
		selectionHRotorMove="main rotor blur";
		selectionVRotorStill="tail rotor static";
		selectionVRotorMove="tail rotor blur";
		class MFD
		{
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=0;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=2;
			};
		};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="uh-60\Misc\uh-60.xml";
			defaultCollective=0.54500002;
			autoHoverCorrection[]={4.8000002,-3.2,0};
			retreatBladeStallWarningSpeed=83.333;
			maxTorque=2700;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=130000;
			maxTailRotorStress=10000;
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				isCopilot=1;
				body="ObsTurret";
				gun="ObsGun";
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				minElev=-80;
				maxElev=25;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				gunBeg="gun_end";
				gunEnd="gun_begin";
				memoryPointGun="gun_end";
				memoryPointsGetInDriver="pos pilot";
				memoryPointsGetInDriverDir="pos pilot dir";
				memoryPointGunnerOptics="commanderview";
				animationSourceBody="ObsTurret";
				animationSourceGun="ObsGun";
				LockDetectionSystem="1 + 2 + 4 + 8";
				incomingMissileDetectionSystem=16;
				TurretCanSee="1+2+4+8+16";
				showHMD=0;
				CanEject=1;
				startEngine=0;
				laserscanner=1;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				gunnerCompartments="Compartment2";
				commanding=-1;
				primaryGunner=0;
				selectionFireAnim="";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerOpticsModel="";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1"
				};
				gunnerForceOptics="false";
				gunnerOpticsShowCursor=1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares=1;
				weapons[]=
				{
					"ej_master_arms_safe",
					"kuy_IR_Jammer_Weapon",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"kuy_IR_Jammer_Magazine",
					"Laserbatteries"
				};
				stabilizedInAxes="StabilizedInAxesBoth";
				proxyIndex=1;
				gunnerName="Co-Pilot";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-35;
						maxAngleX=10;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsColor[]={0.15000001,1,0.15000001,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized=0;
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-35;
						maxAngleX=10;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsColor[]={0.15000001,1,0.15000001,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized=1;
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics1"
						};
					};
					class WideL: Wide
					{
						opticsDisplayName="WL";
						initFov=0.2;
						minFov=0.2;
						maxFov=0.2;
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[]={0,0,0,1};
						directionStabilized=1;
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						directionStabilized=1;
						gunnerOpticsColor[]={0,0,0,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsColor[]={0,0,0,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized=1;
						initFov=0.02;
						minFov=0.02;
						maxFov=0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsColor[]={0,0,0,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized=1;
						initFov=0.0099999998;
						minFov=0.0099999998;
						maxFov=0.0099999998;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=40;
					minAngleY=-100;
					maxAngleY=100;
					initFov=1.4;
					minFov=0.30000001;
					maxFov=1;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source="revolving";
				weapon="LMG_Minigun";
			};
			class Gatling_2
			{
				source="revolving";
				weapon="LMG_Minigun2";
			};
		};
		initCargoAngleY=10;
		minCargoAngleY=-60;
		maxCargoAngleY=120;
		minFireTime=30;
		class ViewPilot: ViewPilot
		{
			initFov=1.4;
			minFov=0.60000002;
			maxFov=1;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliCom";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name="bily pozicni";
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				intensity=75;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class RedStill
			{
				name="cerveny pozicni";
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class GreenStill
			{
				name="zeleny pozicni";
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=75;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="svetlo";
				direction="svetlo konec";
				hitpoint="svetlo";
				selection="svetlo";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=6;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=4;
				};
			};
		};
		dammageHalf[]={};
		dammageFull[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ad_oh58\data\mat\oh58_hull.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",
				"ad_oh58\data\mat\uh60m_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		attenuationEffectType="OpenHeliAttenuation";
		soundGetIn[]=
		{
			"ad_oh58\sounds\heli_door_01",
			0.31622776,
			1
		};
		soundGetOut[]=
		{
			"ad_oh58\sounds\heli_door_01",
			0.31622776,
			1,
			40
		};
		soundEnviron[]=
		{
			"",
			0.031622775,
			1
		};
		soundDammage[]=
		{
			"ad_oh58\sounds\alarm_loop1",
			0.31622776,
			1
		};
		soundEngineOnInt[]=
		{
			"ad_oh58\sounds\int-start-final",
			0.44668359,
			1
		};
		soundEngineOnExt[]=
		{
			"ad_oh58\sounds\ext-motor-start",
			0.44668359,
			1,
			700
		};
		soundEngineOffInt[]=
		{
			"ad_oh58\sounds\int-stop-final",
			0.44668359,
			1
		};
		soundEngineOffExt[]=
		{
			"ad_oh58\sounds\ext-motor-stop",
			0.44668359,
			1,
			700
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			0.1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			0.1,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			150
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\dummysound",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"ad_oh58\sounds\ext-fly-mode2",
					2.5118864,
					1,
					800
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"ad_oh58\sounds\int-rotor-single5b",
					2.5118864,
					1,
					1400
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,2,0.5};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"ad_oh58\sounds\int-rotor-single5a",
					2.5118864,
					1,
					1600
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.6,3.1400001,2,0.5};
			};
			class EngineIn
			{
				sound[]=
				{
					"ad_oh58\sounds\int-fly-mode7",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"ad_oh58\sounds\int-rotor-single5b",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"ad_oh58\sounds\int-rotor-single5a",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
		};
		class RenderTargets
		{
			class MFD1
			{
				renderTarget="rendertarget0";
				class View01
				{
					pointPosition="z_flir_pos";
					pointDirection="z_flir_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.093000002;
				};
			};
		};
	};
	class ad_oh58d: ad_oh58_base
	{
		scope=2;
		vehicleClass="Air";
		model="\ad_oh58\OH58\ad_oh58d.p3d";
		displayName="OH-58 Kiowa Warrior";
		crew="B_Helipilot_F";
		hideWeaponsCargo=1;
		side=1;
		faction="BLU_F";
	};
};
class cfgMods
{
	author="76561198016000690";
	timepacked="1472044019";
};
