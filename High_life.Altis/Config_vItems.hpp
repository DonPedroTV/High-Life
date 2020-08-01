/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "strzykawka","waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator", "bandages", "morphine" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge","zipties","blindfold", "gpsTracker", "speedbomb" };
    };
	
	class bountyH {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "bountyH";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge","zipties","blindfold", "gpsTracker", "spikeStrip", "speedbomb" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "gpsTracker" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cocaine_processed", "cocaine_unprocessed", "heroin_processed", "heroin_unprocessed", "cannabis", "marijuana", "dop" };
    };
	
	class czrynek {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cocaine_processed", "cocaine_unprocessed", "heroin_processed", "heroin_unprocessed", "cannabis", "marijuana", "dop" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class pawulon {
        name = "STR_Shops_pawulon";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "pawulon" };
    };
	
	class paczek {
        name = "STR_Shops_paczek";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "paczek" };
    };
	
	class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cement" };
    };
	
	class cukier {
        name = "STR_Shops_cukier";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cukier" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "lockpick", "gpsTracker" };
    };
	
	
	class pocisk {
        name = "STR_Shops_pocisk";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "pocisk" };
    };
	
	class butelka {
        name = "STR_Shops_butelka";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "butelka" };
    };
	
	class pet {
        name = "STR_Shops_pet";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "pet" };
    };
	
	class rafa {
        name = "STR_Shops_rafa";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "rafa" };
    };
	
	class bar {
        name = "STR_Shops_bar";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "piwo", "whiskey", "wodka" };
    };
	
	class uran_pret {
        name = "STR_Shops_uran_pret";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "uran_pret" };
    };
	
	class uran_brud {
        name = "STR_Shops_uran_brud";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "uran_brud" };
    };
	
	class poszukiwacz {
        name = "STR_Shops_Poszukiwacz";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "woodencontainer", "smallchest", "mediumchest", "leadbox", "largechest", "hugechest", "silvercoins", "pottery", "stoneknife", "stoneaxe", "goldcoins", "jewellery" };
    };
	
	class antyki {
        name = "STR_Shops_PoszukiwaczCzarny";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "silvercoins", "pottery", "stoneknife", "stoneaxe", "goldcoins", "jewellery" };
    };
	
	class archeologia {
        name = "STR_Shops_Archeologia";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "sitemapnormal", "sitemaprare", "surveyingequipment", "advsurveyingequipment", "shovel", "basictools", "ancientbook", "claypot", "claybowl", "claypipe", "decorativeclaypipe", "decorativeclaybowl", "decorativeclaypot", "stonearrowheads", "bronzering", "bronzestatue", "bronzecoin", "bronzeaxehead", "ironarrowheads", "ironknife", "ironaxehead", "ironspearhead", "silverring", "silverstatue", "silverjewellery", "goldring", "goldstatue", "jewelencrustedsilver", "jewelencrustedgold" };
    };
	
	
	class ymarket {
    name = "STR_Shops_yMarket";
    side = "";
    icense = "";
    level[] = { "", "", -1, "" };
    items[] = {"apple","peach","marijuana","cocaine_processed","heroin_processed","uran_brud","uran_pret", "copper_refined", "diamond_cut","glass","goldbar","oil_processed", "salt_refined","cukier","pocisk","dop","butelka","rafa","paczek","pet","ancientbook", "claypot", "claybowl", "claypipe", "decorativeclaypipe", "decorativeclaybowl", "decorativeclaypot", "stonearrowheads", "bronzering", "bronzestatue", "bronzecoin", "bronzeaxehead", "ironarrowheads", "ironknife", "ironaxehead", "ironspearhead", "silverring", "silverstatue", "silverjewellery", "goldring", "goldstatue", "jewelencrustedsilver", "jewelencrustedgold","woodencontainer", "smallchest", "mediumchest", "leadbox", "largechest", "hugechest", "silvercoins", "pottery", "stoneknife", "stoneaxe", "goldcoins", "jewellery", "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark", "piwo", "whiskey", "wodka", "waterBottle", "rabbit", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "boltcutter", "blastingcharge","zipties","blindfold", "gpsTracker", "speedbomb" };
	};
	
	
	
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 2;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 1700;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 3500;
        sellPrice = 1100;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 3;
        buyPrice = 2000;
        sellPrice = 600;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 14;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 70000;
        sellPrice = 50000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 45000;
        sellPrice = 27500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 7500;
        sellPrice = 3570;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 150000;
        sellPrice = 75000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 300000;
        sellPrice = 150000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 400;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1104;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 2;
        buyPrice = -1;
        sellPrice = 296;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 304;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 3;
        buyPrice = -1;
        sellPrice = 898;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	//Archeologia
	class sitemapnormal {
        variable = "sitemapnormal";
        displayName = "STR_Item_SiteMap";
        weight = 4;
        buyPrice = 20000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\siteMap.paa";
    };
	
	class sitemaprare {
        variable = "sitemaprare";
        displayName = "STR_Item_SiteMapRare";
        weight = 4;
        buyPrice = 30000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\siteMapRare.paa";
    };
	
	class surveyingequipment {
        variable = "surveyingequipment";
        displayName = "STR_Item_SurveyingEquipment";
        weight = 2;
        buyPrice = 10000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\surveyEquipment.paa";
    };
	
	class advsurveyingequipment {
        variable = "advsurveyingequipment";
        displayName = "STR_Item_AdvSurveyingEquipment";
        weight = 2;
        buyPrice = 30000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\advSurveyEquipment.paa";
    };
	
	class shovel {
        variable = "shovel";
        displayName = "STR_Item_Shovel";
        weight = 2;
        buyPrice = 3500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\shovel.paa";
    };
	
	class basictools {
        variable = "basictools";
        displayName = "STR_Item_BasicTools";
        weight = 1;
        buyPrice = 4000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\toolbox.paa";
    };
	
	class ancientbook {
        variable = "ancientbook";
        displayName = "STR_Item_AncientBook";
        weight = 1;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = false;
        edible = -1;
        icon = "icons\ancientbook.paa";
    };
	
	class claypot {
        variable = "claypot";
        displayName = "STR_Item_Claypot";
        weight = 2;
        buyPrice = -1;
        sellPrice = 6000;
        illegal = false;
        edible = -1;
        icon = "icons\claypot.paa";
    };
	
	class claybowl {
        variable = "claybowl";
        displayName = "STR_Item_ClayBowl";
        weight = 2;
        buyPrice = -1;
        sellPrice = 8000;
        illegal = false;
        edible = -1;
        icon = "icons\claybowl.paa";
    };
	
	class claypipe {
        variable = "claypipe";
        displayName = "STR_Item_ClayPipe";
        weight = 1;
        buyPrice = -1;
        sellPrice = 9000;
        illegal = false;
        edible = -1;
        icon = "icons\claypipe.paa";
    };
	
	class decorativeclaypipe {
        variable = "decorativeclaypipe";
        displayName = "STR_Item_DecorativeClayPipe";
        weight = 1;
        buyPrice = -1;
        sellPrice = 11000;
        illegal = false;
        edible = -1;
        icon = "icons\decorativeclaypipe.paa";
    };
	
	class decorativeclaybowl {
        variable = "decorativeclaybowl";
        displayName = "STR_Item_DecorativeClayBowl";
        weight = 2;
        buyPrice = -1;
        sellPrice = 12000;
        illegal = false;
        edible = -1;
        icon = "icons\decorativeclaybowl.paa";
    };
	
	class decorativeclaypot {
        variable = "decorativeclaypot";
        displayName = "STR_Item_DecorativeClaypot";
        weight = 2;
        buyPrice = -1;
        sellPrice = 14000;
        illegal = false;
        edible = -1;
        icon = "icons\decorativeclaypot.paa";
    };
	
	class stonearrowheads {
        variable = "stonearrowheads";
        displayName = "STR_Item_StoneArrowheads";
        weight = 3;
        buyPrice = -1;
        sellPrice = 15000;
        illegal = false;
        edible = -1;
        icon = "icons\stonearrowheads.paa";
    };
	
	class bronzering {
        variable = "bronzering";
        displayName = "STR_Item_BronzeRing";
        weight = 1;
        buyPrice = -1;
        sellPrice = 17000;
        illegal = false;
        edible = -1;
        icon = "icons\bronzering.paa";
    };
	
	class bronzestatue {
        variable = "bronzestatue";
        displayName = "STR_Item_BronzeStatue";
        weight = 3;
        buyPrice = -1;
        sellPrice = 18000;
        illegal = false;
        edible = -1;
        icon = "icons\bronzestatue.paa";
    };
	
	class bronzecoin {
        variable = "bronzecoin";
        displayName = "STR_Item_BronzeCoin";
        weight = 1;
        buyPrice = -1;
        sellPrice = 20000;
        illegal = false;
        edible = -1;
        icon = "icons\bronzecoin.paa";
    };
	
	class bronzeaxehead {
        variable = "bronzeaxehead";
        displayName = "STR_Item_BronzeAxeHead";
        weight = 3;
        buyPrice = -1;
        sellPrice = 21000;
        illegal = false;
        edible = -1;
        icon = "icons\bronzeaxehead.paa";
    };
	
	class ironarrowheads {
        variable = "ironarrowheads";
        displayName = "STR_Item_IronArrowHeads";
        weight = 3;
        buyPrice = -1;
        sellPrice = 23000;
        illegal = false;
        edible = -1;
        icon = "icons\ironarrowheads.paa";
    };
	
	class ironknife {
        variable = "ironknife";
        displayName = "STR_Item_IronKnife";
        weight = 2;
        buyPrice = -1;
        sellPrice = 24000;
        illegal = false;
        edible = -1;
        icon = "icons\ironknife.paa";
    };
	
	class ironaxehead {
        variable = "ironaxehead";
        displayName = "STR_Item_IronAxehead";
        weight = 4;
        buyPrice = -1;
        sellPrice = 26000;
        illegal = false;
        edible = -1;
        icon = "icons\ironaxehead.paa";
    };
	
	class ironspearhead {
        variable = "ironspearhead";
        displayName = "STR_Item_IronSpearHead";
        weight = 3;
        buyPrice = -1;
        sellPrice = 27000;
        illegal = false;
        edible = -1;
        icon = "icons\ironspearhead.paa";
    };
	
	class silverring {
        variable = "silverring";
        displayName = "STR_Item_SilverRing";
        weight = 1;
        buyPrice = -1;
        sellPrice = 29000;
        illegal = false;
        edible = -1;
        icon = "icons\silverring.paa";
    };
	
	class silverstatue {
        variable = "silverstatue";
        displayName = "STR_Item_SilverStatue";
        weight = 3;
        buyPrice = -1;
        sellPrice = 30000;
        illegal = false;
        edible = -1;
        icon = "icons\silverstatue.paa";
    };
	
	class silverjewellery {
        variable = "silverjewellery";
        displayName = "STR_Item_SilverJewellery";
        weight = 2;
        buyPrice = -1;
        sellPrice = 32000;
        illegal = false;
        edible = -1;
        icon = "icons\silverjewellery.paa";
    };
	
	class goldring {
        variable = "goldring";
        displayName = "STR_Item_GoldRing";
        weight = 1;
        buyPrice = -1;
        sellPrice = 33000;
        illegal = false;
        edible = -1;
        icon = "icons\goldring.paa";
    };
	
	class goldstatue {
        variable = "goldstatue";
        displayName = "STR_Item_GoldStatue";
        weight = 4;
        buyPrice = -1;
        sellPrice = 35000;
        illegal = false;
        edible = -1;
        icon = "icons\goldstatue.paa";
    };
	
	class jewelencrustedsilver {
        variable = "jewelencrustedsilver";
        displayName = "STR_Item_JewelEncrustedSilver";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45000;
        illegal = false;
        edible = -1;
        icon = "icons\jewelencrustedsilver.paa";
    };
	
	class jewelencrustedgold {
        variable = "jewelencrustedgold";
        displayName = "STR_Item_JewelEncrustedGold";
        weight = 2;
        buyPrice = -1;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\jewelencrustedgold.paa";
    };
	//Poszukiwacze skarbów
	
	class silvercoins {
        variable = "silvercoins";
        displayName = "STR_Item_SilverCoins";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\silvercoins.paa";
    };
	
	class pottery {
        variable = "pottery";
        displayName = "STR_Item_Pottery";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        icon = "icons\pottery.paa";
    };
	
	class stoneknife {
        variable = "stoneknife";
        displayName = "STR_Item_StoneKnife";
        weight = 2;
        buyPrice = -1;
        sellPrice = 4000;
        illegal = false;
        edible = -1;
        icon = "icons\stoneknife.paa";
    };
	
	class stoneaxe {
        variable = "stoneaxe";
        displayName = "STR_Item_StoneAxe";
        weight = 2;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = false;
        edible = -1;
        icon = "icons\stoneaxe.paa";
    };
	
	class goldcoins {
        variable = "goldcoins";
        displayName = "STR_Item_GoldCoins";
        weight = 2;
        buyPrice = -1;
        sellPrice = 15000;
        illegal = false;
        edible = -1;
        icon = "icons\goldcoins.paa";
    };
	
	class jewellery {
        variable = "jewellery";
        displayName = "STR_Item_Jewellery";
        weight = 2;
        buyPrice = -1;
        sellPrice = 20000;
        illegal = false;
        edible = -1;
        icon = "icons\jewellery.paa";
    };
	//Kufry
	class woodencontainer {
        variable = "woodencontainer";
        displayName = "STR_Item_WoodenContainer";
        weight = 10;
        buyPrice = -1;
        sellPrice = 10000;
        illegal = false;
        edible = -1;
        icon = "icons\drewnianaskrzynia.paa";
    };
	
	class smallchest {
        variable = "smallchest";
        displayName = "STR_Item_SmallChest";
        weight = 11;
        buyPrice = -1;
        sellPrice = 20000;
        illegal = false;
        edible = -1;
        icon = "icons\malykufer.paa";
    };
	
	class mediumchest {
        variable = "mediumchest";
        displayName = "STR_Item_MediumChest";
        weight = 12;
        buyPrice = -1;
        sellPrice = 40000;
        illegal = false;
        edible = -1;
        icon = "icons\kufer.paa";
    };
	
	class leadbox {
        variable = "leadbox";
        displayName = "STR_Item_LeadBox";
        weight = 13;
        buyPrice = -1;
        sellPrice = 70000;
        illegal = false;
        edible = -1;
        icon = "icons\olowianaskrzynia.paa";
    };
	
	class largechest {
        variable = "largechest";
        displayName = "STR_Item_LargeChest";
        weight = 12;
        buyPrice = -1;
        sellPrice = 100000;
        illegal = false;
        edible = -1;
        icon = "icons\duzykufer.paa";
    };
	
	class hugechest {
        variable = "hugechest";
        displayName = "STR_Item_HugeChest";
        weight = 13;
        buyPrice = -1;
        sellPrice = 150000;
        illegal = false;
        edible = -1;
        icon = "icons\wielkikufer.paa";
    };
    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1050;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1350;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 200;
        sellPrice = 100;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 30;
        sellPrice = 15;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 60;
        sellPrice = 30;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 90;
        sellPrice = 60;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 200;
        sellPrice = 120;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = -1;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 260;
        sellPrice = 210;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 500;
        sellPrice = 400;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 592;
        sellPrice = 492;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 400;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 920;
        sellPrice = 720;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 640;
        sellPrice = 530;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 830;
        sellPrice = 630;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 3;
        buyPrice = 6468;
        sellPrice = 6068;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 800;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 170;
        sellPrice = -1;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 270;
        sellPrice = -1;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 320;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 300;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
	
	class zipties {
        variable = "zipties";
        displayName = "STR_Item_ZipTies";
        weight = 3;
        buyPrice = 20000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ziptie.paa";
    };
	
	class blindfold {
        variable = "blindfold";
        displayName = "STR_Item_Blindfold";
        weight = 2;
        buyPrice = 600;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\blindfold.paa";
    };
	
	class trzcina {
        variable = "trzcina";
        displayName = "STR_Item_trzcina";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\trzcina.paa";
    };
	
	class cukier {
        variable = "cukier";
        displayName = "STR_Item_cukier";
        weight = 2;
        buyPrice = -1;
        sellPrice = 550;
        illegal = false;
        edible = -1;
        icon = "icons\cukier.paa";
    };
	
	class proch_np {
        variable = "proch_np";
        displayName = "STR_Item_proch_np";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\proch.paa";
    };
	
	class proch_p {
        variable = "proch_p";
        displayName = "STR_Item_proch_p";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\proch.paa";
    };
	
	class pocisk {
        variable = "pocisk";
        displayName = "STR_Item_pocisk";
        weight = 6;
        buyPrice = -1;
        sellPrice = 4050;
        illegal = false;
        edible = -1;
        icon = "icons\pocisk.paa";
    };
	
	class domestos {
        variable = "domestos";
        displayName = "STR_Item_domestos";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\domestos.paa";
    };
	
	class dop {
        variable = "dop";
        displayName = "STR_Item_dop";
        weight = 6;
        buyPrice = -1;
        sellPrice = 6000;
        illegal = true;
        edible = -1;
        icon = "icons\dop.paa";
    };
	
	class butelka {
        variable = "butelka";
        displayName = "STR_Item_butelka";
        weight = 1;
        buyPrice = -1;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\butelka.paa";
    };
	
	class morphine {
        variable = "morphine";
        displayName = "STR_Item_Morphine";
        weight = 2;
        buyPrice = 300;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\gumijagody.paa";
    };

    class bandages {
        variable = "bandages";
        displayName = "STR_Item_Bandages";
        weight = 2;
        buyPrice = 300;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_bandages.paa";
    };
	
	class gpsTracker {
        variable = "gpsTracker";
        displayName = "STR_Item_gpst";
        weight = 3;
        buyPrice = 80000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_gps.paa";
    };

	class piwo {
        variable = "piwo";
        displayName = "STR_Item_Beer";
        weight = 2;
        buyPrice = 500;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_beerGlass.paa";
    };
	
	class wodka {
        variable = "wodka";
        displayName = "STR_Item_wodka";
        weight = 2;
        buyPrice = 800;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wodka.paa";
    };
	
	class whiskey {
        variable = "whiskey";
        displayName = "STR_Item_whiskey";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_whiskey.paa";
    };
	
	class rafa {
        variable = "rafa";
        displayName = "STR_Item_rafa";
        weight = 8;
        buyPrice = -1;
        sellPrice = 7200;
        illegal = false;
        edible = -1;
        icon = "icons\rafa.paa";
    };
	
	class pszenica {
        variable = "pszenica";
        displayName = "STR_Item_pszenica";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\pszenica.paa";
    };
	
	class pankuronium {
        variable = "pankuronium";
        displayName = "STR_Item_pankuronium";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\pankuronium.paa";
    };
	
	class strzykawka {
        variable = "strzykawka";
        displayName = "STR_Item_strzykawka";
        weight = 1;
        buyPrice = 150;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\strzykawka.paa";
    };
	
	class pawulon {
        variable = "pawulon";
        displayName = "STR_Item_pawulon";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1100;
        illegal = true;
        edible = -1;
        icon = "icons\pawulon.paa";
    };
	
	class paczek {
        variable = "paczek";
        displayName = "STR_Item_paczek";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1100;
        illegal = true;
        edible = -1;
        icon = "icons\ponczek.paa";
    };
	
	class gilzy {
        variable = "gilzy";
        displayName = "STR_Item_gilzy";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\gilzy.paa";
    };
	
	class tyton {
        variable = "tyton";
        displayName = "STR_Item_tyton";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\tyton.paa";
    };
	
	class tyton_p {
        variable = "tyton_p";
        displayName = "STR_Item_tyton_p";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\tyton_p.paa";
    };
	
	class pet {
        variable = "pet";
        displayName = "STR_Item_pet";
        weight = 5;
        buyPrice = -1;
        sellPrice = 4000;
        illegal = false;
        edible = -1;
        icon = "icons\pet.paa";
    };
	
	class uran_niep {
        variable = "uran_niep";
        displayName = "STR_Item_uran_niep";
        weight = 8;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_uran_niep.paa";
    };
	
	class uran_ocz {
        variable = "uran_ocz";
        displayName = "STR_Item_uran_ocz";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\uran1.paa";
    };
	
	class uran_przetw {
        variable = "uran_przetw";
        displayName = "STR_Item_uran_przetw";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\uran2.paa";
    };
	
	class uran_wzb {
        variable = "uran_wzb";
        displayName = "STR_Item_uran_wzb";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\uran4.paa";
    };
	
	class uran_pret {
        variable = "uran_pret";
        displayName = "STR_Item_uran_pret";
        weight = 2;
        buyPrice = -1;
        sellPrice = 4750;
        illegal = false;
        edible = -1;
        icon = "icons\uran_pret.paa";
    };
	
	class uran_brud {
        variable = "uran_brud";
        displayName = "STR_Item_uran_brud";
        weight = 6;
        buyPrice = -1;
        sellPrice = 2800;
        illegal = true;
        edible = -1;
        icon = "icons\uran3.paa";
    };
	
	class speedbomb {
        variable = "speedbomb";
        displayName = "STR_Item_SpeedBomb";
        weight = 6;
        buyPrice = 100000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_speedbomb.paa";
    };
};
