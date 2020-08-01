waitUntil {!isNull player && player isEqualTo player};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["credits","Credits"];
//player createDiarySubject ["changelog","Change Log"];
//player createDiarySubject ["serverrules","General Rules"];
//player createDiarySubject ["policerules","Police Procedures/Rules"];
//player createDiarySubject ["safezones","Safe Zones (No Killing)"];
//player createDiarySubject ["civrules","Civilian Rules"];
//player createDiarySubject ["illegalitems","Illegal Activity"];
//player createDiarySubject ["gangrules","Gang Rules"];
player createDiarySubject ["regulamin","Regulamin"];
player createDiarySubject ["ekonomia","Ekonomia"];
player createDiarySubject ["multiprocesy","Multiprocesy"];
player createDiarySubject ["controls","Klawiszologia"];
/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/

    player createDiaryRecord ["credits",
        [
            "ArmaLife",
                "
ArmaLife is a GitHub project which aims to update and keep adding new features to the original 'Altis Life RPG' by Tonic.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord["changelog",
        [
            "Altis Life Changelog",
                "
The official changelog can be found in ArmaLife github. https://git.io/vVkhe<br/><br/>
v4.4 release 3!<br/>
By: danielstuart14<br/>
Date: 31. May 2016<br/><br/>
v4.4 release 2!<br/>
By: danielstuart14<br/>
Date: 20. March 2016<br/><br/>
v4.4 release 1!<br/>
By: danielstuart14<br/>
Date: 12. February 2016<br/><br/>
v4.3 release 4!<br/>
By: danielstuart14<br/>
Date: 31. January 2016<br/><br/>
v4.3 release 3!<br/>
By: danielstuart14<br/>
Date: Not released<br/><br/>
v4.3 release 2!<br/>
By: danielstuart14<br/>
Date: 22. January 2016<br/><br/>
v4.3 release 1!<br/>
By: danielstuart14<br/>
Date: 19. January 2016<br/><br/>
                "
        ]
    ];


    player createDiaryRecord ["regulamin",
        [
            "Ogolne",
                "
Zabrania się RDM'owania, VDM'owania, Combat Storing'u, Trolling'u, Battlelog'owania, zachowań FailRP, Metagaming'u oraz Powergaming'u.<br/>
Każdy obywatel powinien szanować życie swoje jak i innych. W przypadku, kiedy ktoś celuje do ciebie z broni i nie masz żadnych szans na ucieczkę, bądź podjęcie walki to poddajesz się. <br/>
Zabrania się powracania na akcję.<br/>

                "
        ]
    ];


    player createDiaryRecord ["regulamin",
        [
            "Porwania",
                "
Zakaz  porywania w godzinach 22:00 - 8:00 - czasu realnego. <br/>
1 gang może zrobić tylko 1 porwanie na restart.<br/>
Zakładnikiem nie może być członek gangu.<br/>
Maksymalny okup za cywila wynosi 500.000$.<br/>
Porwanie cywila można wykonać od 4 policjantów ONLINE.<br/>
Maksymalny okup za policjanta wynosi 700.000$.<br/>
Porwanie policjanta można wykonać od 6 policjantów ONLINE.<br/>
Porwanie musi zostać rozpoczęte minimum 45 minut przed restartem.<<br/>


                "
        ]
    ];


    player createDiaryRecord ["regulamin",
        [
            "Bank",
                "
Zakaz napadania na bank oraz porywania w godzinach 23:00 - 8:00 (Wyjątek stanowi piątek i sobota gdzie ta zasada wypada od 24:00 do 6:00) <br/>
Napad na bank można wykonać od 6 policjantów ONLINE. <br/>
Porwanie musi zostać rozpoczęte minimum 60 minut przed restartem.<br/>
Napad na stację: <br/>
Napad można zacząć od 3 policjant ONLINE.<br/>
Na wyspie nie można rabować w tym samym czasie więcej niż 2 stacji.<br/>


                "
        ]
    ];


    player createDiaryRecord ["regulamin",
        [
            "Strefy",
                "
1. W zielonych strefach zakazane jest strzelanie, napadania, ogłuszanie, rabowanie, kradzież oraz zabijanie.<br/>
2. W zielonej kratkowanej można napadać lecz tylko poprzez nawiązanie interakcji w sposób głosowy lub poprzez ogłuszenie.<br/>
3. Czerwona kratkowana obejmuje więzienie i strefy niekontrolowane. Jeżeli nikt nie przejął strefy niekontrolowanej to działa ona tak jak w kwestii wiezienia, czyli jest zakaz kampienia w obrębie 500m i zakaz zabijania bez interakcji do momentu jej przejęcia. Jeżeli ktoś ją przejmie to cały teren przyjmuje zasady czerwonej strefy.<br/>
4. Na obszarze czerwonej strefy można zabijać bez interakcji a także wtrącać się na, akcje trwające na niej.<br/>
5. Na terenie niebieskiej strefy toczy się akcja policji. Każda osoba, która się tam znajdzie powinna założyć ręce na głowę, jeżeli nie chce się stać celem policji.<br/>
6. Niebieska kratkowana strefa działa tak samo jak zielona strefa. Są nią objęte posterunki policji i punkty policyjne.(na punkt policyjny może zostać przeniesiona akcja)<br/>
7. Na strefie pomarańczowej obowiązuje KATEGORYCZNY zakaz napadania.<br/>
8. Zakaz napadania obok zielonej strefy, a także kampienie na ludzi wyjeżdżających z niej.<br/>


                "
        ]
    ];

player createDiaryRecord ["regulamin",
        [
            "Wazne",
                "
Całość regulaminu znajduję się na naszym forum.<br/>
Przeczytaj go, aby poznac wszystkie zasady panujace na tym serwerze.<br/>

                "
        ]
    ];


    player createDiaryRecord ["ekonomia",
        [
            "Licencje",
                "
Licencja nurka 2k<br/>
Prawo jazdy kat.b 10k<br/>
Patent motorowodny 30k<br/>
licencja pilota 250k<br/>
Prawo jazdy kat c 60k<br/>
Zarządca nieruchomości 450k<br/>
Licencja broń lvl 1 50k<br/>
Wytwórca cementu 60k <br/>
Wytwórca pocisków 78k  <br/>
Szlifierz diamentów 130k  <br/> 
Wytwórca butelek 30k  <br/>
Produkcja cukru trzcinowego 140k <br/>
Przerabianie tytoniu 50k + produkcja papierosów 50k <br/>
Wytapianie wolframu 40k<br/>
Produkcja brudnego uranu 225k<br/> 
Oczyszczanie kokainy 225k <br/>
Suszenie konopi 140k  <br/>
Wytwarzanie dopalaczy 435k <br/>
Oczyszczanie uranu 100k <br/>
Produkcja prętów paliwowych 125k <br/>
Wzbogacanie uranu 100k  <br/>
Wytwarzanie heroiny 280k<br/>
Wytwarzanie pączków 140k<br/>
Wytwarzanie soli 75k <br/>

                "
        ]
    ];


	player createDiaryRecord ["controls",
		[
			"Klawiszologia",
				"
				Y: Menu Gracza<br/>
				U: Otwieranie/zamykanie pojazdów<br/>
				F: Syreny (Policja|Medyk)<br/>
				T: Bagażnik<br/>
				O: Otwieranie szlabanów (Policja|Medyk)<br/>
                K: Konsola EMP (Policja)<br/>
				End: Strefy (Policja)<br/>
                Delete: Barierki (Policja|Medyk)<br/>
				TAB: Poddanie się<br/>
				5: Lista Poszukiwanych<br/>
                7: Lista Poszukiwanych (Łowcy Głow)<br/>
				Lewy Shift + P: Zatyczki do uszu<br/>
				Lewy Shift + R: Skucie<br/>
				Lewy Shift + G: Powalenie<br/>
				Lewy Windows: Zbieranie/Interakcje<br/>
				Lewy Windows + T: Podniesienie pieniędzy/itemów z ziemi<br/>
				Lewy Shift + L: Światła (Policja|Medyk)<br/>
				Lewy Shift + H: Schowanie broni<br/>
				Lewy Ctrl + H: Wyciągniecie broni<br/>
				Lewy Ctrl + L: Radar w pojeździe policyjnym<br/>
				Lewy Ctrl + N: Nawigacja<br/>
				Lewy Alt + T: Taxi<br/>
				Lewy Ctrl + T: Drzewko umiejetnosci<br/>
                F1, F2, F3: Gesty<br/>
				"
		]
	];

	player createDiaryRecord ["multiprocesy",
		[
			"Multiprocesy",
				"
				1.Pociski | Magazyn prochu => Produkcja prochu => Produkcja amunicji (1 proch przetworzony + 2 sztabki wolframu) => Skup militarny<br/>
				2.Butelki | Wydobycie piasku => Produkcja szkła => Produckja butelek => Skup butelek <br/>
				3.Dopalacze | 2 sztuki kokainy przetworzonej + 1 domestos (Zbiorowisko toksycznych odpadow) = 1 dopalacz <br/>
                4.Papierosy | pole tytoniu => przetwarzanie tytoniu[tytoń przetworzony] + magazyn z gilzami[gilzy] => wytwarzanie papierosów => sprzedarz <br/>
                5.Pręty paliwowe | Wydobycie => Oczyszczanie => Przetwarzanie => Wzbogacanie => Produkcja prętów => Skup prętów <br/>
                6.Brudny uran | Wydobycie => Produkcja brudnego uranu => Skup brudnego uranu <br/>				"
		]
	];