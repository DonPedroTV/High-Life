/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 3900;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 9400;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 16000;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 4000;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 32000;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 8600;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 8000;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 22400;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 18000;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 4600;
    };
	
	class cukier {
        MaterialsReq[] = {{"trzcina",1}};
        MaterialsGive[] = {{"cukier",1}};
        Text = "STR_Process_Cukier";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 9500;
    };
	
	class proch {
        MaterialsReq[] = {{"proch_np",1}};
        MaterialsGive[] = {{"proch_p",1}};
        Text = "STR_Process_proch";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 9500;
    };
	
	class pocisk {
        MaterialsReq[] = {{"proch_p",1},{"copper_refined",2}};
        MaterialsGive[] = {{"pocisk",1}};
        Text = "STR_Process_pocisk";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 9500;
    };
	
	class dop {
        MaterialsReq[] = {{"domestos",1},{"cocaine_processed",2}};
        MaterialsGive[] = {{"dop",1}};
        Text = "STR_Process_dop";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 61000;
    };
	
	class butelka {
        MaterialsReq[] = {{"glass",1}};
        MaterialsGive[] = {{"butelka",1}};
        Text = "STR_Process_butelka";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 12000;
    };
	
	class paczek {
        MaterialsReq[] = {{"pszenica",1}};
        MaterialsGive[] = {{"paczek",1}};
        Text = "STR_Process_paczek";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 30000;
    };
	
	class pawulon {
        MaterialsReq[] = {{"pankuronium",1},{"strzykawka",1}};
        MaterialsGive[] = {{"pawulon",1}};
        Text = "STR_Process_pawulon";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 30000;
    };
	
	class pet {
        MaterialsReq[] = {{"tyton_p",1},{"gilzy",1}};
        MaterialsGive[] = {{"pet",1}};
        Text = "STR_Process_pet";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 30000;
    };
	
	class tyton {
        MaterialsReq[] = {{"tyton",1}};
        MaterialsGive[] = {{"tyton_p",1}};
        Text = "STR_Process_tyton";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 30000;
    };
	
	class uran_ocz {
        MaterialsReq[] = {{"uran_niep",1}};
        MaterialsGive[] = {{"uran_ocz",1}};
        Text = "STR_Process_uran_niep";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 50000;
    };
	
	class uran_przetw {
        MaterialsReq[] = {{"uran_ocz",1}};
        MaterialsGive[] = {{"uran_przetw",1}};
        Text = "STR_Process_uran_ocz";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 50000;
    };
	
	class uran_wzb {
        MaterialsReq[] = {{"uran_przetw",1}};
        MaterialsGive[] = {{"uran_wzb",1}};
        Text = "STR_Process_uran_przetw";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 50000;
    };
	
	class uran_pret {
        MaterialsReq[] = {{"uran_wzb",1}};
        MaterialsGive[] = {{"uran_pret",1}};
        Text = "STR_Process_uran_wzb";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 50000;
    };
	class uran_brud {
        MaterialsReq[] = {{"uran_niep",1}};
        MaterialsGive[] = {{"uran_brud",1}};
        Text = "STR_Process_uran_brud";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 100000;
    };
};
