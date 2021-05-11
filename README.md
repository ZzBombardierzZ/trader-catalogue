# Epoch-Trader-Catalog


Epoch Trader Catalog


![GitHub Logo](http://puu.sh/HFDs4/6f728a84ce.png)



### Prerequisites

```
a custom compliles.sqf, keyboard.sqf and server_traders.sqf
```




### Install

In your **description.ext** at the bottom paste

```
#include "scripts\catalogue\chx_defines.hpp" 
#include "scripts\catalogue\chx_catalog.hpp" 
```

Save and close.





In your **compiles.sqf** find

```
if (!isDedicated) then {
```

Below that paste

```
//---------------------------------------------------------------- Catalogue Start
		weapon_preview = compile preprocessFileLineNumbers "scripts\catalogue\weapon_preview.sqf";
		vehicle_preview = compile preprocessFileLineNumbers "scripts\catalogue\vehicle_preview.sqf";
		trader_preview = compile preprocessFileLineNumbers "scripts\catalogue\trader_preview.sqf";
		fnc_rotate_bot = {
			private ["_dir","_input","_bot"];
			disableSerialization;
			_input = _this select 0;
			_bot = _this select 1;
			_dir = getDir _bot;
			_dir = _dir + _input;
			_bot setDir _dir;
		};
//---------------------------------------------------------------- Catalogue End
```

Save and close.




Next, open your **keyboard.sqf**, scroll to the bottom and above the last 
```
_handled
```

Paste

```
//---------------------------------------------------------------- Catalogue Start
	if (_dikCode == 0x15) then { []execVM "scripts\catalogue\catalog_menu.sqf"; 	};	
	private ["_isBusy"];
	_isBusy = player getVariable["isBusy",false];
	if (_isBusy) then {
		if (_dikCode == 0x05) then {			
			[15,preview_bot] call fnc_rotate_bot;
			[15,vehicle_bot] call fnc_rotate_bot;
		};	
		if (_dikCode == 0x07) then {			
			[-15,preview_bot] call fnc_rotate_bot;
			[-15,vehicle_bot] call fnc_rotate_bot;
		};	
	};	
//---------------------------------------------------------------- Catalogue End
```




Open your **server_traders.sqf** and add 
```
"trader_catalog"
```
to the serverTraders array, so you should have something like this.
```
serverTraders = ["trader_catalog","FR_AC","GUE_Commander","GUE_Woodlander2","RU_Citizen4","Villager1","Profiteer1","Rita_Ensler_EP1","Dr_Hladik_EP1","Worker2","TK_CIV_Worker01_EP1","CIV_EuroMan01_EP1","CIV_EuroMan02_EP1","RU_WorkWoman5","Doctor","Worker1","TK_CIV_Worker02_EP1","Rocker4","RU_Citizen3","RU_WorkWoman1","Dr_Annie_Baker_EP1","Worker3","RU_Pilot","RU_Villager3","HouseWife1","Profiteer2","Profiteer3","Functionary1_EP1"];
```
Next at the bottom of **server_traders.sqf** add the categories you want to display in the menu.
(https://github.com/EpochModTeam/DayZ-Epoch/tree/3337c5a74996e374225c341f7af944f7c6646ddb/SQF/dayz_code/system/mission/server_traders)
```

menu_trader_catalog= [
	[
//Start of categories
		[ "BLACKMARKET",11],
		[ "ATTACHMENTS",12],
		[ "PISTOLS",13],
		[ "SUB MACHINE GUNS",14],
		[ "SINGLESHOT",15],
		[ "ASSAULT RIFLES",16],
		[ "SNIPER RIFLES",17],
		[ "LIGHT MACHINE GUNS",18],
		[ "PISTOL AMMO",19],
		[ "SUB MACHINEGUN AMMO",20],
		[ "SINGLE SHOT AMMO",21],
		[ "ASSAULT RIFLE AMMO",22],
		[ "SNIPER RIFLE AMMO",23],
		[ "LIGHT MACHINEGUN AMMO",24],
		[ "PACKAGEFOOD",27],
		[ "COOKMEAT",28],
		[ "DRINKS",29],
		[ "CLOTHES",30],
		[ "BACKPACKS",31],
		[ "MISCELLANEOUS",32],
		[ "MEDICAL SUPPLIES",33],
		[ "SMOKE GRENADES",25],
		[ "FLARES",26],
		[ "TOOLS",34],
		[ "BUILDING SUPPLIES",35],
		[ "VEHICLE PARTS",36],
		[ "BIKES ATVS",37],
		[ "CARS",38],
		[ "PICKUPS",39],
		[ "UAZS",40],
		[ "SUVS",41],
		[ "CARGO TRUCKS",42],
		[ "FUEL TRUCKS",43],
		[ "MILITARY UNARMED",44],
		[ "MISCELLANEOUS VEHICLES",45],
		[ "BOATS ARMED",48],
		[ "BOATS UNARMED",49],
		[ "AIRPLANES",46],
		[ "HELICOPTER",47]
//End of categories
	],
	[],
    "neutral"
];
```


Move the Catalogue folder into your scripts folder (assuming you're using https://github.com/oiad/modPack)


**Install Complete**



## Acknowledgments

Zupa and the Epoch devs. 
This menu is just a hacked up trader menu.
