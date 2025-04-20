class CfgPatches
{
	class BloodTesting
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts",
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class BloodTesting
	{
		dir="ExistenceBloodTestSystem";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="ExistenceBloodTestSystem";
		credits="CostaGeo";
		author="";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		inputs="";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"ExistenceBloodTestSystem/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"ExistenceBloodTestSystem/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"ExistenceBloodTestSystem/Scripts/5_Mission"
				};
			};
		};
	};
};
