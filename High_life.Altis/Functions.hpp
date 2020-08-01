class Socket_Reciever {
    tag = "SOCK";
    class SQL_Socket {
        file = "core\session";
        class dataQuery {};
        class insertPlayerInfo {};
        class requestReceived {};
        class syncData {};
        class updatePartial {};
        class updateRequest {};
		class tazeRagdoll {};
    };
};

class Life_Client_Core {
    tag = "life";

    class Master_Directory {
        file = "core";
        class initCiv {};
        class initCop {};
        class initMedic {};
        class setupActions {};
        class setupEVH {};
        class survival {};
        class welcomeNotification {};
    };

    class Actions {
        file = "core\actions";
        class arrestAction {};
        class buyLicense {};
        class captureHideout {};
        class catchFish {};
        class dpFinish {};
        class dropFishingNet {};
        class escortAction {};
        class gather {};
        class getDPMission {};
        class gutAnimal {};
        class healHospital {};
        class impoundAction {};
        class mine {};
        class packupSpikes {};
        class pickupItem {};
        class pickupMoney {};
        class postBail {};
        class processAction {};
        class pulloutAction {};
        class putInCar {};
        class removeContainer {};
        class repairTruck {};
        class restrainAction {};
        class robAction {};
        class searchAction {};
        class searchVehAction {};
        class seizePlayerAction {};
        class serviceChopper {};
        class stopEscorting {};
        class storeVehicle {};
        class surrender {};
        class ticketAction {};
        class unrestrain {};
		class seizeVehAction {};
		class robItems {};
		class unflip {};
		class busTravel {};
		class teleTimer {};
		class revokeDriverLicense{};
    };

    class Admin {
        file = "core\admin";
        class adminCompensate {};
        class adminDebugCon {};
        class adminFreeze {};
        class admingetID {};
        class adminGodMode {};
        class adminid {};
        class admininfo {};
        class adminMarkers {};
        class adminMenu {};
        class adminQuery {};
        class adminSpectate {};
        class adminTeleport {};
        class adminTpHere {};
    };

    class Civilian {
        file = "core\civilian";
        class civLoadout {};
        class civMarkers {};
        class demoChargeTimer {};
        class freezePlayer {};
        class jail {};
        class jailMe {};
        class knockedOut {};
        class knockoutAction {};
        class removeLicenses {};
        class robPerson {};
        class robReceive {};
        class tazed {};
		class passeportCiv {};  
		class civPasseport {};
		class skyDive {};
    };

    class Config {
        file = "core\config";
        class houseConfig {};
        class itemWeight {};
        class vehicleAnimate {};
        class vehicleWeightCfg {};
    };

    class Cop {
        file = "core\cop";
		class copEnter {};
        class bountyReceive {};
        class containerInvSearch {};
        class copInteractionMenu {};
        class copLights {};
		class copOpener {};
        class copLoadout {};
        class copMarkers {};
        class copSearch {};
        class copSiren {};
        class doorAnimate {};
        class fedCamDisplay {};
        class licenseCheck {};
        class licensesRead {};
        class questionDealer {};
        class radar {};
        class repairDoor {};
        class restrain {};
        class searchClient {};
        class seizeClient {};
        class sirenLights {};
        class spikeStripEffect {};
        class ticketGive {};
        class ticketPaid {};
        class ticketPay {};
        class ticketPrompt {};
        class vehInvSearch {};
        class wantedGrab {};
        class showArrestDialog {};
        class arrestDialog_Arrest {};
		class copPasseport {};
		class passeportCop {}; 
		class seizeObjects {};
		class copZones {};
		class wyrzucitem {};
		class zatrzymaj {}; 
		class zatrzymaj2 {}; 
		class parkingTicket {};
		class payParkingTicket {};
		class zabierzkase {};
		class dodajkase {};
		class zabierzkaseAction {};
		class tazerFix {};
	};

    class Dialog_Controls {
        file = "dialog\function";
        class bankDeposit {};
        class bankTransfer {};
        class bankWithdraw {};
        class displayHandler {};
        class gangDeposit {};
        class gangWithdraw {};
        class garageLBChange {};
        class impoundMenu {};
        class progressBar {};
        class safeFix {};
        class safeInventory {};
        class safeOpen {};
        class safeTake {};
        class sellGarage {};
        class setMapPosition {};
        class spawnConfirm {};
        class spawnMenu {};
        class spawnPointCfg {};
        class spawnPointSelected {};
        class unimpound {};
        class vehicleGarage {};
        class wireTransfer {};
		class insureCar {};
		class marketLBChange {};
		class marketUpdate {};
		class marketMenu {};
    };

    class Functions    {
        file = "core\functions";
        class accType {};
		class seatbelt {};
        class actionKeyHandler {};
        class animSync {};
        class calWeightDiff {};
        class clearVehicleAmmo {};
        class dropItems {};
		class robstore {};
        class escInterupt {};
        class fetchCfgDetails {};
        class fetchDeadGear {};
        class fetchVehInfo {};
        class isDamaged {};
        class giveDiff {};
        class handleDamage {};
        class handleInv {};
        class handleItem {};
        class hideObj {};
        class hudSetup {};
        class hudUpdate {};
        class inventoryClosed {};
        class inventoryOpened {};
        class isUIDActive {};
        class keyHandler {};
        class loadDeadGear {};
        class loadGear {};
        class nearATM {};
        class nearestDoor {};
        class nearUnits {};
        class numberText {};
        class onFired {};
        class onTakeItem {};
        class playerSkins {};
        class playerTags {};
        class pullOutVeh {};
        class pushObject {};
        class receiveItem {};
        class receiveMoney {};
        class revealObjects {};
        class saveGear {};
        class searchPosEmpty {};
        class simDisable {};
        class stripDownPlayer {};
        class tazeSound {};
        class teleport {};
        class whereAmI {};
		class bankfast {};
		class loggedOut {};
		class heal {};
		class czrynek {};
		class createmarker {};
		class fadeSound {};
		class zlodziej {};
		class tablice {};
		class tablicemenu {};
		class wez {};
		class schowaj {};
		class szot {};
		class radArea {};
    };

    class Gangs    {
        file = "core\gangs";
        class createGang {};
        class gangCreated {};
        class gangDisband {};
        class gangDisbanded {};
        class gangInvite {};
        class gangInvitePlayer {};
        class gangKick {};
        class gangLeave {};
        class gangMenu {};
        class gangNewLeader {};
        class gangUpgrade {};
        class initGang {};
		class areaCapture {};
    };

    class Housing {
        file = "core\housing";
        class buyHouse {};
        class containerMenu {};
        class copBreakDoor {};
        class copHouseOwner {};
        class garageRefund {};
        class getBuildingPositions {};
        class houseMenu {};
        class initHouses {};
        class lightHouse {};
        class lightHouseAction {};
        class lockHouse {};
        class lockupHouse {};
        class placeContainer {};
        class PlayerInBuilding {};
        class raidHouse {};
        class sellHouse {};
    };

    class Items    {
        file = "core\items";
        class blastingCharge {};
        class boltcutter {};
        class defuseKit {};
        class flashbang {};
        class jerrycanRefuel {};
        class jerryRefuel {};
        class lockpick {};
        class placestorage {};
        class spikeStrip {};
        class storageBox {};
		class weed {};
		class heroin {};
		class bandages {};
		class morphine {};
		class gpsTracker {};
		class pijealko {};
		class alkoragdoll {};
		class speedBomb {};
    };

    class Medical_System {
        file = "core\medical";
        class deathScreen {};
        class medicLights {};
        class medicLoadout {};
        class medicMarkers {};
        class medicRequest {};
        class medicSiren {};
        class medicSirenLights {};
        class onPlayerKilled {};
        class onPlayerRespawn {};
        class requestMedic {};
        class respawned {};
        class revived {};
        class revivePlayer {};
		class newLifeRule {};
		class jedziemedyk {};
		class jedziemedyk2 {};
		class nosze {};
		class noszeaction {};
		class noszez {};
		class processActionMed {};
		class gatherMed {};
    };

    class Network {
        file = "core\functions\network";
        class broadcast {};
        class corpse {};
        class jumpFnc {};
        class say3D {};
        class setFuel {};
        class soundDevice {};
    };

    class Player_Menu {
        file = "core\pmenu";
        class altisPhone {};
        class cellphone {};
        class giveItem {};
        class giveMoney {};
        class keyDrop {};
        class keyGive {};
        class keyMenu {};
        class p_openMenu {};
        class p_updateMenu {};
        class pardon {};
        class removeItem {};
        class s_onChar {};
        class s_onCheckedChange {};
        class s_onSliderChange {};
        class settingsMenu {};
        class updateViewDistance {};
        class useItem {};
        class wantedAddP {};
        class wantedInfo {};
        class wantedList {};
        class wantedMenu {};
		class physicalPhone {};
    };

    class Shops    {
        file = "core\shops";
        class atmMenu {};
        class buyClothes {};
        class changeClothes {};
        class chopShopMenu {};
        class chopShopSelection {};
        class chopShopSell {};
        class clothingFilter {};
        class clothingMenu {};
        class fuelLBchange {};
        class fuelStatOpen {};
        class vehicleShop3DPreview {};
        class vehicleShopBuy {};
        class vehicleShopEnd3DPreview {};
        class vehicleShopInit3DPreview {};
        class vehicleShopLBChange {};
        class vehicleShopMenu {};
        class virt_buy {};
        class virt_menu {};
        class virt_sell {};
        class virt_sell_cz {};
        class virt_update {};
        class weaponShopAccs {};
        class weaponShopBuySell {};
        class weaponShopFilter {};
        class weaponShopMags {};
        class weaponShopMenu {};
        class weaponShopSelection {};
		class virt_sellAll {};
		class virt_sellAll_cz {};
    };

    class Vehicle {
        file = "core\vehicle";
        class addVehicle2Chain {};
        class colorVehicle {};
        class deviceMine {};
        class FuelRefuelcar {};
        class fuelStore {};
        class fuelSupply {};
        class lockVehicle {};
        class openInventory {};
        class vehiclecolor3DRefresh {};
        class vehicleOwners {};
        class vehicleWeight {};
        class vehInventory {};
        class vehStoreItem {};
        class vehTakeItem {};
        class vInteractionMenu {};
		class vehTakeAllItem {};
		class vehStoreAllItem {};
    };
	
		class CopPlaceables
	{
		file = "core\cop\placeables";
		class placeablesInit {};
		class placeablesMenu {};
		class placeablesRemoveAll {};
		class placeablePlace {};
		class placeableCancel {};
		class placeablesPlaceComplete {};
	};
	
	class CopPlaceablesMEDIC
	{
		file = "core\medical\MedicPlaceables";
		class placeablesInitMEDIC {};
		class placeablesMenuMEDIC {};
		class placeablesRemoveAllMEDIC {};
		class placeablePlaceMEDIC {};
		class placeableCancelMEDIC {};
		class placeablesPlaceCompleteMEDIC {};
	};
	
	class autosave {
		file = "derleon\autosave";
		class autoSaveInv {};
	};
	
	class CivTieing {
		file = "core\civilian\CivTieing";
		class gagAction {};					
		class gagged {};
		class removeGagAction {};
		class tieing {};
		class tieingAction {};
		class tieingActionb {};
		class tieingb {};
		class untie {};
		class untieb {};
	};
	
	class Special
 {
 file = "core\special";
 class openEmpMenu {};
 class isEmpOperator {};
 class scanVehicles {};
 class warnVehicle {};
 class empVehicle {};
 class vehicleWarned {};
 class vehicleEmpd {};
 };
 
 class BountyHunters {
    		file = "core\BountyHunters";
    		class bountyAddMenu {};
    		class bountyAddP {};
    		class bountyBuy {};
    		class bountyGrab {};
    		class bountyHunterReceive {};
    		class bountyInfo {};
    		class bountyKill {};
    		class bountyList {};
    		class bountyMenu {};
    		class markers {};
	};
	
	class Archeology
	{
		file ="core\archeology";
		class resetDigSites {};
		class excavateDigSite {};
		class surveyDigSite {};
		class prepDigSites {};
		class hint {};
	};
	
	class TreasureHunting
		{
		file = "core\treasure_hunting";
		class openContainer {};
		class SearchWreck {};
		class wreckTakeItem {};
		class TreasureHuntInit {};
	};
};
