#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct element 
{
	
    char name[20]; 
    char symbol[4];
    int atomic_number;
    float atomic_weight;
    char electronic_configuration[15];
    char history[500];
    float melting_point;
    float boiling_point;
    float ionic_radius;
    int isotopes;
    float electronegativity;
    char color[20];
    int group;
    int period;
    char conductivity[20];
    char luster[20];
    char phase[7];
    float density;
    char uses[2700];
    char image_path[150];

};

struct element element_searcher(char element_name[20],char element_symbol[4],int atomic_number,float atomic_weight)
{
	struct element atom[118];

    //for data department you can start from here don,t change above code

    strcpy(atom[0].name,"HYDROGEN");	
    strcpy(atom[0].symbol,"H");
    atom[0].atomic_number=1;
    atom[0].atomic_weight=1.008;
    strcpy(atom[0].electronic_configuration,"1s1");
    strcpy(atom[0].history,"In the early 1500s the alchemist Paracelsus noted that the bubbles given off when iron filings were added to sulfuric acid were flammable. In 1671 Robert Boyle made the same observation. Neither followed up their discovery of hydrogen, and so Henry Cavendish gets the credit. In 1766 he collected the bubbles and showed that they were different from other gases. He later showed that when hydrogen burns it forms water, thereby ending the belief that water was an element. The gas was given its name hydro-gen, meaning water-former, by Antoine Lavoisier.In 1931, Harold Urey and his colleagues at Columbia University in the US detected a second, rarer, form of hydrogen. This has twice the mass of normal hydrogen, and they named it deuterium.");
    atom[0].melting_point = 13.99;
    atom[0].boiling_point = 20.271;
    atom[0].ionic_radius = 0.012;
    atom[0].isotopes = 7;
    atom[0].electronegativity = 2.20;
    strcpy(atom[0].color,"Colourless");
    atom[0].group = 1;
    atom[0].period = 1;
    strcpy(atom[0].conductivity,"Thermal conductivity");
    strcpy(atom[0].luster,"No luster");
    strcpy(atom[0].phase,"Gas");
    atom[0].density = 0.00523;
    strcpy(atom[0].uses,"Hydrogen also has many other uses. In the chemical industry it is used to make ammonia for agricultural fertiliser (the Haber process) and cyclohexane and methanol, which are intermediates in the production of plastics and pharmaceuticals. It is also used to remove sulfur from fuels during the oil-refining process. Large quantities of hydrogen are used to hydrogenate oils to form fats, for example to make margarine. Hydrogen is an essential element for life. It is present in water and in almost all the molecules in living things. However, hydrogen itself does not play a particularly active role. It remains bonded to carbon and oxygen atoms, while the chemistry of life takes place at the more active sites involving, for example, oxygen, nitrogen and phosphorus. Hydrogen is easily the most abundant element in the universe. It is found in the sun and most of the stars, and the planet Jupiter is composed mostly of hydrogen.");
    strcpy(atom[0].image_path,"");


    strcpy(atom[1].name,"HELIUM");	
    strcpy(atom[1].symbol,"He");
    atom[1].atomic_number=2;
    atom[1].atomic_weight=4.00;
    strcpy(atom[1].electronic_configuration,"1s2");
    strcpy(atom[1].history,"The first evidence of helium was obtained on August 18th, 1868 by French astronomer Jules Janssen. While in Guntur, India, Janssen observed a solar eclipse through a prism, whereupon he noticed a bright yellow spectral line (at 587.49 nanometers) emanating from the chromosphere of the Sun.");
    atom[1].melting_point = 0.95;
    atom[1].boiling_point = 4.22;
    atom[1].ionic_radius =93;
    atom[1].isotopes = 8;
    atom[1].electronegativity = 0;
    strcpy(atom[1].color,"Colorless");
    atom[1].group = 18;
    atom[1].period = 1;
    strcpy(atom[1].conductivity,"high thermal conductivity");
    strcpy(atom[1].luster,"No Luster");
    strcpy(atom[1].phase,"Gas");
    atom[1].density = 0.00017;
    strcpy(atom[1].uses,"Helium is used as a cooling medium for the Large Hadron Collider (LHC), and the superconducting magnets in MRI scanners and NMR spectrometers. It is also used to keep satellite instruments cool and was used to cool the liquid oxygen and hydrogen that powered the Apollo space vehicles. Helium-neon gas lasers are used to scan barcodes in supermarket checkouts. A new use for helium is a helium-ion microscope that gives better image resolution than a scanning electron microscope. After hydrogen, helium is the second most abundant element in the universe. It is present in all stars. It was, and is still being, formed from alpha-particle decay of radioactive elements in the Earth. Some of the helium formed escapes into the atmosphere, which contains about 5 parts per million by volume. This is a dynamic balance, with the low-density helium continually escaping to outer space.");
    strcpy(atom[1].image_path,"");

    strcpy(atom[2].name,"LITHIUM");
    strcpy(atom[2].symbol,"Li");
    atom[2].atomic_number=3;
    atom[2].atomic_weight=6.94;
    strcpy(atom[2].electronic_configuration,"[He] 2s1");
    strcpy(atom[2].history,"The first lithium mineral petalite, LiAlSi4O10, was discovered on the Swedish island of Utö by the Brazilian, Jozé Bonifácio de Andralda e Silva in the 1790s. It was observed to give an intense crimson flame when thrown onto a fire. In 1817, Johan August Arfvedson of Stockholm analysed it and deduced it contained a previously unknown metal, which he called lithium. He realised this was a new alkali metal and a lighter version of sodium. However, unlike sodium he was not able to separate it by electrolysis. In 1821 William Brande obtained a tiny amount this way but not enough on which to make measurements. It was not until 1855 that the German chemist Robert Bunsen and the British chemist Augustus Matthiessen obtained it in bulk by the electrolysis of molten lithium chloride.");
    atom[2].melting_point = 453.650;
    atom[2].boiling_point = 1615;
    atom[2].ionic_radius = 0.76;
    atom[2].isotopes = 21;
    atom[2].electronegativity = 0.98;
    strcpy(atom[2].color,"silvery white");
    atom[2].group = 1;
    atom[2].period = 2;
    strcpy(atom[2].conductivity,"Electrical conductivity");
    strcpy(atom[2].luster,"Metallic");
    strcpy(atom[2].phase,"Solid");
    atom[2].density = 0.534;
    strcpy(atom[2].uses,"The most important use of lithium is in rechargeable batteries for mobile phones, laptops, digital cameras and electric vehicles. Lithium is also used in some non-rechargeable batteries for things like heart pacemakers, toys and clocks.Lithium metal is made into alloys with aluminium and magnesium, improving their strength and making them lighter. A magnesium-lithium alloy is used for armour plating. Aluminium-lithium alloys are used in aircraft, bicycle frames and high-speed trains.Lithium oxide is used in special glasses and glass ceramics. Lithium chloride is one of the most hygroscopic materials known, and is used in air conditioning and industrial drying systems (as is lithium bromide). Lithium stearate is used as an all-purpose and high-temperature lubricant. Lithium carbonate is used in drugs to treat manic depression, although its action on the brain is still not fully understood. Lithium hydride is used as a means of storing hydrogen for use as a fuel.");
    strcpy(atom[2].image_path,"");



    strcpy(atom[3].name,"BERYLLIUM");	
    strcpy(atom[3].symbol,"Be");	
    atom[3].atomic_number=4;	
    atom[3].atomic_weight=9.01;
    strcpy(atom[3].electronic_configuration,"[He] 2s2");
    strcpy(atom[3].history,"The gemstones beryl and emerald are both forms of beryllium aluminium silicate, Be3Al2(SiO3)6. The French mineralogist Abbé René-Just Haüy thought they might harbour a new element, and he asked Nicholas Louis Vauquelin, to analyse them and he realised they harboured a new metal and he investigated it. In February 1798 Vauquelin announced his discovery at the French Academy and named the element glaucinium (Greek glykys = sweet) because its compounds tasted sweet. Others preferred the name beryllium, based on the gemstone, and this is now the official name.Beryllium metal was isolated in 1828 by Friedrich Wöhler at Berlin and independently by Antoine-Alexandere-Brutus Bussy at Paris, both of whom extracted it from beryllium chloride (BeCl2) by reacting this with potassium.");
    atom[3].melting_point = 1560;
    atom[3].boiling_point = 2741;
    atom[3].ionic_radius = 0.45;
    atom[3].isotopes = 18;
    atom[3].electronegativity = 1.57;
    strcpy(atom[3].color,"Silvery-white");
    atom[3].group = 2;
    atom[3].period = 2;
    strcpy(atom[3].conductivity,"Electrical conductivity");
    strcpy(atom[3].luster,"Metallic");
    strcpy(atom[3].phase,"Solid");
    atom[3].density = 1.85;
    strcpy(atom[3].uses,"Beryllium is used in alloys with copper or nickel to make gyroscopes, springs, electrical contacts, spot-welding electrodes and non-sparking tools. Mixing beryllium with these metals increases their electrical and thermal conductivity.Other beryllium alloys are used as structural materials for high-speed aircraft, missiles, spacecraft and communication satellites.Beryllium is relatively transparent to X-rays so ultra-thin beryllium foil is finding use in X-ray lithography. Beryllium is also used in nuclear reactors as a reflector or moderator of neutrons.The oxide has a very high melting point making it useful in nuclear work as well as having ceramic applications.Beryllium and its compounds are toxic and carcinogenic. If beryllium dust or fumes are inhaled, it can lead to an incurable inflammation of the lungs called berylliosis.");
    strcpy(atom[3].image_path,"");



    strcpy(atom[4].name,"BORON");	
    strcpy(atom[4].symbol,"B");
    atom[4].atomic_number=5;
    atom[4].atomic_weight=10.81;
    strcpy(atom[4].electronic_configuration,"[He] 2s22p1");
    strcpy(atom[4].history,"For centuries the only source of borax, Na2B2O5(OH)4, was the crystallized deposits of Lake Yamdok Cho, in Tibet. It was used as a flux used by goldsmiths.In 1808, Louis-Josef Gay-Lussac and Louis-Jacques Thénard working in Paris, and Sir Humphry Davy in London, independently extracted boron by heating borax with potassium metal. In fact, neither had produced the pure element which is almost impossible to obtain. A purer type of boron was isolated in 1892 by Henri Moissan. Eventually, E. Weintraub in the USA produced totally pure boron by sparking a mixture of boron chloride, BCl3 vapour, and hydrogen. The material so obtained boron was found to have very different properties to those previously reported.");
    atom[4].melting_point = 2350;
    atom[4].boiling_point = 4273;
    atom[4].ionic_radius = 0.23;
    atom[4].isotopes = 25;
    atom[4].electronegativity = 2.04;
    strcpy(atom[4].color,"Dark Silver");
    atom[4].group = 13;
    atom[4].period = 2;
    strcpy(atom[4].conductivity,"Thermal Conductivity");
    strcpy(atom[4].luster,"Metallic");
    strcpy(atom[4].phase,"Solid");
    atom[4].density = 2.34;
    strcpy(atom[4].uses,"Amorphous boron is used as a rocket fuel igniter and in pyrotechnic flares. It gives the flares a distinctive green colour.The most important compounds of boron are boric (or boracic) acid, borax (sodium borate) and boric oxide. These can be found in eye drops, mild antiseptics, washing powders and tile glazes. Borax used to be used to make bleach and as a food preservative.Boric oxide is also commonly used in the manufacture of borosilicate glass (Pyrex). It makes the glass tough and heat resistant. Fibreglass textiles and insulation are made from borosilcate glass.Boron is essential for the cell walls of plants. It is not considered poisonous to animals, but in higher doses it can upset the body’s metabolism. We take in about 2 milligrams of boron each day from our food, and about 60 grams in a lifetime. Some boron compounds are being studied as a possible treatment for brain tumours.");
    strcpy(atom[4].image_path,"");


    strcpy(atom[5].name,"CARBON");	
    strcpy(atom[5].symbol,"C");	
    atom[5].atomic_number=6;	
    atom[5].atomic_weight=12.01;
    strcpy(atom[5].electronic_configuration,"[He] 2s2 2p2");
    strcpy(atom[5].history,"The name carbon has been derived from the word carbo (Latin for coal and charcoal). Carbon was discovered as a novel element by 1722 by Antoine Ferchault de Réaumur, who proposed that this novel element can be used to transform iron into steel.");
    atom[5].melting_point = 40000;
    atom[5].boiling_point = 4300;
    atom[5].ionic_radius = 0.16;
    atom[5].isotopes = 15;
    atom[5].electronegativity = 2.55;
    strcpy(atom[5].color,"Gray Graphite");
    atom[5].group = 14;
    atom[5].period = 2;
    strcpy(atom[5].conductivity,"Poor conductor of electricity");
    strcpy(atom[5].luster,"Shiny");
    strcpy(atom[5].phase,"Solid");
    atom[5].density = 2.267;
    strcpy(atom[5].uses,"Carbon is unique among the elements in its ability to form strongly bonded chains, sealed off by hydrogen atoms. These hydrocarbons, extracted naturally as fossil fuels (coal, oil and natural gas), are mostly used as fuels. A small but important fraction is used as a feedstock for the petrochemical industries producing polymers, fibres, paints, solvents and plastics etc.Impure carbon in the form of charcoal (from wood) and coke (from coal) is used in metal smelting. It is particularly important in the iron and steel industries.Carbon is essential to life. This is because it is able to form a huge variety of chains of different lengths. It was once thought that the carbon-based molecules of life could only be obtained from living things. They were thought to contain a ‘spark of life’. However, in 1828, urea was synthesised from inorganic reagents and the branches of organic and inorganic chemistry were united.Industrial diamonds are used for cutting rocks and drilling. Diamond films are used to protect surfaces such as razor blades.");
    strcpy(atom[5].image_path,"");



    strcpy(atom[6].name,"NITROGEN");	
    strcpy(atom[6].symbol,"N");
    atom[6].atomic_number=7;
    atom[6].atomic_weight=14.00;
    strcpy(atom[6].electronic_configuration,"[He] 2s22p3");
    strcpy(atom[6].history,"Nitrogen in the form of ammonium chloride, NH4Cl, was known to the alchemists as sal ammonia. It was manufactured in Egypt by heating a mixture of dung, salt and urine. Nitrogen gas itself was obtained in the 1760s by both Henry Cavendish and Joseph Priestley and they did this by removing the oxygen from air. They noted it extinguished a lighted candle and that a mouse breathing it would soon die. Neither man deduced that it was an element. The first person to suggest this was a young student Daniel Rutherford in his doctorate thesis of September 1772 at Edinburgh, Scotland.");
    atom[6].melting_point = 63.2;
    atom[6].boiling_point = 77.35;
    atom[6].ionic_radius = 1.71;
    atom[6].isotopes = 24;
    atom[6].electronegativity = 3.04;
    strcpy(atom[6].color,"Colourless");
    atom[6].group = 15;
    atom[6].period = 2;
    strcpy(atom[6].conductivity,"Electrical Conductivity");
    strcpy(atom[6].luster,"No luster");
    strcpy(atom[6].phase,"Gas");
    atom[6].density = 0.00114;
    strcpy(atom[6].uses,"Nitrogen is important to the chemical industry. It is used to make fertilisers, nitric acid, nylon, dyes and explosives. To make these products, nitrogen must first be reacted with hydrogen to produce ammonia. This is done by the Haber process. 150 million tonnes of ammonia are produced in this way every year.Nitrogen gas is also used to provide an unreactive atmosphere. It is used in this way to preserve foods, and in the electronics industry during the production of transistors and diodes. Large quantities of nitrogen are used in annealing stainless steel and other steel mill products. Annealing is a heat treatment that makes steel easier to work.Liquid nitrogen is often used as a refrigerant. It is used for storing sperm, eggs and other cells for medical research and reproductive technology. It is also used to rapidly freeze foods, helping them to maintain moisture, colour, flavour and texture.");
    strcpy(atom[6].image_path,"");



    strcpy(atom[7].name,"OXYGEN");	
    strcpy(atom[7].symbol,"O");
    atom[7].atomic_number=8;
    atom[7].atomic_weight=15.59;
    strcpy(atom[7].electronic_configuration,"[He] 2s22p4");
    strcpy(atom[7].history,"In 1608, Cornelius Drebbel had shown that heating saltpetre (potassium nitrate, KNO3) released a gas. This was oxygen although it was not identified as such.The credit for discovering oxygen is now shared by three chemists: an Englishman, a Swede, and a Frenchman. Joseph Priestley was the first to publish an account of oxygen, having made it in 1774 by focussing sunlight on to mercuric oxide (HgO), and collecting the gas which came off. He noted that a candle burned more brightly in it and that it made breathing easier. Unknown to Priestly, Carl Wilhelm Scheele had produced oxygen in June 1771. He had written an account of his discovery but it was not published until 1777. Antoine Lavoisier also claimed to have discovered oxygen, and he proposed that the new gas be called oxy-gène, meaning acid-forming, because he thought it was the basis of all acids.");
    atom[7].melting_point = 54.36;
    atom[7].boiling_point = 90.188;
    atom[7].ionic_radius = 0.3;
    atom[7].isotopes = 3;
    atom[7].electronegativity = 3.44;
    strcpy(atom[7].color,"Colourless");
    atom[7].group = 16;
    atom[7].period = 2;
    strcpy(atom[7].conductivity,"Thermal conductivity");
    strcpy(atom[7].luster,"No luster");
    strcpy(atom[7].phase,"Gas");
    atom[7].density = 0.0013;
    strcpy(atom[7].uses,"The greatest commercial use of oxygen gas is in the steel industry. Large quantities are also used in the manufacture of a wide range of chemicals including nitric acid and hydrogen peroxide. It is also used to make epoxyethane (ethylene oxide), used as antifreeze and to make polyester, and chloroethene, the precursor to PVC.Oxygen first appeared in the Earth’s atmosphere around 2 billion years ago, accumulating from the photosynthesis of blue-green algae. Photosynthesis uses energy from the sun to split water into oxygen and hydrogen. The oxygen passes into the atmosphere and the hydrogen joins with carbon dioxide to produce biomass.Oxygen gas is used for oxy-acetylene welding and cutting of metals. A growing use is in the treatment of sewage and of effluent from industry.");
    strcpy(atom[7].image_path,"");


    strcpy(atom[8].name,"FLUORINE");	
    strcpy(atom[8].symbol,"F");
    atom[8].atomic_number=9;
    atom[8].atomic_weight=18.99;
    strcpy(atom[8].electronic_configuration,"[He] 2s22p5");
    strcpy(atom[8].history,"The early chemists were aware that metal fluorides contained an unidentified element similar to chlorine, but they could not isolate it. (The French scientist, André Ampère coined the name fluorine in 1812.) Even the great Humphry Davy was unable to produce the element, and he became ill by trying to isolate it from hydrofluoric acid.The British chemist George Gore in 1869 passed an electric current through liquid HF but found that the gas which was liberated reacted violently with his apparatus. He thought it was fluorine but was unable to collect it and prove it. Then in 1886 the French chemist Henri Moissan obtained it by the electrolysis of potassium bifluoride (KHF2) dissolved in liquid HF.");
    atom[8].melting_point = 53.48;
    atom[8].boiling_point = 85.04;
    atom[8].ionic_radius = 1.33;
    atom[8].isotopes = 18;
    atom[8].electronegativity = 3.98;
    strcpy(atom[8].color,"Pale yellow-green");
    atom[8].group = 17;
    atom[8].period = 2;
    strcpy(atom[8].conductivity,"Electrical Conductivity");
    strcpy(atom[8].luster,"No luster");
    strcpy(atom[8].phase,"Gas");
    atom[8].density = 0.0015;
    strcpy(atom[8].uses,"There was no commercial production of fluorine until the Second World War, when the development of the atom bomb, and other nuclear energy projects, made it necessary to produce large quantities. Before this, fluorine salts, known as fluorides, were for a long time used in welding and for frosting glass.The element is used to make uranium hexafluoride, needed by the nuclear power industry to separate uranium isotopes. It is also used to make sulfur hexafluoride, the insulating gas for high-power electricity transformers.Fluoride is an essential ion for animals, strengthening teeth and bones. It is added to drinking water in some areas. The presence of fluorides below 2 parts per million in drinking water is believed to prevent dental cavities. However, above this concentration it may cause children’s tooth enamel to become mottled. Fluoride is also added to toothpaste.Hydrofluoric acid is used for etching the glass of light bulbs and in similar applications.");
    strcpy(atom[8].image_path,"");

    strcpy(atom[9].name,"NEON");        
    strcpy(atom[9].symbol,"Ne");        
    atom[9].atomic_number=10;        
    atom[9].atomic_weight=20.18;
    strcpy(atom[9].electronic_configuration,"[He] 2s22p6");
    strcpy(atom[9].history,"In 1898, William Ramsay and Morris Travers at University College London isolated krypton gas by evaporating liquid argon. They had been expecting to find a lighter gas which would fit a niche above argon in the periodic table of the elements. They then repeated their experiment, this time allowing solid argon to evaporate slowly under reduced pressure and collected the gas which came off first. This time they were successful, and when they put a sample of the new gas into their atomic spectrometer it startled them by the brilliant red glow that we now associate with neon signs. Ramsay named the new gas neon, basing it on neos, the Greek word for new.");
    atom[9].melting_point = 24.56;
    atom[9].boiling_point = 27.104;
    atom[9].ionic_radius = 0.15;
    atom[9].isotopes = 26;
    atom[9].electronegativity = 0;
    strcpy(atom[9].color,"Colourless");
    atom[9].group = 18;
    atom[9].period = 2;
    strcpy(atom[9].conductivity,"Thermal Conductivity");
    strcpy(atom[9].luster,"No luster");
    strcpy(atom[9].phase,"Gas");
    atom[9].density = 0.0008;
    strcpy(atom[9].uses,"The largest use of neon is in making the ubiquitous ‘neon signs’ for advertising. In a vacuum discharge tube neon glows a reddish orange colour. Only the red signs actually contain pure neon. Others contain different gases to give different colours.Liquid neon is an important cryogenic refrigerant. It has over 40 times more refrigerating capacity per unit volume than liquid helium, and more than 3 times that of liquid hydrogen.Neon has no known biological role. It is non-toxic.Neon is the fifth most abundant element in the universe. However, it is present in the Earth’s atmosphere at a concentration of just 18 parts per million. It is extracted by fractional distillation of liquid air. This gives a fraction that contains both helium and neon. The helium is removed from the mixture with activated charcoal.");
    strcpy(atom[9].image_path,"");  


    strcpy(atom[10].name,"SODIUM");
    strcpy(atom[10].symbol,"Na");        
    atom[10].atomic_number=11;        
    atom[10].atomic_weight=22.99;
    strcpy(atom[10].electronic_configuration,"[Ne] 3s1");
    strcpy(atom[10].history,"Salt (sodium chloride, NaCl) and soda (sodium carbonate, Na2CO3) had been known since prehistoric times, the former used as a flavouring and preservative, and the latter for glass manufacture. Salt came from seawater, while soda came from the Natron Valley in Egypt or from the ash of certain plants. Their composition was debated by early chemists and the solution finally came from the Royal Institution in London in October 1807 where Humphry Davy exposed caustic soda (sodium hydroxide, NaOH) to an electric current and obtained globules of sodium metal, just as he had previously done for potassium, although he needed to use a stronger current.The following year, Louis-Josef Gay-Lussac and Louis-Jacques Thénard obtained sodium by heating to red heat a mixture of caustic soda and iron filings.");
    atom[10].melting_point =  370.94;
    atom[10].boiling_point = 1156.0;
    atom[10].ionic_radius = 0.3;
    atom[10].isotopes = 27;
    atom[10].electronegativity = 0.93;
    strcpy(atom[10].color,"Silvery white");
    atom[10].group = 1;
    atom[10].period = 3;
    strcpy(atom[10].conductivity,"Electrical Conductivity");
    strcpy(atom[10].luster,"Shiny");
    strcpy(atom[10].phase,"Solid");
    atom[10].density = 0.97;
    strcpy(atom[10].uses,"Sodium is essential to all living things, and humans have known this since prehistoric times. Our bodies contain about 100 grams, but we are constantly losing sodium in different ways so we need to replace it. We can get all the sodium we need from our food, without adding any extra. The average person eats about 10 grams of salt a day, but all we really need is about 3 grams. Any extra sodium may contribute to high blood pressure. Sodium is important for many different functions of the human body. For example, it helps cells to transmit nerve signals and regulate water levels in tissues and blood.Sodium is the sixth most common element on Earth, and makes up 2.6% of the Earth’s crust. The most common compound is sodium chloride. This very soluble salt has been leached into the oceans over the lifetime of the planet, but many salt beds or ‘lakes’ are found where ancient seas have evaporated. It is also found in many minerals including cryolite, zeolite and sodalite.");
    strcpy(atom[10].image_path,"");
   

    strcpy(atom[11].name,"MAGNESIUM");        
    strcpy(atom[11].symbol,"Mg");        
    atom[11].atomic_number=12;        
    atom[11].atomic_weight=24.30;
    strcpy(atom[11].electronic_configuration,"[Ne] 3s2");
    strcpy(atom[11].history,"The first person to recognise that magnesium was an element was Joseph Black at Edinburgh in 1755. He distinguished magnesia (magnesium oxide, MgO) from lime (calcium oxide, CaO) although both were produced by heating similar kinds of carbonate rocks, magnesite and limestone respectively. Another magnesium mineral called meerschaum (magnesium silicate) was reported by Thomas Henry in 1789, who said that it was much used in Turkey to make pipes for smoking tobacco.An impure form of metallic magnesium was first produced in 1792 by Anton Rupprecht who heated magnesia with charcoal. A pure, but tiny, amount of the metal was isolated in 1808 by Humphry Davy by the electrolysis of magnesium oxide. However, it was the French scientist, Antoine-Alexandre-Brutus Bussy who made a sizeable amount of the metal in 1831 by reacting magnesium chloride with potassium, and he then studied its properties.");
    atom[11].melting_point = 923;
    atom[11].boiling_point = 1363;
    atom[11].ionic_radius = 0.72;
    atom[11].isotopes = 29;
    atom[11].electronegativity = 1.31;
    strcpy(atom[11].color,"Silvery white");
    atom[11].group = 2;
    atom[11].period = 3;
    strcpy(atom[11].conductivity,"Electrical Conductivity");
    strcpy(atom[11].luster,"Metallic");
    strcpy(atom[11].phase,"Solid");
    atom[11].density = 1.74;
    strcpy(atom[11].uses,"Magnesium is one-third less dense than aluminium. It improves the mechanical, fabrication and welding characteristics of aluminium when used as an alloying agent. These alloys are useful in aeroplane and car construction.Magnesium is used in products that benefit from being lightweight, such as car seats, luggage, laptops, cameras and power tools. It is also added to molten iron and steel to remove sulfur.Magnesium is an essential element in both plant and animal life. Chlorophyll is the chemical that allows plants to capture sunlight, and photosynthesis to take place. Chlorophyll is a magnesium-centred porphyrin complex. Without magnesium photosynthesis could not take place, and life as we know it would not exist.Magnesium is the eighth most abundant element in the Earth’s crust, but does not occur uncombined in nature. It is found in large deposits in minerals such as magnesite and dolomite. The sea contains trillions of tonnes of magnesium, and this is the source of much of the 850,000 tonnes now produced each year. It is prepared by reducing magnesium oxide with silicon, or by the electrolysis of molten magnesium chloride.");
    strcpy(atom[11].image_path,"");
    

    strcpy(atom[12].name,"ALUMINIUM");        
    strcpy(atom[12].symbol,"Al");        
    atom[12].atomic_number=13;        
    atom[12].atomic_weight=1.008;
    strcpy(atom[12].electronic_configuration,"[Ne] 3s23p1");
    strcpy(atom[12].history,"The analysis of a curious metal ornament found in the tomb of Chou-Chu, a military leader in 3rd century China, turned out to be 85% aluminium. How it was produced remains a mystery. By the end of the 1700s, aluminium oxide was known to contain a metal, but it defeated all attempts to extract it. Humphry Davy had used electric current to extract sodium and potassium from their so-called ‘earths’ (oxides), but his method did not release aluminium in the same way. The first person to produce it was Hans Christian Oersted at Copenhagen, Denmark, in 1825, and he did it by heating aluminium chloride with potassium. Even so, his sample was impure. It fell to the German chemist Friedrich Wöhler to perfect the method in 1827, and obtain pure aluminium for the first time by using sodium instead of potassium.");
    atom[12].melting_point = 933.47;
    atom[12].boiling_point = 2792;
    atom[12].ionic_radius = 0.54;
    atom[12].isotopes = 26;
    atom[12].electronegativity = 1.61;
    strcpy(atom[12].color,"Silvery-white");
    atom[12].group = 13;
    atom[12].period = 3;
    strcpy(atom[12].conductivity,"Thermal conductivity");
    strcpy(atom[12].luster,"Metallic");
    strcpy(atom[12].phase,"Solid");
    atom[12].density = 2.70;
    strcpy(atom[12].uses,"Aluminium is used in a huge variety of products including cans, foils, kitchen utensils, window frames, beer kegs and aeroplane parts. This is because of its particular properties. It has low density, is non-toxic, has a high thermal conductivity, has excellent corrosion resistance and can be easily cast, machined and formed. It is also non-magnetic and non-sparking. It is the second most malleable metal and the sixth most ductile.Aluminium is a good electrical conductor and is often used in electrical transmission lines. It is cheaper than copper and weight for weight is almost twice as good a conductor.Most commercially produced aluminium is extracted by the Hall–Héroult process. In this process aluminium oxide is dissolved in molten cryolite and then electrolytically reduced to pure aluminium. Making aluminium is very energy intensive. 5% of the electricity generated in the USA is used in aluminium production. However, once it has been made it does not readily corrode and can be easily recycled.");
    strcpy(atom[12].image_path,"");


    strcpy(atom[13].name,"SILICON");        
    strcpy(atom[13].symbol,"Si");        
    atom[13].atomic_number=14;        
    atom[13].atomic_weight=28.08;
    strcpy(atom[13].electronic_configuration,"[Ne] 3s23p2");
    strcpy(atom[13].history,"Silica (SiO2) in the form of sharp flints were among the first tools made by humans. The ancient civilizations used other forms of silica such as rock crystal, and knew how to turn sand into glass. Considering silicon’s abundance, it is somewhat surprising that it aroused little curiosity among early chemists.Attempts to reduce silica to its components by electrolysis had failed. In 1811, Joseph Gay Lussac and Louis Jacques Thénard reacted silicon tetrachloride with potassium metal and produced some very impure form of silicon. The credit for discovering silicon really goes to the Swedish chemist Jöns Jacob Berzelius of Stockholm who, in 1824, obtained silicon by heating potassium fluorosilicate with potassium. The product was contaminated with potassium silicide, but he removed this by stirring it with water, with which it reacts, and thereby obtained relatively pure silicon powder.");
    atom[13].melting_point = 1687;
    atom[13].boiling_point = 3538;
    atom[13].ionic_radius = 0.26;
    atom[13].isotopes = 28;
    atom[13].electronegativity = 1.90;
    strcpy(atom[13].color,"Blue-grey");
    atom[13].group = 14;
    atom[13].period = 3;
    strcpy(atom[13].conductivity,"Electrical Conductivity");
    strcpy(atom[13].luster,"Metallic");
    strcpy(atom[13].phase,"Solid");
    atom[13].density = 2.329;
    strcpy(atom[13].uses,"Silicon is one of the most useful elements to mankind. Most is used to make alloys including aluminium-silicon and ferro-silicon (iron-silicon). These are used to make dynamo and transformer plates, engine blocks, cylinder heads and machine tools and to deoxidise steel.The element silicon is used extensively as a semiconductor in solid-state devices in the computer and microelectronics industries. For this, hyperpure silicon is needed. The silicon is selectively doped with tiny amounts of boron, gallium, phosphorus or arsenic to control its electrical properties.Silicon makes up 27.7% of the Earth’s crust by mass and is the second most abundant element (oxygen is the first). It does not occur uncombined in nature but occurs chiefly as the oxide (silica) and as silicates. The oxide includes sand, quartz, rock crystal, amethyst, agate, flint and opal. The silicate form includes asbestos, granite, hornblende, feldspar, clay and mica.Silicon carbides are important abrasives and are also used in lasers.");
    strcpy(atom[13].image_path,"");


    strcpy(atom[14].name,"PHOSPHOROUS");        
    strcpy(atom[14].symbol,"P");        
    atom[14].atomic_number=15;        
    atom[14].atomic_weight=30.97;
    strcpy(atom[14].electronic_configuration,"[Ne] 3s23p3");
    strcpy(atom[14].history,"Phosphorus was first made by Hennig Brandt at Hamburg in 1669 when he evaporated urine and heated the residue until it was red hot, whereupon phosphorus vapour distilled which he collected by condensing it in water. Brandt kept his discovery secret, thinking he had discovered the Philosopher’s Stone that could turn base metals into gold. When he ran out of money, he sold phosphorus to Daniel Kraft who exhibited it around Europe including London where Robert Boyle was fascinated by it. He discovered how it was produced and investigated it systematically. (His assistant Ambrose Godfrey set up his own business making and selling phosphorus and became rich.)When it was realised that bone was calcium phosphate, and could be used to make phosphorus, and it became more widely available. Demand from match manufacturers in the 1800s ensured a ready market.");
    atom[14].melting_point = 317.3;
    atom[14].boiling_point = 553.7;
    atom[14].ionic_radius = 0.17;
    atom[14].isotopes = 15;
    atom[14].electronegativity = 2.19;
    strcpy(atom[14].color,"White or red");
    atom[14].group = 15;
    atom[14].period = 3;
    strcpy(atom[14].conductivity,"Thermal conductivity");
    strcpy(atom[14].luster,"No luster");
    strcpy(atom[14].phase,"Solid");
    atom[14].density = 1.823;
    strcpy(atom[14].uses,"Phosphorus is essential to all living things. It forms the sugar-phosphate backbone of DNA and RNA. It is important for energy transfer in cells as part of ATP (adenosine triphosphate), and is found in many other biologically important molecules. We take in about 1 gram of phosphate a day, and store about 750 grams in our bodies, since our bones and teeth are mainly calcium phosphate. Over-use of phosphates from fertilisers and detergents can cause them to pollute rivers and lakes causing algae to grow rapidly. The algae block out light stopping further photosynthesis. Oxygen dissolved in the water soon gets used up and the lake dies.Phosphorus is also important in the production of steel. Phosphates are ingredients in some detergents, but are beginning to be phased out in some countries. This is because they can lead to high phosphate levels in natural water supplies causing unwanted algae to grow. Phosphates are also used in the production of special glasses and fine chinaware.");
    strcpy(atom[14].image_path,"");


    strcpy(atom[15].name,"SULPHUR");        
    strcpy(atom[15].symbol,"S");        
    atom[15].atomic_number=16;        
    atom[15].atomic_weight=32.06;
    strcpy(atom[15].electronic_configuration,"[Ne] 3s23p4");
    strcpy(atom[15].history,"Sulfur is mentioned 15 times in the Bible, and was best known for destroying Sodom and Gomorrah. It was also known to the ancient Greeks, and burnt as a fumigant. Sulfur was mined near Mount Etna in Sicily and used for bleaching cloth and preserving wine, both of which involved burning it to form sulfur dioxide, and allowing this to be absorbed by wet clothes or the grape juice. For centuries, sulfur along with mercury and salt, was believed to be a component of all metals and formed the basis of alchemy whereby one metal could be transmuted into another.Antoine Lavoisier thought that sulfur was an element, but in 1808 Humphry Davy said it contained hydrogen. However, his sample was impure and when Louis-Josef Gay-Lussac and Louis-Jacques Thénard proved it to be an element the following year, Davy eventually agreed.");
    atom[15].melting_point = 388.36;
    atom[15].boiling_point = 717.76;
    atom[15].ionic_radius = 0;
    atom[15].isotopes = 23;
    atom[15].electronegativity = 2.58;
    strcpy(atom[15].color,"Yellow");
    atom[15].group = 16;
    atom[15].period = 3;
    strcpy(atom[15].conductivity,"Thermal Conductivity");
    strcpy(atom[15].luster,"Shiny");
    strcpy(atom[15].phase,"Solid");
    atom[15].density = 2.07;
    strcpy(atom[15].uses,"Sulfur is used in the vulcanisation of black rubber, as a fungicide and in black gunpowder. Most sulfur is, however, used in the production of sulfuric acid, which is perhaps the most important chemical manufactured by western civilisations. The most important of sulfuric acid’s many uses is in the manufacture of phosphoric acid, to make phosphates for fertilisers.Sulfur is essential to all living things. It is taken up as sulfate from the soil (or seawater) by plants and algae. It is used to make two of the essential amino acids needed to make proteins. It is also needed in some co-enzymes. The average human contains 140 grams and takes in about 1 gram a day, mainly in proteins.Modern sulfur production is almost entirely from the various purification processes used to remove sulfur from natural gas, oil and tar sands. All living things contain sulfur and when fossilised (as in fossil fuels) the sulfur remains present. If unpurified fossil fuels are burnt, sulfur dioxide can enter the atmosphere, leading to acid rain.");
    strcpy(atom[15].image_path,"");


    strcpy(atom[16].name,"CHLORINE");        
    strcpy(atom[16].symbol,"Cl");        
    atom[16].atomic_number=17;        
    atom[16].atomic_weight=35.45;
    strcpy(atom[16].electronic_configuration,"[Ne] 3s23p5");
    strcpy(atom[16].history,"Hydrochloric acid (HCl) was known to the alchemists. The gaseous element itself was first produced in 1774 by Carl Wilhelm Scheele at Uppsala, Sweden, by heating hydrochloric acid with the mineral pyrolusite which is naturally occuring manganese dioxide, MnO2. A dense, greenish-yellow gas was evolved which he recorded as having a choking smell and which dissolved in water to give an acid solution. He noted that it bleached litmus paper, and decolourised leaves and flowers.Humphry Davy investigated it in 1807 and eventually concluded not only that it was a simple substance, but that it was truly an element. He announced this in 1810 and yet it took another ten years for some chemists finally to accept that chlorine really was an element.");
    atom[16].melting_point = 171.7;
    atom[16].boiling_point = 239.11;
    atom[16].ionic_radius = 0.99;
    atom[16].isotopes = 27;
    atom[16].electronegativity = 3.16;
    strcpy(atom[16].color,"Yellowy-green");
    atom[16].group = 17;
    atom[16].period = 3;
    strcpy(atom[16].conductivity,"Thermal Conductivity");
    strcpy(atom[16].luster,"No luster");
    strcpy(atom[16].phase,"Gas");
    atom[16].density = 0.0028;
    strcpy(atom[16].uses,"Chlorine kills bacteria – it is a disinfectant. It is used to treat drinking water and swimming pool water. It is also used to make hundreds of consumer products from paper to paints, and from textiles to insecticides.Chlorine is not found uncombined in nature. Halite (sodium chloride or ‘common salt’) is the main mineral that is mined for chlorine. Sodium chloride is a very soluble salt that has been leached into the oceans over the lifetime of the Earth. Several salt beds, or ‘lakes’ are found where ancient seas have evaporated, and these can be mined for chloride.Chlorine gas is itself very poisonous, and was used as a chemical weapon during the First World War.40 million tonnes of chlorine gas are made each year from the electrolysis of brine (sodium chloride solution). This process also produces useful sodium hydroxide.");
    strcpy(atom[16].image_path,"");


    strcpy(atom[17].name,"ARGON");        
    strcpy(atom[17].symbol,"Ar");        
    atom[17].atomic_number=18;        
    atom[17].atomic_weight=39.94;
    strcpy(atom[17].electronic_configuration,"[Ne] 3s23p6");
    strcpy(atom[17].history,"Although argon is abundant in the Earth’s atmosphere, it evaded discovery until 1894 when Lord Rayleigh and William Ramsay first separated it from liquid air. In fact the gas had been isolated in 1785 by Henry Cavendish who had noted that about 1% of air would not react even under the most extreme conditions. That 1% was argon.Argon was discovered as a result of trying to explain why the density of nitrogen extracted from air differed from that obtained by the decomposition of ammonia.Ramsay removed all the nitrogen from the gas he had extracted from air, and did this by reacting it with hot magnesium, forming the solid magnesium nitride. He was then left with a gas that would not react and when he examined its spectrum he saw new groups of red and green lines, confirming that it was a new element.");
    atom[17].melting_point = 83.81;
    atom[17].boiling_point = 87.302;
    atom[17].ionic_radius = 0.88;
    atom[17].isotopes = 26;
    atom[17].electronegativity = 0;
    strcpy(atom[17].color,"Colorless");
    atom[17].group = 18;
    atom[17].period = 3;
    strcpy(atom[17].conductivity,"Thermal Conductivity");
    strcpy(atom[17].luster,"No luster");
    strcpy(atom[17].phase,"Gas");
    atom[17].density = 0.0016;
    strcpy(atom[17].uses,"Argon is often used when an inert atmosphere is needed. It is used in this way for the production of titanium and other reactive elements. It is also used by welders to protect the weld area and in incandescent light bulbs to stop oxygen from corroding the filament.Argon is used in fluorescent tubes and low-energy light bulbs. A low-energy light bulb often contains argon gas and mercury. When it is switched on an electric discharge passes through the gas, generating UV light. The coating on the inside surface of the bulb is activated by the UV light and it glows brightly.Argon makes up 0.94% of the Earth’s atmosphere and is the third most abundant atmospheric gas. Levels have gradually increased since the Earth was formed because radioactive potassium-40 turns into argon as it decays. Argon is obtained commercially by the distillation of liquid air.");
    strcpy(atom[17].image_path,"");


    strcpy(atom[18].name,"POTASSIUM");        
    strcpy(atom[18].symbol,"K");        
    atom[18].atomic_number=19;        
    atom[18].atomic_weight=39.09;
    strcpy(atom[18].electronic_configuration,"[Ar] 4s1");
    strcpy(atom[18].history,"Potassium salts in the form of saltpetre (potassium nitrate, KNO3), alum (potassium aluminium sulfate, KAl(SO4)2), and potash (potassium carbonate, K2CO3) have been known for centuries. They were used in gunpowder, dyeing, and soap making. They were scraped from the walls of latrines, manufactured from clay and sulfuric acid, and collected as wood ash respectively. Reducing them to the element defeated the early chemists and potassium was classed as an ‘earth’ by Antoine Lavoisier. Then in 1807, Humphry Davy exposed moist potash to an electric current and observed the formation of metallic globules of a new metal, potassium. He noted that when they were dropped into water they skimmed around on the surface, burning with a lavender-coloured flame.");
    atom[18].melting_point = 336.7;
    atom[18].boiling_point = 1032;
    atom[18].ionic_radius =  0.133;
    atom[18].isotopes = 26;
    atom[18].electronegativity = 0.82;
    strcpy(atom[18].color,"Silvery white");
    atom[18].group = 1;
    atom[18].period = 4;
    strcpy(atom[18].conductivity,"Thermal Conductivity");
    strcpy(atom[18].luster,"Metallic");
    strcpy(atom[18].phase,"Solid");
    atom[18].density = 0.89;
    strcpy(atom[18].uses,"Most potassium minerals are found in igneous rocks and are sparingly soluble. The metal is difficult to obtain from these minerals. There are, however, other minerals such as sylvite (potassium chloride), sylvinite (a mixture of potassium and sodium chloride) and carnallite (potassium magnesium chloride) that are found in deposits formed by evaporation of old seas or lakes. The potassium salts can be easily recovered from these. Potassium salts are also found in the ocean but in smaller amounts compared with sodium.The greatest demand for potassium compounds is in fertilisers. Many other potassium salts are of great importance, including the nitrate, carbonate, chloride, bromide, cyanide and sulfate. Potassium carbonate is used in the manufacture of glass. Potassium hydroxide is used to make detergent and liquid soap. Potassium chloride is used in pharmaceuticals and saline drips.The average human consumes up to 7 grams of potassium a day, and stores about 140 grams in the body cells. A normal healthy diet contains enough potassium, but some foods such as instant coffee, sardines, nuts, raisins, potatoes and chocolate have above average potassium content.");
    strcpy(atom[18].image_path,"");


    strcpy(atom[19].name,"CALICUM");        
    strcpy(atom[19].symbol,"Ca");        
    atom[19].atomic_number=20;        
    atom[19].atomic_weight=40.07;
    strcpy(atom[19].electronic_configuration,"[Ar] 4s2");
    strcpy(atom[19].history,"Lime (calcium oxide, CaO) was the useful material obtained by heating limestone and used for centuries to make plaster and mortar. Antoine Lavoisier classified it as an ‘earth’ because it seemed impossible to reduce it further, but he suspected it was the oxide of an unknown element. In 1808, Humphry Davy tried to reduce moist lime by electrolysis, just as he had done with sodium and potassium, but he was not successful. So he tried a mixture of lime and mercury oxide and while this produced an amalgam of calcium and mercury, it was not enough to confirm that he’d obtained a new element. (Jöns Jacob Berzelius had conducted a similar experiment and also obtained the amalgam.) Davy tried using more lime in the mixture and produced more of the amalgam from which he distilled off the mercury leaving just calcium.");
    atom[19].melting_point = 1115;
    atom[19].boiling_point = 1757;
    atom[19].ionic_radius = 1.00;
    atom[19].isotopes = 26;
    atom[19].electronegativity = 1.00;
    strcpy(atom[19].color,"Silvery white");
    atom[19].group = 2;
    atom[19].period = 4;
    strcpy(atom[19].conductivity,"Thermal conductivity");
    strcpy(atom[19].luster,"Shiny");
    strcpy(atom[19].phase,"Solid");
    atom[19].density = 1.54;
    strcpy(atom[19].uses,"Calcium compounds are widely used. There are vast deposits of limestone (calcium carbonate) used directly as a building stone and indirectly for cement. When limestone is heated in kilns it gives off carbon dioxide gas leaving behind quicklime (calcium oxide). This reacts vigorously with water to give slaked lime (calcium hydroxide). Slaked lime is used to make cement, as a soil conditioner and in water treatment to reduce acidity, and in the chemicals industry. It is also used in steel making to remove impurities from the molten iron ore. When mixed with sand, slaked lime takes up carbon dioxide from the air and hardens as lime plaster.Calcium is essential to all living things, particularly for the growth of healthy teeth and bones. Calcium phosphate is the main component of bone. The average human contains about 1 kilogram of calcium.Calcium metal is used as a reducing agent in preparing other metals such as thorium and uranium. It is also used as an alloying agent for aluminium, beryllium, copper, lead and magnesium alloys.");
    strcpy(atom[19].image_path,"");


    strcpy(atom[20].name,"SCANDIUM");        
    strcpy(atom[20].symbol,"Sc");        
    atom[20].atomic_number=21;        
    atom[20].atomic_weight=44.95;
    strcpy(atom[20].electronic_configuration,"[Ar] 3d14s2");
    strcpy(atom[20].history,"In 1869, Mendeleev noticed that there was a gap in atomic weights between calcium (40) and titanium (48) and predicted there was an undiscovered element of intermediate atomic weight. He forecast that its oxide would be X2O3. It was discovered as scandium in 1879, by Lars Frederik Nilson of the University of Uppsala, Sweden. He extracted it from euxenite, a complex mineral containing eight metal oxides. He had already extracted erbium oxide from euxenite, and from this oxide he obtained ytterbium oxide and then another oxide of a lighter element whose atomic spectrum showed it to be an unknown metal. This was the metal that Mendeleev had predicted and its oxide was Sc2O3.Scandium metal itself was only produced in 1937 by the electrolysis of molten scandium chloride.");
    atom[20].melting_point = 1814;
    atom[20].boiling_point = 3109;
    atom[20].ionic_radius = 0.75;
    atom[20].isotopes = 26;
    atom[20].electronegativity = 1.36;
    strcpy(atom[20].color,"Silvery white");
    atom[20].group = 3;
    atom[20].period = 4;
    strcpy(atom[20].conductivity,"Thermal conductivity");
    strcpy(atom[20].luster,"Metallic");
    strcpy(atom[20].phase,"Solid");
    atom[20].density = 2.99;
    strcpy(atom[20].uses,"Scandium can be recovered from thortveitite or extracted as a by-product from uranium mill tailings (sandy waste material). Metallic scandium can be prepared by reducing the fluoride with calcium metal. It can also be prepared by electrolysing molten potassium, lithium and scandium chlorides, using electrodes of tungsten wire and molten zinc.Scandium is mainly used for research purposes. It has, however, great potential because it has almost as low a density as aluminium and a much higher melting point. An aluminium-scandium alloy has been used in Russian MIG fighter planes, high-end bicycle frames and baseball bats.Scandium iodide is added to mercury vapour lamps to produce a highly efficient light source resembling sunlight. These lamps help television cameras to reproduce colour well when filming indoors or at night-time.");
    strcpy(atom[20].image_path,"");


    strcpy(atom[21].name,"TITANIUM");        
    strcpy(atom[21].symbol,"Ti");        
    atom[21].atomic_number=22;        
    atom[21].atomic_weight=47.86;
    strcpy(atom[21].electronic_configuration,"[Ar] 3d24s2");
    strcpy(atom[21].history,"The first titanium mineral, a black sand called menachanite, was discovered in 1791 in Cornwall by the Reverend William Gregor. He analysed it and deduced it was made up of the oxides of iron and an unknown metal, and reported it as such to the Royal Geological Society of Cornwall.In 1795, the German scientist Martin Heinrich Klaproth of Berlin investigated a red ore known as Schörl from Hungary. This is a form of rutile (TiO2) and Klaproth realised it was the oxide of a previously unknown element which he named titanium. When he was told of Gregor’s discovery he investigated menachanite and confirmed it too contained titanium.It was not until 1910 that M. A. Hunter, working for General Electric in the USA, made pure titanium metal by heating titanium tetrachloride and sodium metal.");
    atom[21].melting_point = 1943;
    atom[21].boiling_point = 3560;
    atom[21].ionic_radius = 0.61;
    atom[21].isotopes = 21;
    atom[21].electronegativity = 1.54;
    strcpy(atom[21].color,"Silvery grey");
    atom[21].group = 4;
    atom[21].period = 4;
    strcpy(atom[21].conductivity,"Thermal conductivity");
    strcpy(atom[21].luster,"Shiny");
    strcpy(atom[21].phase,"Solid");
    atom[21].density = 4.506;
    strcpy(atom[21].uses,"Titanium is as strong as steel but much less dense. It is therefore important as an alloying agent with many metals including aluminium, molybdenum and iron. These alloys are mainly used in aircraft, spacecraft and missiles because of their low density and ability to withstand extremes of temperature. They are also used in golf clubs, laptops, bicycles and crutches. Power plant condensers use titanium pipes because of their resistance to corrosion. Because titanium has excellent resistance to corrosion in seawater, it is used in desalination plants and to protect the hulls of ships, submarines and other structures exposed to seawater.The largest use of titanium is in the form of titanium(IV) oxide. It is extensively used as a pigment in house paint, artists’ paint, plastics, enamels and paper. It is a bright white pigment with excellent covering power. It is also a good reflector of infrared radiation and so is used in solar observatories where heat causes poor visibility.");
    strcpy(atom[21].image_path,"");


    strcpy(atom[22].name,"VANADIUM");        
    strcpy(atom[22].symbol,"V");        
    atom[22].atomic_number=23;        
    atom[22].atomic_weight=50.94;
    strcpy(atom[22].electronic_configuration,"[Ar] 3d34s2");
    strcpy(atom[22].history,"Vanadium was discovered twice. The first time was in 1801 by Andrés Manuel del Rio who was Professor of Mineralogy in Mexico City. He found it in a specimen of vanadite, Pb5(VO4)3Cl and sent a sample to Paris. However, French chemists concluded that it was a chromium mineral.The second time vanadium was discovered was in 1831 by the Swedish chemist Nil Gabriel Selfström at Stockholm. He separated it from a sample of cast iron made from ore that had been mined at Småland. He was able to show that it was a new element, and in so doing he beat a rival chemist, Friedrich Wöhler, to the discovery He was also working another vanadium mineral from Zimapan.Pure vanadium was produced by Henry Roscoe at Manchester, in 1869, and he showed that previous samples of the metal were really vanadium nitride (VN).");
    atom[22].melting_point = 2183;
    atom[22].boiling_point = 3680;
    atom[22].ionic_radius = 0.54;
    atom[22].isotopes = 24;
    atom[22].electronegativity = 1.63;
    strcpy(atom[22].color,"Silvery white");
    atom[22].group = 5;
    atom[22].period = 4;
    strcpy(atom[22].conductivity,"Thermal Conductivity");
    strcpy(atom[22].luster,"Metallic");
    strcpy(atom[22].phase,"Solid");
    atom[22].density = 6.0;
    strcpy(atom[22].uses,"About 80% of the vanadium produced is used as a steel additive. Vanadium-steel alloys are very tough and are used for armour plate, axles, tools, piston rods and crankshafts. Less than 1% of vanadium, and as little chromium, makes steel shock resistant and vibration resistant. Vanadium alloys are used in nuclear reactors because of vanadium’s low neutron-absorbing properties.Vanadium(V) oxide is used as a pigment for ceramics and glass, as a catalyst and in producing superconducting magnets.Vanadium is essential to some species, including humans, although we need very little. We take in just 0.01 milligrams each day, and this is more than sufficient for our needs. In some compounds vanadium can become toxic.");
    strcpy(atom[22].image_path,"");


    strcpy(atom[23].name,"CHROMIUM");        
    strcpy(atom[23].symbol,"Cr");        
    atom[23].atomic_number=24;        
    atom[23].atomic_weight=51.99;
    strcpy(atom[23].electronic_configuration,"[Ar] 3d54s1 ");
    strcpy(atom[23].history,"Chromium was discovered by the French chemist Nicholas Louis Vauquelin at Paris in1798. He was intrigued by a bright red mineral that had been discovered in a Siberian gold mine in 1766 and was referred to as Siberian red lead. It is now known as crocoite and is a form of lead chromate. Vauquelin analysed it and confirmed that it was a lead mineral. Then he dissolved it in acid, precipitated the lead, filtered this off, and focused his attention on the remaining liquor from which he succeeded in isolating chromium. Intrigued by the range of colours that it could produce in solution, he named it chromium from the Greek word chroma meaning colour. He then discovered that the green colouration of emeralds was also due to chromium");
    atom[23].melting_point = 2180;
    atom[23].boiling_point = 2944;
    atom[23].ionic_radius = 0.62;
    atom[23].isotopes = 10;
    atom[23].electronegativity = 1.66;
    strcpy(atom[23].color,"Silvery-blue");
    atom[23].group = 6;
    atom[23].period = 4;
    strcpy(atom[23].conductivity,"Electrical conductivity");
    strcpy(atom[23].luster,"Metallic");
    strcpy(atom[23].phase,"Solid ");
    atom[23].density = 7.15 ;
    strcpy(atom[23].uses,"Chromium is used to harden steel, to manufacture stainless steel (named as it won’t rust) and to produce several alloys.Chromium plating can be used to give a polished mirror finish to steel. Chromium-plated car and lorry parts, such as bumpers, were once very common. It is also possible to chromium plate plastics, which are often used in bathroom fittings.Chromium compounds are used as industrial catalysts and pigments (in bright green, yellow, red and orange colours). Rubies get their red colour from chromium, and glass treated with chromium has an emerald green colour.Chromium is an essential trace element for humans because it helps us to use glucose. However, it is poisonous in excess. We take in about 1 milligram a day. Foods such as brewer’s yeast, wheat germ and kidney are rich in chromium.Chromium is found mainly in chromite. This ore is found in many places including South Africa, India, Kazakhstan and Turkey. Chromium metal is usually produced by reducing chromite with carbon in an electric-arc furnace, or reducing chromium(III) oxide with aluminium or silicon.");
    strcpy(atom[23].image_path,"");


    strcpy(atom[24].name,"MANGANESE");        
    strcpy(atom[24].symbol,"Mg");        
    atom[24].atomic_number=25;        
    atom[24].atomic_weight=54.84;
    strcpy(atom[24].electronic_configuration,"[Ar] 3d54s2 ");
    strcpy(atom[24].history,"Manganese in the form of the black ore pyrolucite (manganese dioxide, MnO2) was used by the pre-historic cave painters of the Lascaux region of France around 30,000 years ago. In more recent times was used by glass makers to remove the pale greenish tint of natural glass.In 1740, the Berlin glass technologist Johann Heinrich Pott investigated it chemically and showed that it contained no iron as has been assumed. From it he was able to make potassium permanganate (KMnO4), one of the strongest oxidising agents known. Several chemists in the 1700s tried unsuccessfully to isolate the metal component in pyrolusite. The first person to do this was the Swedish chemist and mineralogist Johan Gottlieb Gahn in 1774. However, a student at Vienna, Ignatius Kaim, had already described how he had produced manganese metal, in his dissertation written in 1771.");
    atom[24].melting_point = 1519;
    atom[24].boiling_point = 2334;
    atom[24].ionic_radius = 0.67;
    atom[24].isotopes = 26;
    atom[24].electronegativity = 1.55;
    strcpy(atom[24].color,"Silvery white");
    atom[24].group = 7;
    atom[24].period = 4;
    strcpy(atom[24].conductivity,"Thermal conductivity");
    strcpy(atom[24].luster,"Metallic");
    strcpy(atom[24].phase,"Solid");
    atom[24].density = 7.3;
    strcpy(atom[24].uses,"Manganese is too brittle to be of much use as a pure metal. It is mainly used in alloys, such as steel.Manganese(IV) oxide is used as a catalyst, a rubber additive and to decolourise glass that is coloured green by iron impurities. Manganese sulfate is used to make a fungicide. Manganese(II) oxide is a powerful oxidising agent and is used in quantitative analysis. It is also used to make fertilisers and ceramics.Drinks cans are made of an alloy of aluminium with 1.5% manganese, to improve resistance to corrosion. With aluminium, antimony and copper it forms highly magnetic alloys.Manganese is an essential element in all known living organisms. Many types of enzymes contain manganese. For example, the enzyme responsible for converting water molecules to oxygen during photosynthesis contains four atoms of manganese.Some soils have low levels of manganese and so it is added to some fertilisers and given as a food supplement to grazing animals.");
    strcpy(atom[24].image_path,"");


    strcpy(atom[25].name,"IRON");        
    strcpy(atom[25].symbol,"Fe");        
    atom[25].atomic_number=26;        
    atom[25].atomic_weight=55.84;
    strcpy(atom[25].electronic_configuration,"[Ar] 3d64s2");
    strcpy(atom[25].history,"Iron objects have been found in Egypt dating from around 3500 BC. They contain about 7.5% nickel, which indicates that they were of meteoric origin.The ancient Hittites of Asia Minor, today’s Turkey, were the first to smelt iron from its ores around 1500 BC and this new, stronger, metal gave them economic and political power. The Iron Age had begun. Some kinds of iron were clearly superior to others depending on its carbon content, although this was not appreciated. Some iron ore contained vanadium producing so-called Damascene steel, ideal for swords.The first person to explain the various types of iron was René Antoine Ferchault de Réaumur who wrote a book on the subject in 1722. This explained how steel, wrought iron, and cast iron, were to be distinguished by the amount of charcoal (carbon) they contained. The Industrial Revolution which began that same century relied extensively on this metal.");
    atom[25].melting_point = 1811;
    atom[25].boiling_point = 3134;
    atom[25].ionic_radius = 0.55 ;
    atom[25].isotopes = 26;
    atom[25].electronegativity = 1.83;
    strcpy(atom[25].color,"Greyish");
    atom[25].group = 8;
    atom[25].period = 4;
    strcpy(atom[25].conductivity,"Electrical Conductivity");
    strcpy(atom[25].luster,"Shiny");
    strcpy(atom[25].phase,"Solid");
    atom[25].density = 7.87;
    strcpy(atom[25].uses,"Iron is an enigma – it rusts easily, yet it is the most important of all metals. 90% of all metal that is refined today is iron.Iron is the fourth most abundant element, by mass, in the Earth’s crust. The core of the Earth is thought to be largely composed of iron with nickel and sulfur.Commercially, iron is produced in a blast furnace by heating haematite or magnetite with coke (carbon) and limestone (calcium carbonate). This forms pig iron, which contains about 3% carbon and other impurities, but is used to make steel. Around 1.3 billion tonnes of crude steel are produced worldwide each year.Iron is an essential element for all forms of life and is non-toxic. The average human contains about 4 grams of iron. A lot of this is in haemoglobin, in the blood. Haemoglobin carries oxygen from our lungs to the cells, where it is needed for tissue respiration.Humans need 10–18 milligrams of iron each day. A lack of iron will cause anaemia to develop. Foods such as liver, kidney, molasses, brewer’s yeast, cocoa and liquorice contain a lot of iron.");
    strcpy(atom[25].image_path,"");



    strcpy(atom[26].name,"COBALT");        
    strcpy(atom[26].symbol,"Co");        
    atom[26].atomic_number=27;        
    atom[26].atomic_weight=58.93;
    strcpy(atom[26].electronic_configuration,"[Ar] 3d74s2");
    strcpy(atom[26].history,"The tomb of Pharaoh Tutankhamen, who ruled from 1361-1352 BC, contained a small glass object coloured deep blue with cobalt. Cobalt blue was known even earlier in China and was used for pottery glazes.In 1730, chemist Georg Brandt of Stockholm became interested in a dark blue ore from some local copper workings and he eventually proved that it contained a hitherto unrecognised metal and he gave it the name by which its ore was cursed by miners in Germany, where it was sometimes mistaken for a silver ore. He published his results in 1739. For many years his claim to have uncovered a new metal was disputed by other chemists who said his new element was really a compound of iron and arsenic, but eventually it was recognised as an element in its own right.");
    atom[26].melting_point = 1768;
    atom[26].boiling_point = 3200;
    atom[26].ionic_radius = 0.65;
    atom[26].isotopes = 28;
    atom[26].electronegativity = 1.88;
    strcpy(atom[26].color,"Silvery-blue");
    atom[26].group = 9;
    atom[26].period = 4;
    strcpy(atom[26].conductivity,"Electrical Conductivity");
    strcpy(atom[26].luster,"Metallic");
    strcpy(atom[26].phase,"Solid");
    atom[26].density = 8.86;
    strcpy(atom[26].uses,"Cobalt is an essential trace element, and forms part of the active site of vitamin B12. The amount we need is very small, and the body contains only about 1 milligram. Cobalt salts can be given to certain animals in small doses to correct mineral deficiencies. In large doses cobalt is carcinogenic.Cobalt, like iron, can be magnetised and so is used to make magnets. It is alloyed with aluminium and nickel to make particularly powerful magnets.Other alloys of cobalt are used in jet turbines and gas turbine generators, where high-temperature strength is important.Cobalt-60 is a radioactive isotope. It is an important source of gamma-rays. It is widely used in cancer treatment, as a tracer and for radiotherapy.Cobalt is found in the minerals cobaltite, skutterudite and erythrite. Important ore deposits are found in DR Congo, Canada, Australia, Zambia and Brazil. Most cobalt is formed as a by-product of nickel refining.");
    strcpy(atom[26].image_path,"");


    strcpy(atom[27].name,"NICKEL");        
    strcpy(atom[27].symbol,"Ni");        
    atom[27].atomic_number=28;        
    atom[27].atomic_weight=58.69;
    strcpy(atom[27].electronic_configuration,"[Ar] 3d84s2 ");
    strcpy(atom[27].history,"Meteorites contain both iron and nickel, and earlier ages used them as a superior form of iron. Because the metal did not rust, it was regarded by the natives of Peru as a kind of silver. A zinc-nickel alloy called pai-t’ung (white copper) was in use in China as long ago as 200 BC. Some even reached Europe.In 1751, Axel Fredrik Cronstedt, working at Stockholm, investigated a new mineral – now called nickeline (NiAs) – which came from a mine at Los, Hälsingland, Sweden. He thought it might contain copper but what he extracted was a new metal which he announced and named nickel in 1754. Many chemists thought it was an alloy of cobalt, arsenic, iron and copper – these elements were present as trace contaminants. It was not until 1775 that pure nickel was produced by Torbern Bergman and this confirmed its elemental nature.");
    atom[27].melting_point = 1728;
    atom[27].boiling_point = 3186;
    atom[27].ionic_radius = 0.69;
    atom[27].isotopes = 5;
    atom[27].electronegativity = 1.91;
    strcpy(atom[27].color,"Silvery white");
    atom[27].group = 10;
    atom[27].period = 4;
    strcpy(atom[27].conductivity,"Electrical conductivity");
    strcpy(atom[27].luster,"Metallic");
    strcpy(atom[27].phase,"Solid");
    atom[27].density = 8.90;
    strcpy(atom[27].uses,"Nickel resists corrosion and is used to plate other metals to protect them. It is, however, mainly used in making alloys such as stainless steel. Nichrome is an alloy of nickel and chromium with small amounts of silicon, manganese and iron. It resists corrosion, even when red hot, so is used in toasters and electric ovens. A copper-nickel alloy is commonly used in desalination plants, which convert seawater into fresh water. Nickel steel is used for armour plating. Other alloys of nickel are used in boat propeller shafts and turbine blades.Nickel is used in batteries, including rechargeable nickel-cadmium batteries and nickel-metal hydride batteries used in hybrid vehicles.Nickel has a long history of being used in coins. The US five-cent piece (known as a ‘nickel’) is 25% nickel and 75% copper.Finely divided nickel is used as a catalyst for hydrogenating vegetable oils. Adding nickel to glass gives it a green colour.");
    strcpy(atom[27].image_path,"");


    strcpy(atom[28].name,"COPPER");        
    strcpy(atom[28].symbol,"Cu");        
    atom[28].atomic_number=29;
    atom[28].atomic_weight=63.54;
    strcpy(atom[28].electronic_configuration,"[Ar] 3d104s1 ");
    strcpy(atom[28].history,"Copper beads have been excavated in northern Iraq and which are more than ten thousand years old and presumably made from native copper, nuggets of which can sometimes be found. Copper was widely used in the ancient world as bronze, its alloy with tin, which was used to make cutlery, coins, and tools. In China it was used for bells.Copper is not difficult to extract from it ores, but mineable deposits were relatively rare. Some, such as the copper mine at Falun, Sweden, date from the 1200s, were the source of great wealth. One way to extract the metal was to roast the sulfide ore then leach out the copper sulfate that was formed, with water. This was then trickled over scrap iron on the surface of which the copper deposited, forming a flaky layer that was easily removed.");
    atom[28].melting_point = 1357.7;
    atom[28].boiling_point = 2833;
    atom[28].ionic_radius = 0.73;
    atom[28].isotopes = 29;
    atom[28].electronegativity = 1.90;
    strcpy(atom[28].color,"Reddish-gold");
    atom[28].group = 11;
    atom[28].period = 4;
    strcpy(atom[28].conductivity,"Excellent electrical conductivity");
    strcpy(atom[28].luster,"Metallic");
    strcpy(atom[28].phase,"Solid");
    atom[28].density = 8.96;
    strcpy(atom[28].uses,"Historically, copper was the first metal to be worked by people. The discovery that it could be hardened with a little tin to form the alloy bronze gave the name to the Bronze Age.Traditionally it has been one of the metals used to make coins, along with silver and gold. However, it is the most common of the three and therefore the least valued. All US coins are now copper alloys, and gun metals also contain copper.Most copper is used in electrical equipment such as wiring and motors. This is because it conducts both heat and electricity very well, and can be drawn into wires. It also has uses in construction (for example roofing and plumbing), and industrial machinery (such as heat exchangers).Copper sulfate is used widely as an agricultural poison and as an algicide in water purification.Copper compounds, such as Fehling’s solution, are used in chemical tests for sugar detection.");
    strcpy(atom[28].image_path,"");


    strcpy(atom[29].name,"ZINC");        
    strcpy(atom[29].symbol,"Zn");        
    atom[29].atomic_number=30;        
    atom[29].atomic_weight=65.39;
    strcpy(atom[29].electronic_configuration,"[Ar] 3d104s2");
    strcpy(atom[29].history,"Zinc was known to the Romans but rarely used. It was first recognised as a metal in its own right in India and the waste from a zinc smelter at Zawar, in Rajasthan, testifies to the large scale on which it was refined during the period 1100 to the 1500.Zinc refining in China was carried out on a large scale by the 1500s. An East India Company ship which sank off the coast of Sweden in 1745 was carrying a cargo of Chinese zinc and analysis of reclaimed ingots showed them to be almost the pure metal.In 1668, a Flemish metallurgist, P. Moras de Respour, reported the extraction of metallic zinc from zinc oxide, but as far as Europe was concerned zinc was discovered by the German chemist Andreas Marggraf in 1746, and indeed he was the first to recognise it as a new metal.");
    atom[29].melting_point =  692.67;
    atom[29].boiling_point = 1180;
    atom[29].ionic_radius = 0.74;
    atom[29].isotopes = 30;
    atom[29].electronegativity = 1.65;
    strcpy(atom[29].color,"Silvery-white");
    atom[29].group = 12;
    atom[29].period = 4;
    strcpy(atom[29].conductivity,"Thermal Conductivity");
    strcpy(atom[29].luster,"Metallic");
    strcpy(atom[29].phase,"Solid");
    atom[29].density = 7.134;
    strcpy(atom[29].uses,"Most zinc is used to galvanise other metals, such as iron, to prevent rusting. Galvanised steel is used for car bodies, street lamp posts, safety barriers and suspension bridges.Large quantities of zinc are used to produce die-castings, which are important in the automobile, electrical and hardware industries. Zinc is also used in alloys such as brass, nickel silver and aluminium solder.Zinc oxide is widely used in the manufacture of very many products such as paints, rubber, cosmetics, pharmaceuticals, plastics, inks, soaps, batteries, textiles and electrical equipment. Zinc sulfide is used in making luminous paints, fluorescent lights and x-ray screens.");
    strcpy(atom[29].image_path,"");


    strcpy(atom[30].name,"GALLIUM");       
    strcpy(atom[30].symbol,"Ga");        
    atom[30].atomic_number=31;        
    atom[30].atomic_weight=69.72;
    strcpy(atom[30].electronic_configuration,"[Ar] 3d104s24p1 ");
    strcpy(atom[30].history,"Gallium was discovered in Paris by Paul-Émile Lecoq de Boisbaudran in 1875. He observed a new violet line in the atomic spectrum of some zinc he had extracted from a sample of zinc blende ore (ZnS) from the Pyrenees. He knew it meant that an unknown element was present. What Boisbaudran didn’t realise was that its existence, and properties, had been predicted by Mendeleev whose periodic table showed there was a gap below aluminium which was yet to be occupied. He forecast that the missing element’s atomic weight would be around 68 and its density would be 5.9 g/cm3.By November of 1875, Boisbaudran had isolated and purified the new metal and shown that it was like aluminium. In December 1875 he announced it to the French Academy of Sciences.");
    atom[30].melting_point = 302.91;
    atom[30].boiling_point = 2502;
    atom[30].ionic_radius = 0.62;
    atom[30].isotopes = 5;
    atom[30].electronegativity = 1.81;
    strcpy(atom[30].color,"Silvery-white");
    atom[30].group = 13;
    atom[30].period = 4;
    strcpy(atom[30].conductivity,"Thermal Conductivity");
    strcpy(atom[30].luster,"Metallic");
    strcpy(atom[30].phase,"Solid ");
    atom[30].density = 5.91;
    strcpy(atom[30].uses,"Gallium arsenide has a similar structure to silicon and is a useful silicon substitute for the electronics industry. It is an important component of many semiconductors. It is also used in red LEDs (light emitting diodes) because of its ability to convert electricity to light. Solar panels on the Mars Exploration Rover contained gallium arsenide. Gallium nitride is also a semiconductor. It has particular properties that make it very versatile. It has important uses in Blu-ray technology, mobile phones, blue and green LEDs and pressure sensors for touch switches.Gallium readily alloys with most metals. It is particularly used in low-melting alloys.It has a high boiling point, which makes it ideal for recording temperatures that would vaporise a thermometer.");
    strcpy(atom[30].image_path,"");


    strcpy(atom[31].name,"GERMANIUM");        
    strcpy(atom[31].symbol,"Ge");        
    atom[31].atomic_number=32;        
    atom[31].atomic_weight=72.64;
    strcpy(atom[31].electronic_configuration,"[Ar] 3d104s24p2");
    strcpy(atom[31].history,"Germanium was discovered by Clemens A. Winkler at Freiberg, Germany, in 1886. Its existence had been predicted by Mendeleev who predicted its atomic weight would be about 71 and that its density around 5.5 g/cm3. In September 1885 a miner working in the Himmelsfürst silver mine near Freiberg, came across an unusual ore. It was passed to Albin Weisbach at the nearby Mining Academy who certified it was a new mineral, and asked his colleague Winkler to analyse it. He found its composition to be 75% silver, 18% sulfur, and 7% he could not explain. By February 1886, he realised it was a new metal-like element and as its properties were revealed, it became clear that it was the missing element below silicon as Mendeleev had predicted. The mineral from which it came we know as argyrodite, Ag8GeS6.");
    atom[31].melting_point = 1211.4;
    atom[31].boiling_point = 3106;
    atom[31].ionic_radius = 0.53;
    atom[31].isotopes = 29;
    atom[31].electronegativity = 2.01;
    strcpy(atom[31].color,"Silvery-white");
    atom[31].group = 14;
    atom[31].period = 4;
    strcpy(atom[31].conductivity,"Thermal conductivity");
    strcpy(atom[31].luster,"Metallic");
    strcpy(atom[31].phase,"Solid ");
    atom[31].density = 5.3234 ;
    strcpy(atom[31].uses,"Germanium is a semiconductor. The pure element was commonly doped with arsenic, gallium or other elements and used as a transistor in thousands of electronic applications. Today, however, other semiconductors have replaced it. Germanium oxide has a high index of refraction and dispersion. This makes it suitable for use in wide-angle camera lenses and objective lenses for microscopes. This is now the major use for this element. Germanium is also used as an alloying agent (adding 1% germanium to silver stops it from tarnishing), in fluorescent lamps and as a catalyst.Both germanium and germanium oxide are transparent to infrared radiation and so are used in infrared spectroscopes.");
    strcpy(atom[31].image_path,"");


    strcpy(atom[32].name,"ARSENIC");        
    strcpy(atom[32].symbol,"As");        
    atom[32].atomic_number=33;        
    atom[32].atomic_weight=74.92;
    strcpy(atom[32].electronic_configuration,"[Ar] 3d104s24p3");
    strcpy(atom[32].history,"Arsenic was known to the ancient Egyptian, and is mentioned in one papyrus as a ways of gilding metals. The Greek philosopher Theophrastus knew of two arsenic sulfide minerals: orpiment (As2S3) and realgar (As4S4). The Chinese also knew about arsenic as the writings of Pen Ts’ao Kan-Mu. He compiled his great work on the natural world in the 1500s, during the Ming dynasty. He noted the toxicity associated with arsenic compounds and mentioned their use as pesticides in rice fields. A more dangerous form of arsenic, called white arsenic, has also been long known. This was the trioxide, As2O3, and was a by-product of copper refining. When this was mixed with olive oil and heated it yielded arsenic metal itself. The discovery of the element arsenic is attributed to Albertus Magnus in the 1200s.");
    atom[32].melting_point = 889;
    atom[32].boiling_point = 889;
    atom[32].ionic_radius = 0.58;
    atom[32].isotopes = 30;
    atom[32].electronegativity = 2.18;
    strcpy(atom[32].color,"Silver-grey");
    atom[32].group = 15;
    atom[32].period = 4;
    strcpy(atom[32].conductivity,"Thermal conductivity");
    strcpy(atom[32].luster,"Metallic");
    strcpy(atom[32].phase,"Solid");
    atom[32].density = 5.75;
    strcpy(atom[32].uses,"Arsenic is a well-known poison. Arsenic compounds are sometimes used as rat poisons and insecticides but their use is strictly controlled. Surprisingly, arsenic can also have medicinal applications. In Victorian times, Dr Fowler’s Solution (potassium arsenate dissolved in water) was a popular cure-all tonic that was even used by Charles Dickens. Today, organoarsenic compounds are added to poultry feed to prevent disease and improve weight gain. Arsenic is used as a doping agent in semiconductors (gallium arsenide) for solid-state devices. It is also used in bronzing, pyrotechnics and for hardening shot. Arsenic compounds can be used to make special glass and preserve wood.");
    strcpy(atom[32].image_path,"");


    strcpy(atom[33].name,"SELENIUM");        
    strcpy(atom[33].symbol,"Se");        
    atom[33].atomic_number=34;       
    atom[33].atomic_weight=78.96;
    strcpy(atom[33].electronic_configuration,"[Ar] 3d104s24p4 ");
    strcpy(atom[33].history,"Selenium was discovered by Jöns Jacob Berzelius at Stockholm in 1817. He had shares in a sulfuric acid works and he was intrigued by a red-brown sediment which collected at the bottom of the chambers in which the acid was made. At first he thought it was the element tellurium because it gave off a strong smell of radishes when heated, but he eventually realised that it was in fact a new element. He also noted that it was like sulfur and indeed had properties intermediate between sulfur and tellurium. Berzelius found that selenium was present in samples of tellurium and gave that element its characteristic smell. He also became affected by it personally – it can be absorbed through the skin – and it caused him to experience the bad breath associated with those who work with this element.");
    atom[33].melting_point = 494;
    atom[33].boiling_point = 958;
    atom[33].ionic_radius =  0.50;
    atom[33].isotopes = 11;
    atom[33].electronegativity = 2.55;
    strcpy(atom[33].color," silvery or red powder.");
    atom[33].group = 16;
    atom[33].period = 4;
    strcpy(atom[33].conductivity,"Thermal conductivity");
    strcpy(atom[33].luster,"Metallic");
    strcpy(atom[33].phase,"Solid ");
    atom[33].density = 4.809 ;
    strcpy(atom[33].uses,"The biggest use of selenium is as an additive to glass. Some selenium compounds decolourise glass, while others give a deep red colour. Selenium can also be used to reduce the transmission of sunlight in architectural glass, giving it a bronze tint. Selenium is used to make pigments for ceramics, paint and plastics. Selenium has both a photovoltaic action (converts light to electricity) and a photoconductive action (electrical resistance decreases with increased illumination). It is therefore useful in photocells, solar cells and photocopiers. It can also convert AC electricity to DC electricity, so is extensively used in rectifiers. Selenium is toxic to the scalp fungus that causes dandruff so it is used in some anti-dandruff shampoos. Selenium is also used as an additive to make stainless steel.");
    strcpy(atom[33].image_path,"");


    strcpy(atom[34].name,"BROMINE");        
    strcpy(atom[34].symbol,"Br");        
    atom[34].atomic_number=35;        
    atom[34].atomic_weight=79.90;
    strcpy(atom[34].electronic_configuration,"[Ar] 3d104s24p5 ");
    strcpy(atom[34].history,"Antoine-Jérôme Balard discovered bromine while investigating some salty water from Montpellier, France. He took the concentrated residue which remained after most of the brine had evaporated and passed chlorine gas into it. In so doing he liberated an orange-red liquid which he deduced was a new element. He sent an account of his findings to the French Academy’s journal in 1826. A year earlier, a student at Heidelberg, Carl Löwig, had brought his professor a sample of bromine which he had produced from the waters of a natural spring near his home at Keruznach. He was asked to produce more of it, and while he was doing so Balard published his results and so became known at its discoverer.");
    atom[34].melting_point = 266;
    atom[34].boiling_point = 332;
    atom[34].ionic_radius = 1.96;
    atom[34].isotopes = 79;
    atom[34].electronegativity = 2.96;
    strcpy(atom[34].color,"Deep-red");
    atom[34].group = 17;
    atom[34].period = 4;
    strcpy(atom[34].conductivity,"Very poor conductor of electricity");
    strcpy(atom[34].luster,"Shiny");
    strcpy(atom[34].phase,"Liquid ");
    atom[34].density = 3.1028;
    strcpy(atom[34].uses,"Bromine is used in many areas such as agricultural chemicals, dyestuffs, insecticides, pharmaceuticals and chemical intermediates. Some uses are being phased out for environmental reasons, but new uses continue to be found. Bromine compounds can be used as flame retardants. They are added to furniture foam, plastic casings for electronics and textiles to make them less flammable. However, the use of bromine as a flame retardant has been phased out in the USA because of toxicity concerns. Organobromides are used in halon fire extinguishers that are used to fight fires in places like museums, aeroplanes and tanks. Silver bromide is a chemical used in film photography.");
    strcpy(atom[34].image_path,"");
 

    strcpy(atom[35].name,"KRYPTON");        
    strcpy(atom[35].symbol,"Kr");        
    atom[35].atomic_number=36;        
    atom[35].atomic_weight=83.80;
    strcpy(atom[35].electronic_configuration,"[Ar] 3d104s24p6");
    strcpy(atom[35].history,"Having discovered the noble gas argon, extracted from air, William Ramsay and Morris William Travers of University College, London, were convinced this must be one of a new group of elements of the periodic table. They decided others were likely to be hidden in the argon and by a process of liquefaction and evaporation they hoped it might leave behind a heavier component, and it did. It yielded krypton in the afternoon of 30th May 1898, and they were able to isolate about 25 cm3 of the new gas. This they immediately tested in a spectrometer, and saw from its atomic spectrum that it was a new element.");
    atom[35].melting_point = 115.78;
    atom[35].boiling_point = 119.73;
    atom[35].ionic_radius = 1.16;
    atom[35].isotopes = 34;
    atom[35].electronegativity = 3.00;
    strcpy(atom[35].color,"Colorless");
    atom[35].group = 18;
    atom[35].period = 4;
    strcpy(atom[35].conductivity,"Thermal Conductivity");
    strcpy(atom[35].luster,"No luster");
    strcpy(atom[35].phase,"Gas");
    atom[35].density = 0.0034;
    strcpy(atom[35].uses,"Krypton is used commercially as a filling gas for energy-saving fluorescent lights. It is also used in some flash lamps used for high-speed photography. Unlike the lighter gases in its group, it is reactive enough to form some chemical compounds. For example, krypton will react with fluorine to form krypton fluoride. Krypton fluoride is used in some lasers. Radioactive krypton was used during the Cold War to estimate Soviet nuclear production. The gas is a product of all nuclear reactors, so the Russian share was found by subtracting the amount that came from Western reactors from the total in the air. From 1960 to 1983 the isotope krypton-86 was used to define the standard measure of length. One metre was defined as exactly 1,650,763.73 wavelengths of a line in the atomic spectrum of the isotope.");
    strcpy(atom[35].image_path,"");


    strcpy(atom[36].name,"RUBIDIUM");        
    strcpy(atom[36].symbol,"Rb");        
    atom[36].atomic_number=37;      
    atom[36].atomic_weight=85.46;
    strcpy(atom[36].electronic_configuration,"[Kr] 5s1 ");
    strcpy(atom[36].history,"The lithium potassium mineral lepidolite was discovered in the 1760s and it behaved oddly. When thrown on to glowing coals it frothed and then hardened like glass. Analysis showed it to contain lithium and potassium, but it held a secret: rubidium. In 1861, Robert Bunsen and Gustav Kirchhoff, of the University of Heidelberg, dissolved the ore in acid and then precipitated the potassium it contained which carried down another heavier alkali metal. By carefully washing this precipitate with boiling water they removed the more soluble potassium component and then confirmed that they really had a new element by examining the atomic spectrum of what remained. This showed two intense ruby red lines never seen before, indicating a new element, which they named after this colour. A sample of pure rubidium metal was eventually produced in 1928.");
    atom[36].melting_point = 312.45;
    atom[36].boiling_point = 961;
    atom[36].ionic_radius = 1.61;
    atom[36].isotopes = 36;
    atom[36].electronegativity = 0.82;
    strcpy(atom[36].color,"Silvery-white");
    atom[36].group = 1;
    atom[36].period = 5;
    strcpy(atom[36].conductivity,"Thermal Conductivity");
    strcpy(atom[36].luster,"Metallic");
    strcpy(atom[36].phase,"Solid ");
    atom[36].density = 1.53;
    strcpy(atom[36].uses,"Rubidium is little used outside research. It has been used as a component of photocells, to remove traces of oxygen from vacuum tubes and to make special types of glass. It is easily ionised so was considered for use in ion engines, but was found to be less effective than caesium. It has also been proposed for use as a working fluid for vapour turbines and in thermoelectric generators. Rubidium nitrate is sometimes used in fireworks to give them a purple colour.");
    strcpy(atom[36].image_path,"");


    strcpy(atom[37].name,"STRONTIUM");        
    strcpy(atom[37].symbol,"Sr");        
    atom[37].atomic_number=38;        
    atom[37].atomic_weight=87.62;
    strcpy(atom[37].electronic_configuration,"[Kr] 5s2");
    strcpy(atom[37].history,"In 1787, an unusual rock which had been found in a lead mine at Strontian, Scotland, was investigated by Adair Crawford, an Edinburgh doctor. He realised it was a new mineral containing an unknown ‘earth’ which he named strontia. In 1791, another Edinburgh man, Thomas Charles Hope, made a fuller investigation of it and proved it was a new element. He also noted that it caused the flame of a candle to burn red. Meanwhile Martin Heinrich Klaproth in Germany was working with the same mineral and he produced both strontium oxide and strontium hydroxide. Strontium metal itself was isolated in 1808 at the Royal Institution in London by Humphry Davy by means of electrolysis, using the method with which he had already isolated sodium and potassium.");
    atom[37].melting_point = 1050;
    atom[37].boiling_point = 1650;
    atom[37].ionic_radius = 0.113;
    atom[37].isotopes = 16;
    atom[37].electronegativity = 0.95;
    strcpy(atom[37].color,"Silver-white yellowish");
    atom[37].group = 2;
    atom[37].period = 5;
    strcpy(atom[37].conductivity,"Thermal Conductivity");
    strcpy(atom[37].luster,"Metallic");
    strcpy(atom[37].phase,"Solid");
    atom[37].density = 2.64 ;
    strcpy(atom[37].uses,"Strontium is best known for the brilliant reds its salts give to fireworks and flares. It is also used in producing ferrite magnets and refining zinc. Modern ‘glow-in-the-dark’ paints and plastics contain strontium aluminate. They absorb light during the day and release it slowly for hours afterwards. Strontium-90, a radioactive isotope, is a by-product of nuclear reactors and present in nuclear fallout. It has a half-life of 28 years. It is absorbed by bone tissue instead of calcium and can destroy bone marrow and cause cancer. However, it is also useful as it is one of the best high-energy beta-emitters known. It can be used to generate electricity for space vehicles, remote weather stations and navigation buoys. It can also be used for thickness gauges and to remove static charges from machinery handling paper or plastic.");
    strcpy(atom[37].image_path,"");


    strcpy(atom[38].name,"YTTRIUM");        
    strcpy(atom[38].symbol,"Y");        
    atom[38].atomic_number=39;        
    atom[38].atomic_weight=88.90;
    strcpy(atom[38].electronic_configuration,"[Kr] 4d15s2");
    strcpy(atom[38].history,"In 1787, Karl Arrhenius came across an unusual black rock in an old quarry at Ytterby, near Stockholm. He thought he had found a new tungsten mineral, and passed the specimen over to Johan Gadolin based in Finland. In 1794, Gadolin announced that it contained a new 'earth' which made up 38 per cent of its weight. It was called an’ earth’ because it was yttrium oxide, Y2O3, which could not be reduced further by heating with charcoal. The metal itself was first isolated in 1828 by Friedrich Wöhler and made by reacting yttrium chloride with potassium. Yet, yttrium was still hiding other elements. In 1843, Carl Mosander investigated yttrium oxide more thoroughly and found that it consisted of three oxides: yttrium oxide, which was white; terbium oxide, which was yellow; and erbium oxide, which was rose-coloured.");
    atom[38].melting_point = 1795;
    atom[38].boiling_point = 3618;
    atom[38].ionic_radius = 1.02;
    atom[38].isotopes = 60;
    atom[38].electronegativity = 1.22;
    strcpy(atom[38].color,"Silvery-metallic");
    atom[38].group = 3;
    atom[38].period = 5;
    strcpy(atom[38].conductivity,"Thermal Conductivity");
    strcpy(atom[38].luster,"Metallic");
    strcpy(atom[38].phase,"Solid");
    atom[38].density = 4.47;
    strcpy(atom[38].uses,"Yttrium is often used as an additive in alloys. It increases the strength of aluminium and magnesium alloys. It is also used in the making of microwave filters for radar and has been used as a catalyst in ethene polymerisation. Yttrium-aluminium garnet (YAG) is used in lasers that can cut through metals. It is also used in white LED lights. Yttrium oxide is added to the glass used to make camera lenses to make them heat and shock resistant. It is also used to make superconductors. Yttrium oxysulfide used to be widely used to produce red phosphors for old-style colour television tubes. The radioactive isotope yttrium-90 has medical uses. It can be used to treat some cancers, such as liver cancer.");
    strcpy(atom[38].image_path,"");


    strcpy(atom[39].name,"ZIRCONIUM");        
    strcpy(atom[39].symbol,"Zr");        
    atom[39].atomic_number=40;
    atom[39].atomic_weight=91.22;
    strcpy(atom[39].electronic_configuration,"[Kr] 4d25s2");
    strcpy(atom[39].history,"Gems that contain zirconium were known in ancient times as zircon. In 1789, the German chemist, Martin Klaproth analysed a zircon and separated zirconium in the form of its ‘earth’ zirconia, which is the oxide ZrO2. Klaproth failed to isolate the pure metal itself, and Humphry Davy also failed when he tried electrolysis in 1808. It was not until 1824 that the element was isolated, when the Swedish chemist Jöns Berzelius heated potassium hexafluorozirconate (K2ZrF6) with potassium metal and obtained some zirconium as a black powder. Totally pure zirconium was only produced in 1925 by the Dutch chemists Anton Eduard van Arkel and Jan Hendrik de Boer by the decomposition of zirconium tetraiodide (ZrI4)");
    atom[39].melting_point = 2127;
    atom[39].boiling_point = 4679;
    atom[39].ionic_radius = 0.84;
    atom[39].isotopes = 33;
    atom[39].electronegativity = 1.33;
    strcpy(atom[39].color,"Grayish-white");
    atom[39].group = 4;
    atom[39].period = 5;
    strcpy(atom[39].conductivity,"Thermal conductivity");
    strcpy(atom[39].luster,"Metallic");
    strcpy(atom[39].phase,"Solid");
    atom[39].density = 6.52;
    strcpy(atom[39].uses,"Zirconium does not absorb neutrons, making it an ideal material for use in nuclear power stations. More than 90% of zirconium is used in this way. Nuclear reactors can have more than 100,000 metres of zirconium alloy tubing. With niobium, zirconium is superconductive at low temperatures and is used to make superconducting magnets. Zirconium metal is protected by a thin oxide layer making it exceptionally resistant to corrosion by acids, alkalis and seawater. For this reason it is extensively used by the chemical industry. Zirconium(IV) oxide is used in ultra-strong ceramics. It is used to make crucibles that will withstand heat-shock, furnace linings, foundry bricks, abrasives and by the glass and ceramics industries. It is so strong that even scissors and knives can be made from it. It is also used in cosmetics, antiperspirants, food packaging and to make microwave filters.");
    strcpy(atom[39].image_path,"");


    strcpy(atom[40].name,"NIOBIUM");    
    strcpy(atom[40].symbol,"Nb");
    atom[40].atomic_number=41;
    atom[40].atomic_weight=92.90;
    strcpy(atom[40].electronic_configuration,"Kr 4d⁴ 5s¹");
    strcpy(atom[40].history,"Niobium was discovered in 1801 by Charles Hatchett in an ore called columbite sent to England in the 1750s by John Winthrop the Younger, the first goveror of Connecticut, USA.The metal niobium was first prepared in 1864 by Blomstrand, who reduced the chloride by heating it in a hydrogen atmosphere.");
    atom[40].melting_point = 2,477 ;
    atom[40].boiling_point = 4,927 ;
    atom[40].ionic_radius = 207 ;
    atom[40].isotopes = 18;
    atom[40].electronegativity = 1.6;
    strcpy(atom[40].color,"light grey");
    atom[40].group = 5;
    atom[40].period = 5;
    strcpy(atom[40].conductivity,"Thermal Conductivity");
    strcpy(atom[40].luster,"Metallic luster");
    strcpy(atom[40].phase,"Solid");
    atom[40].density = 8.57;
    strcpy(atom[40].uses,"Niobium is used in alloys including stainless steel. It improves the strength of the alloys, particularly at low temperatures. Alloys containing niobium are used in jet engines and rockets, beams and girders for buildings and oil rigs, and oil and gas pipelines. This element also has superconducting properties.");
    strcpy(atom[40].image_path,"");
	
    strcpy(atom[41].name,"MOLYBDENUM");
    strcpy(atom[41].symbol,"Mo");
    atom[41].atomic_number=42;       
    atom[41].atomic_weight=95.94;
    strcpy(atom[41].electronic_configuration,"[Kr] 4d₅ 5s₁");
    strcpy(atom[41].history," Molybdenum was discovered by Carl Welhelm Scheele, a Swedish chemist, in 1778 in a mineral known as molybdenite (MoS2) which had been confused as a lead compound. Molybdenum was isolated by Peter Jacob Hjelm in 1781. ");
    atom[41].melting_point = 2,623 ;
    atom[41].boiling_point = 4,639 ;
    atom[41].ionic_radius = 0.068;
    atom[41].isotopes = 7;
    atom[41].electronegativity = 2.16;
    strcpy(atom[41].color,"Silvery-grey ");
    atom[41].group = 6;
    atom[41].period = 5;
    strcpy(atom[41].conductivity,"Thermal and Electrical conductivity");
    strcpy(atom[41].luster,"Metallic luster");
    strcpy(atom[41].phase,"Solid");
    atom[41].density = 10.223;
    strcpy(atom[41].uses,"Molybdenum is primarily used as an alloying agent in steel.");
    strcpy(atom[41].image_path,"");
	
	
    strcpy(atom[42].name,"TECHNETIUM");      
    strcpy(atom[42].symbol,"Tc");        
    atom[42].atomic_number=43;       
    atom[42].atomic_weight=98.00;
    strcpy(atom[42].electronic_configuration,"Kr 4d5 5s2");
    strcpy(atom[42].history,"Technetium was discovered by Emilio Segrè in 1937 in Italy. He investigated molybdenum from California which had been exposed to high energy radiation and he found technetium to be present and separated it. Today, this element is extracted from spent nuclear fuel rods in tonne quantities.");
    atom[42].melting_point = 2,157  ;
    atom[42].boiling_point = 4,265 ;
    atom[42].ionic_radius = 205 ;
    atom[42].isotopes = 22;
    atom[42].electronegativity = 1.9;
    strcpy(atom[42].color," Silvery-grey");
    atom[42].group = 7;
    atom[42].period = 5;
    strcpy(atom[42].conductivity,"Thermal conductivity");
    strcpy(atom[42].luster,"Metallic lustre");
    strcpy(atom[42].phase,"Solid");
    atom[42].density = 11.5;
    strcpy(atom[42].uses,"Technetium-99m (metastable) is widely used for medical diagnostic studies. Several chemical forms are used to image different parts of the body. Technetium is a remarkable corrosion inhibitor for steel, and adding very small amounts can provide excellent protection.");
    strcpy(atom[42].image_path,"");
	
	
    strcpy(atom[43].name,"RUTHENIUM");        
    strcpy(atom[43].symbol,"Ru");        
    atom[43].atomic_number=44;        
    atom[43].atomic_weight=101.07;
    strcpy(atom[43].electronic_configuration,"[Kr] 4d7 5s1");
    strcpy(atom[43].history,"Ruthenium was discovered by Karl Karlovich Klaus, a Russian chemist, in 1844 while analyzing the residue of a sample of platinum ore obtained from the Ural mountains.Small amounts of ruthenium are added to platinum and palladium to strengthen them.");
    atom[43].melting_point = 2,334 ;
    atom[43].boiling_point = 4,150 ;
    atom[43].ionic_radius = 205 ;
    atom[43].isotopes = 7;
    atom[43].electronegativity = 2.2;
    strcpy(atom[43].color,"Silvery-white");
    atom[43].group = 8;
    atom[43].period = 5;
    strcpy(atom[43].conductivity,"Thermal Conductivity");
    strcpy(atom[43].luster,"Metallic Luster");
    strcpy(atom[43].phase,"Solid");
    atom[43].density = 12.2;
    strcpy(atom[43].uses,"Ruthenium oxide is used in the chemical industry to coat the anodes of electrochemical cells for chlorine production. Ruthenium is also used in catalysts for ammonia and acetic acid production. Ruthenium compounds can be used in solar cells, which turn light energy into electrical energy.");
    strcpy(atom[43].image_path,"");
	

    strcpy(atom[44].name,"RHODIUM");        
    strcpy(atom[44].symbol,"Rh");        
    atom[44].atomic_number=45;        
    atom[44].atomic_weight=102.90;
    strcpy(atom[44].electronic_configuration,"Kr 4d8 5s1");
    strcpy(atom[44].history,"Rhodium was discovered in 1803 by William Wollaston. He collaborated with Smithson Tennant in a commercial venture, part of which was to produce pure platinum for sale. The first step in the process was to dissolve ordinary platinum in aqua regia (nitric acid + hydrochloric acid).");
    atom[44].melting_point = 1,964 ;
    atom[44].boiling_point = 3,697 ;
    atom[44].ionic_radius = 200 ;
    atom[44].isotopes = 24;
    atom[44].electronegativity = 2.28;
    strcpy(atom[44].color,"Silver-white");
    atom[44].group = 9;
    atom[44].period = 5;
    strcpy(atom[44].conductivity,"Thermal Conductivity");
    strcpy(atom[44].luster,"Metallic luster");
    strcpy(atom[44].phase,"Gas");
    atom[44].density = 12.4;
    strcpy(atom[44].uses,"The major use of rhodium is in catalytic converters for cars (80%). It reduces nitrogen oxides in exhaust gases. Rhodium is also used as catalysts in the chemical industry, for making nitric acid, acetic acid and hydrogenation reactions.");
    strcpy(atom[44].image_path,"");
	
	
    strcpy(atom[45].name,"PALLADIUM");       
    strcpy(atom[45].symbol,"Pd");        
    atom[45].atomic_number=46;
    atom[45].atomic_weight=106.42;
    strcpy(atom[45].electronic_configuration,"[Kr] 4d¹⁰");
    strcpy(atom[45].history,"Palladium was discovered by William Hyde Wollaston, an English chemist, in 1803 while analyzing samples of platinum ore that were obtained from South America. ");
    atom[45].melting_point = 1,555 ;
    atom[45].boiling_point = 2,963 ;
    atom[45].ionic_radius = 163 ;
    atom[45].isotopes = 6;
    atom[45].electronegativity = 2.2;
    strcpy(atom[45].color,"Silver-white");
    atom[45].group = 10;
    atom[45].period = 5;
    strcpy(atom[45].conductivity,"Thermal conductivity");
    strcpy(atom[45].luster,"Metallic Luster");
    strcpy(atom[45].phase,"Solid");
    atom[45].density = 11.9;
    strcpy(atom[45].uses,"The largest use of palladium today is in catalytic converters. Palladium is also used in jewelry, dentistry, watch making, blood sugar test strips, aircraft spark plugs, surgical instruments, and electrical contacts. Palladium is also used to make professional transverse (concert or classical) flutes.");
    strcpy(atom[45].image_path,"");
	
	
    strcpy(atom[46].name,"SILVER");       
    strcpy(atom[46].symbol,"Ag");        
    atom[46].atomic_number=47;
    atom[46].atomic_weight=107.86;
    strcpy(atom[46].electronic_configuration,"[Kr] 4d¹⁰ 5s¹");
    strcpy(atom[46].history,"The first evidence of silver mining dates back to 3000 B.C., in Turkey and Greece, according to the RSC. Ancient people even figured out how to refine silver. ... The silver does not react to the air, but the base metals such as lead and copper oxidize and separate from the precious metal.");
    atom[46].melting_point = 961.8 ;
    atom[46].boiling_point = 2,162 ;
    atom[46].ionic_radius = 172 ;
    atom[46].isotopes = 2;
    atom[46].electronegativity = 1.93;
    strcpy(atom[46].color,"Silver or metallic gray ");
    atom[46].group = 11;
    atom[46].period = 5;
    strcpy(atom[46].conductivity,"Electric conductivity");
    strcpy(atom[46].luster,"Metallic luster");
    strcpy(atom[46].phase,"Solid");
    atom[46].density = 10.49 ;
    strcpy(atom[46].uses,"Silver is used for jewellery and silver tableware, where appearance is important. Silver is used to make mirrors, as it is the best reflector of visible light known, although it does tarnish with time. It is also used in dental alloys, solder and brazing alloys, electrical contacts and batteries.");
    strcpy(atom[46].image_path,"");
	
	
    strcpy(atom[47].name,"CADMIUM");       
    strcpy(atom[47].symbol,"Cd");       
    atom[47].atomic_number=48;       
    atom[47].atomic_weight=112.41;
    strcpy(atom[47].electronic_configuration,"[Kr] 4d105s2");
    strcpy(atom[47].history,"Cadmium was discovered in 1817 by a physician, Friedrich Stromeyer (1776-1835). The element was first found in the condensation of vapors (mixed with soot and zinc oxides) that rose out of a furnace in which zinc oxide was being roasted. Cadmium's discovery is also loosely attributed to K.S.L. Hermann and J.C.H.");
    atom[47].melting_point = 321 ;
    atom[47].boiling_point = 765  ;
    atom[47].ionic_radius = 158 ;
    atom[47].isotopes = 7;
    atom[47].electronegativity = 1.69;
    strcpy(atom[47].color,"Silvery white bluish ");
    atom[47].group = 12;
    atom[47].period = 5;
    strcpy(atom[47].conductivity,"Thermal conductivity");
    strcpy(atom[47].luster,"Metallic luster");
    strcpy(atom[47].phase,"Solid");
    atom[47].density = 8.65 ;
    strcpy(atom[47].uses,"Cadmium is used in Common industrial uses for cadmium today are in batteries, alloys, coatings (electroplating), solar cells, plastic stabilizers, and pigments.");
    strcpy(atom[47].image_path,"");
	
	
    strcpy(atom[48].name,"INDIUM");       
    strcpy(atom[48].symbol,"In");        
    atom[48].atomic_number=49;        
    atom[48].atomic_weight=114.81; 
    strcpy(atom[48].electronic_configuration,"Kr 4d10 5s2 5p1");
    strcpy(atom[48].history,"Indium was discovered in 1863 by Ferdinand Reich at the Freiberg School of Mines in Germany. ... However, because he was colour-blind he asked Hieronymous Richter to look at the spectrum, and he noted a brilliant violet line, and this eventually gave rise to the name indium, from the Latin word indicum meaning violet.");
    atom[48].melting_point = 156.6 ;
    atom[48].boiling_point = 2,072 ;
    atom[48].ionic_radius = 220 ;
    atom[48].isotopes = 2;
    atom[48].electronegativity = 1.78;
    strcpy(atom[48].color,"Silvery white");
    atom[48].group = 13;
    atom[48].period = 5;
    strcpy(atom[48].conductivity,"Thermal conductivity");
    strcpy(atom[48].luster,"Indium is a very soft, silvery-white metal. The metal has a brilliant luster and emits a high pitched sound when bent. ... Uses: Indium is used in low melting point alloys, bearing alloys, transistors, thermistors, photoconductors, and rectifiers.");
    strcpy(atom[48].phase,"Solid");
    atom[48].density = 7.31 ;
    strcpy(atom[48].uses,"Most indium is used to make indium tin oxide (ITO), which is an important part of touch screens, flatscreen TVs and solar panels. This is because it conducts electricity, bonds strongly to glass and is transparent. Indium nitride, phosphide and antimonide are semiconductors used in transistors and microchips.");
    strcpy(atom[48].image_path,"");
	
	
    strcpy(atom[49].name,"TIN");
    strcpy(atom[49].symbol,"Sn");        
    atom[49].atomic_number=50;        
    atom[49].atomic_weight=118.71;
    strcpy(atom[49].electronic_configuration,"[Kr] 5s²4d¹⁰5p²");
    strcpy(atom[49].history,"Tin was first used in 3500 BC in the city of Ur in southern Mesopotamia, now known as Iraq. The natives of Iran made articles from bronze, which is an alloy of tin and copper. ... When tin undergoes mining, it becomes a silvery metal that is used for the resistance to corrosion.");
    atom[49].melting_point = 231.9;
    atom[49].boiling_point = 2,602;
    atom[49].ionic_radius = 225;
    atom[49].isotopes = 10;
    atom[49].electronegativity = 1.96;
    strcpy(atom[49].color,"Silvery white");
    atom[49].group = 14;
    atom[49].period = 5;
    strcpy(atom[49].conductivity,"Electrical Conductivity");
    strcpy(atom[49].luster,"Metallic luster");
    strcpy(atom[49].phase,"Solid");
    atom[49].density =5.679;
    strcpy(atom[49].uses,"Tin has many uses. It takes a high polish and is used to coat other metals to prevent corrosion, such as in tin cans, which are made of tin-coated steel. Alloys of tin are important, such as soft solder, pewter, bronze and phosphor bronze. A niobium-tin alloy is used for superconducting magnets.");
    strcpy(atom[49].image_path,"");
	
	
    strcpy(atom[50].name,"ANTIMONY");       
    strcpy(atom[50].symbol,"Sb");      
    atom[50].atomic_number=51;      
    atom[50].atomic_weight=121.76;
    strcpy(atom[50].electronic_configuration,"[Kr] 4d10 5s2 5p3");
    strcpy(atom[50].history,"Antimony has been known since ancient times. It is sometimes found free in nature, but is usually obtained from the ores stibnite (Sb2S3) and valentinite (Sb2O3). Nicolas Lémery, a French chemist, was the first person to scientifically study antimony and its compounds. He published his findings in 1707.");
    atom[50].melting_point = 630.6;
    atom[50].boiling_point = 1,587;
    atom[50].ionic_radius = 206;
    atom[50].isotopes = 2;
    atom[50].electronegativity = 2.05;
    strcpy(atom[50].color,"Silvery");
    atom[50].group = 15;
    atom[50].period = 5;
    strcpy(atom[50].conductivity,"Thermal conductivity");
    strcpy(atom[50].luster,"Metallic luster");
    strcpy(atom[50].phase,"Solid");
    atom[50].density = 6.691;
    strcpy(atom[50].uses,"A lead-antimony alloy is used in batteries. Other uses of antimony alloys include type metal (in printing presses), bullets and cable sheathing. Antimony compounds are used to make flame-retardant materials, paints, enamels, glass and pottery.");
    strcpy(atom[50].image_path,"");
	
	
    strcpy(atom[51].name,"TELLURIUM");      
    strcpy(atom[51].symbol,"Te");       
    atom[51].atomic_number=52;        
    atom[51].atomic_weight=127.60;
    strcpy(atom[51].electronic_configuration,"[Kr] 4d10 5s2 5p4");
    strcpy(atom[51].history,"Tellurium was discovered in 1783 by Franz Joseph Müller von Reichenstein at Sibiu, Romania. He became intrigued by ore from a mine near Zalatna which had a metallic sheen and which he suspected was native antimony or bismuth. ... Klaproth produced a pure sample and decided to call it tellurium.");
    atom[51].melting_point = 449.5;
    atom[51].boiling_point = 987.8;
    atom[51].ionic_radius = 210;
    atom[51].isotopes = 8;
    atom[51].electronegativity = 2.1;
    strcpy(atom[51].color,"Silvery white");
    atom[51].group = 16;
    atom[51].period = 5;
    strcpy(atom[51].conductivity,"Thermal conductivity");
    strcpy(atom[51].luster,"Metallic luster");
    strcpy(atom[51].phase,"Solid");
    atom[51].density = 6.24;
    strcpy(atom[51].uses,"Tellurium has been used to vulcanise rubber, to tint glass and ceramics, in solar cells, in rewritable CDs and DVDs and as a catalyst in oil refining. It can be doped with silver, gold, copper or tin in semiconductor applications.");
    strcpy(atom[51].image_path,"");
	
	
    strcpy(atom[52].name,"IODINE");        
    strcpy(atom[52].symbol,"I");       
    atom[52].atomic_number=53;      
    atom[52].atomic_weight=126.90;
    strcpy(atom[52].electronic_configuration,"[Kr] 4d10 5s2 5p5");
    strcpy(atom[52].history,"Iodine was discovered by the French chemist Barnard Courtois in 1811. Courtois was extracting sodium and potassium compounds from seaweed ash. ... Iodine is part of thyroxin, a hormone produced by the thyroid gland that controls the body's rate of physical and mental development.");
    atom[52].melting_point = 113.7;
    atom[52].boiling_point = 184.3;
    atom[52].ionic_radius = 198;
    atom[52].isotopes = 34;
    atom[52].electronegativity = 2.66;
    strcpy(atom[52].color,"Black");
    atom[52].group = 17;
    atom[52].period = 5;
    strcpy(atom[52].conductivity,"Thermal conductivity");
    strcpy(atom[52].luster,"Metallic luster");
    strcpy(atom[52].phase,"Solid");
    atom[52].density = 4.93;
    strcpy(atom[52].uses,"Iodine has many commercial uses. Iodide salts are used in pharmaceuticals and disinfectants, printing inks and dyes, catalysts, animal feed supplements and photographic chemicals. Iodine is also used to make polarising filters for LCD displays.");
    strcpy(atom[52].image_path,"");
	
	
    strcpy(atom[53].name,"XENON");      
    strcpy(atom[53].symbol,"Xe");       
    atom[53].atomic_number=54;
    atom[53].atomic_weight=131.29;
    strcpy(atom[53].electronic_configuration,"[Kr] 4d¹⁰ 5s² 5p⁶");
    strcpy(atom[53].history," Xenon was discovered in July 1898 by William Ramsay and Morris Travers at University College London. They had already extracted neon, argon, and krypton from liquid air, and wondered if it contained other gases");
    atom[53].melting_point = -111.8;
    atom[53].boiling_point = -108.1;
    atom[53].ionic_radius = 216;
    atom[53].isotopes = 9;
    atom[53].electronegativity = 2.6;
    strcpy(atom[53].color,"Colorless");
    atom[53].group = 18;
    atom[53].period = 5;
    strcpy(atom[53].conductivity,"Thermal conductivity");
    strcpy(atom[53].luster,"No luster");
    strcpy(atom[53].phase,"Gas");
    atom[53].density = 5.887;
    strcpy(atom[53].uses,"Xenon is used in certain specialised light sources. It produces a beautiful blue glow when excited by an electrical discharge. Xenon lamps have applications as high-speed electronic flash bulbs used by photographers, sunbed lamps and bactericidal lamps used in food preparation and processing.");
    strcpy(atom[53].image_path,"");
	
	
    strcpy(atom[54].name,"CESIUM");    
    strcpy(atom[54].symbol,"Cs");     
    atom[54].atomic_number=55;     
    atom[54].atomic_weight=132.906;
    strcpy(atom[54].electronic_configuration,"[Xe] 6s1");
    strcpy(atom[54].history,"Cesium was discovered by Robert Wilhelm Bunsen and Gustav Robert Kirchhoff, German chemists, in 1860 through the spectroscopic analysis of Durkheim mineral water. They named cesium after the blue lines they observed in its spectrum. ... Cesium is recovered from cesium azide by heating it.");
    atom[54].melting_point = 28.44;
    atom[54].boiling_point = 670.8;
    atom[54].ionic_radius = 343;
    atom[54].isotopes = 40;
    atom[54].electronegativity = 0.79;
    strcpy(atom[54].color,"Pale gold");
    atom[54].group = 1;
    atom[54].period = 6;
    strcpy(atom[54].conductivity,"Thermal conductivity");
    strcpy(atom[54].luster,"Metallic luster");
    strcpy(atom[54].phase,"Solid");
    atom[54].density = 1.9;
    strcpy(atom[54].uses,"The most common use for caesium compounds is as a drilling fluid. They are also used to make special optical glass, as a catalyst promoter, in vacuum tubes and in radiation monitoring equipment. One of its most important uses is in the 'caesium clock' (atomic clock).");
    strcpy(atom[54].image_path,"");
	
	
    strcpy(atom[55].name,"BARIUM");       
    strcpy(atom[55].symbol,"Ba");      
    atom[55].atomic_number=56;       
    atom[55].atomic_weight=137.372;
    strcpy(atom[55].electronic_configuration,"[Xe] 6s2");
    strcpy(atom[55].history,"Barium was first isolated by electrolysis of molten barium salts in 1808 by Sir Humphry Davy in England. Davy, by analogy with calcium, named 'barium' after baryta, with the '-ium' ending signifying a metallic element.");
    atom[55].melting_point = 727;
    atom[55].boiling_point = 1,897;
    atom[55].ionic_radius = 268;
    atom[55].isotopes = 6;
    atom[55].electronegativity = 0.89;
    strcpy(atom[55].color,"Silvery-white");
    atom[55].group = 2;
    atom[55].period = 6;
    strcpy(atom[55].conductivity,"Thermal conductivity");
    strcpy(atom[55].luster,"silvery white lustre");
    strcpy(atom[55].phase,"Solid");
    atom[55].density = 3.5;
    strcpy(atom[55].uses,"Barium is often used for spark-plug electrodes and in vacuum tubes as a drying and oxygen-removing agent.Its compounds are used by oil and gas industries to make drilling mud. ...Barium compounds are also used to make paint, bricks, tiles, glass, and rubber.Barium nitrate and chlorate give fireworks a green colour.");
    strcpy(atom[55].image_path,"");
	
	
    strcpy(atom[56].name,"LANTHANUM");   
    strcpy(atom[56].symbol,"La");     
    atom[56].atomic_number=57;      
    atom[56].atomic_weight=138.906;
    strcpy(atom[56].electronic_configuration,"[Xe] 5d¹ 6s²");
    strcpy(atom[56].history,"Lanthanum was discovered in January 1839 by Carl Gustav Mosander at the Karolinska Institute, Stockholm. He extracted it from cerium which had been discovered in 1803. ... Finally, Mosander explained his delay, saying that he had extracted a second element from cerium, and this he called didymium.");
    atom[56].melting_point = 920;
    atom[56].boiling_point = 3,464;
    atom[56].ionic_radius = 250;
    atom[56].isotopes = 38;
    atom[56].electronegativity = 1.1;
    strcpy(atom[56].color,"Silvery white");
    atom[56].group = 3;
    atom[56].period = 6;
    strcpy(atom[56].conductivity,"Thermal conductivity");
    strcpy(atom[56].luster,"Metallic luster");
    strcpy(atom[56].phase,"Solid");
    atom[56].density = 6.18;
    strcpy(atom[56].uses,"The chemical Lanthanum is found in modern television sets, the energy saving lamps, fluorescent tubes, etc.It is used in the field of optics as lenses and radiation absorbing glasses.It is known to increase the resistivity and malleability of steel.It is also used for catalysis in the field of petroleum refineries.");
    strcpy(atom[56].image_path,"");
	

    strcpy(atom[57].name,"CERIUM");
    strcpy(atom[57].symbol,"Ce");      
    atom[57].atomic_number=58;      
    atom[57].atomic_weight=140.116;
    strcpy(atom[57].electronic_configuration,"[Xe] 4f¹ 5d¹ 6s²");
    strcpy(atom[57].history,"Cerium as the oxide (ceria) was discovered in 1803 by Swedish chemists Jöns Jacob Berzelius and Wilhelm Hisinger, working together, and independently by German chemist Martin Klaproth. It was named after the asteroid Ceres, which was discovered in 1801. Cerium occurs in bastnasite, monazite, and many other minerals.");
    atom[57].melting_point = 795;
    atom[57].boiling_point = 3,443;
    atom[57].ionic_radius = 248;
    atom[57].isotopes = 4;
    atom[57].electronegativity = 1.12;
    strcpy(atom[57].color,"Iron-gray ");
    atom[57].group = 3;
    atom[57].period = 6;
    strcpy(atom[57].conductivity,"Thermal Conductivity");
    strcpy(atom[57].luster,"Metallic luster");
    strcpy(atom[57].phase,"Solid");
    atom[57].density = 6.76;
    strcpy(atom[57].uses,"Cerium is the key component of mischmetal alloy which is used in flints for cigarette lighters.Used in the manufacture of arc lamps, incandescent mantles for gas lighting.Acts as a catalyst in the conversion process of nitrogen oxide to nitrogen.Cerium sulfide is used as a pigment as it has a rich red color.");
    strcpy(atom[57].image_path,"");
	
	
    strcpy(atom[58].name,"PRASEODYMIUM");       
    strcpy(atom[58].symbol,"Pr");	
    atom[58].atomic_number=59;
    atom[58].atomic_weight=140.906;
    strcpy(atom[58].electronic_configuration,"[Xe] 4f3 6s2");
    strcpy(atom[58].history,"Praseodymium was discovered by Carl F. Auer von Welsbach, an Austrian chemist, in 1885. He separated praseodymium, as well as the element neodymium, from a material known as didymium.Praseodymium's primary use is as an alloying agent with magnesium to create high-strength metals that are used in aircraft engines.");
    atom[58].melting_point = 931;
    atom[58].boiling_point = 3,512;
    atom[58].ionic_radius = 247;
    atom[58].isotopes = 38;
    atom[58].electronegativity = 1.13;
    strcpy(atom[58].color,"Green");
    atom[58].group = 0;
    atom[58].period = 6;
    strcpy(atom[58].conductivity,"Thermal and Electrical Conductivity");
    strcpy(atom[58].luster,"Metallic luster");
    strcpy(atom[58].phase,"Solid");
    atom[58].density = 6.8;
    strcpy(atom[58].uses,"Praseodymium is used in a variety of alloys. The high-strength alloy it forms with magnesium is used in aircraft engines. Mischmetal is an alloy containing about 5% praseodymium and is used to make flints for cigarette lighters. Praseodymium is also used in alloys for permanent magnets.");
    strcpy(atom[58].image_path,"");
	
	strcpy(atom[59].name,"NEODYMIUM");
    strcpy(atom[59].symbol,"Nd");
    atom[59].atomic_number=60;
    atom[59].atomic_weight=144.240;
    strcpy(atom[59].electronic_configuration,"[Xe] 4f⁴ 6s²");
    strcpy(atom[59].history,"Neodymium was discovered in Vienna in 1885 by Karl Auer. Its story began with the discovery of cerium, from which Carl Gustav Mosander extracted didymium in 1839. This turned out to be a mixture of lanthanoid elements, and in 1879, samarium was extracted from didymium, followed a year later by gadolinium.");
    atom[59].melting_point = 1016;
    atom[59].boiling_point = 3074;
    atom[59].ionic_radius = 229;
    atom[59].isotopes = 7;
    atom[59].electronegativity = 1.14;
    strcpy(atom[59].color,"Silvery-white ");
    atom[59].group = 0;
    atom[59].period = 6;
    strcpy(atom[59].conductivity,"Thermal conductivity");
    strcpy(atom[59].luster,"Metallic luster");
    strcpy(atom[59].phase,"Solid");
    atom[59].density = 7.0;
    strcpy(atom[59].uses,"Neodymium is used with iron and boron to create powerful permanent magnets, also called NIB magnets. NIB magnets are used in computers, cell phones, medical equipment, toys, motors, wind turbines and audio systems. Neodymium is used as a crystal (neodymium-doped yttrium aluminum garnet) in lasers.");
    strcpy(atom[59].image_path,"");
	
	
    strcpy(atom[60].name,"PROMETHIUM");
    strcpy(atom[60].symbol,"Pm");	
    atom[60].atomic_number=61;
    atom[60].atomic_weight=145.000;
    strcpy(atom[60].electronic_configuration,"Xe 4f5 6s2");
    strcpy(atom[60].history,"Promethium is a chemical element with the symbol Pm and atomic number 61. All of its isotopes are radioactive; it is extremely rare, with only about 500–600 grams naturally occurring in Earth's crust at any given time. Promethium is one of only two radioactive elements that are followed in the periodic table by elements with stable forms, the other being technetium. Chemically, promethium is a lanthanide. Promethium shows only one stable oxidation state of +3.");
    atom[60].melting_point = 1,042;
    atom[60].boiling_point = 3,000;
    atom[60].ionic_radius = 243;
    atom[60].isotopes = 38;
    atom[60].electronegativity = 1.13;
    strcpy(atom[60].color," Silvery-white");
    atom[60].group = 0;
    atom[60].period = 6;
    strcpy(atom[60].conductivity,"Thermal conductivity");
    strcpy(atom[60].luster,"Metallic luster");
    strcpy(atom[60].phase,"Solid");
    atom[60].density = 7.26;
    strcpy(atom[60].uses,"Promethium is used in specialised atomic batteries. These are roughly the size of a drawing pin and are used for pacemakers, guided missiles and radios. The radioactive decay of promethium is used to make a phosphor give off light and this light is converted into electricity by a solar cell.");
    strcpy(atom[60].image_path,"");
	
	
    strcpy(atom[61].name,"SAMARIUM");
    strcpy(atom[61].symbol,"Sm");	
    atom[61].atomic_number=62;	
    atom[61].atomic_weight=150.3;
    strcpy(atom[61].electronic_configuration,"[Xe] 4f⁶ 6s²");
    strcpy(atom[61].history,"Samarium was discovered in 1879 by the French chemist Paul-Émile Lecoq de Boisbaudran and named after the mineral samarskite from which it was isolated. ... Although classified as a rare-earth element, samarium is the 40th most abundant element in the Earth's crust and is more common than metals such as tin.");
    atom[61].melting_point = 1,072;
    atom[61].boiling_point = 1,794;
    atom[61].ionic_radius = 242;
    atom[61].isotopes = 7;
    atom[61].electronegativity = 1.17;
    strcpy(atom[61].color,"Silvery white");
    atom[61].group = 0;
    atom[61].period = 6;
    strcpy(atom[61].conductivity,"Thermal conductivity");
    strcpy(atom[61].luster,"Silver luster ");
    strcpy(atom[61].phase,"Solid");
    atom[61].density = 7.520;
    strcpy(atom[61].uses,"Samarium is used to dope calcium chloride crystals for use in optical lasers. It is also used in infrared absorbing glass and as a neutron absorber in nuclear reactors. Samarium oxide finds specialised use in glass and ceramics.");
    strcpy(atom[61].image_path,"");
	
	
    strcpy(atom[62].name,"EUROPIUM");
    strcpy(atom[62].symbol,"Eu");	
    atom[62].atomic_number=63;	
    atom[62].atomic_weight=151.96;
    strcpy(atom[62].electronic_configuration,"Xe 4f7 6s2");
    strcpy(atom[62].history,"Europium was discovered by Eugène-Antole Demarçay, a French chemist, in 1896. Demarçay suspected that samples of a recently discovered element, samarium, were contaminated with an unknown element. He was able to produce reasonably pure europium in 1901. ... Europium is the most reactive of the rare earth elements.");
    atom[62].melting_point = 1522;
    atom[62].boiling_point = 2510;
    atom[62].ionic_radius = 240;
    atom[62].isotopes = 2;
    atom[62].electronegativity = 1.2;
    strcpy(atom[62].color,"Silvery-white");
    atom[62].group = 0;
    atom[62].period = 6;
    strcpy(atom[62].conductivity,"Electrical Conductivity");
    strcpy(atom[62].luster,"Metallic luster");
    strcpy(atom[62].phase,"Solid");
    atom[62].density = 5.25;
    strcpy(atom[62].uses,"Europium is excellent at absorbing neutrons, making it valuable in control rods for nuclear reactors. Europium-doped plastic has been used as a laser material. It is also used in making thin super-conducting alloys.");
    strcpy(atom[62].image_path,"");
	
	
    strcpy(atom[63].name,"GADOLINIUM");	
    strcpy(atom[63].symbol,"Gd");	
    atom[63].atomic_number=64;	
    atom[63].atomic_weight=157.25;
    strcpy(atom[63].electronic_configuration,"Xe 4f7 5d1 6s2");
    strcpy(atom[63].history,"Gadolinium was discovered in 1880 by Charles Galissard de Marignac at Geneva. ... In 1880, Marignac extracted yet another new rare earth from didymium, as did Paul-Émile Lecoq de Boisbaudran in 1886, and it was the latter who called it gadolinium.");
    atom[63].melting_point = 1313;
    atom[63].boiling_point = 3272;
    atom[63].ionic_radius = 238;
    atom[63].isotopes = 17;
    atom[63].electronegativity = 1.2;
    strcpy(atom[63].color,"Silvery-white");
    atom[63].group = 0;
    atom[63].period = 6;
    strcpy(atom[63].conductivity,"Thermal conductivity");
    strcpy(atom[63].luster,"Metallic luster");
    strcpy(atom[63].phase,"Solid");
    atom[63].density = 7.9;
    strcpy(atom[63].uses,"Gadolinium is an extensively used element as a contrast agent to enhance the MRI imaging. Nine different gadolinium chelates have been approved by the FDA so far. Nephrogenic systemic fibrosis (NSF) is the main toxic effect caused by the gadolinium-based contrast agents.");
    strcpy(atom[63].image_path,"");
	
	
    strcpy(atom[64].name,"SAMARIUM");	
    strcpy(atom[64].symbol,"Sm");	
    atom[64].atomic_number=65;	
    atom[64].atomic_weight=150.36;
    strcpy(atom[64].electronic_configuration,"[Xe] 4f⁶ 6s²");
    strcpy(atom[64].history,"Samarium was discovered in 1879 by the French chemist Paul-Émile Lecoq de Boisbaudran and named after the mineral samarskite from which it was isolated. ... Although classified as a rare-earth element, samarium is the 40th most abundant element in the Earth's crust and is more common than metals such as tin.");
    atom[64].melting_point = 1072;
    atom[64].boiling_point = 1794;
    atom[64].ionic_radius = 242;
    atom[64].isotopes = 7;
    atom[64].electronegativity = 1.17;
    strcpy(atom[64].color,"Silvery white");
    atom[64].group = 0;
    atom[64].period = 6;
    strcpy(atom[64].conductivity,"Thermal conductivity");
    strcpy(atom[64].luster,"Silver luster");
    strcpy(atom[64].phase,"Solid");
    atom[64].density = 7.520;
    strcpy(atom[64].uses,"Samarium is used to dope calcium chloride crystals for use in optical lasers. It is also used in infrared absorbing glass and as a neutron absorber in nuclear reactors. Samarium oxide finds specialised use in glass and ceramics.");
    strcpy(atom[64].image_path,"");
	
	
    strcpy(atom[65].name,"DYSPROSIUM");	
    strcpy(atom[65].symbol,"Dy");
    atom[65].atomic_number=66;	
    atom[65].atomic_weight=162.50;
    strcpy(atom[65].electronic_configuration,"Xe 4f10 6s2");
    strcpy(atom[65].history,"Dysprosium was discovered in 1886 by Paul-Émile Lecoq de Boisbaudran in Paris. Its discovery came as a result of research into yttrium oxide, first made in 1794, and from which other rare earths (aka lanthanoids) were subsequently to be extracted, namely erbium in 1843, then holmium in 1878, and finally dysprosium.");
    atom[65].melting_point = 1412;
    atom[65].boiling_point = 2567;
    atom[65].ionic_radius = 235;
    atom[65].isotopes = 7;
    atom[65].electronegativity = 1.22;
    strcpy(atom[65].color,"Silvery white");
    atom[65].group = 0;
    atom[65].period = 6;
    strcpy(atom[65].conductivity,"Thermal Conductivity");
    strcpy(atom[65].luster,"Bright silver luster");
    strcpy(atom[65].phase,"Solid");
    atom[65].density = 8.551;
    strcpy(atom[65].uses,"Dysprosium is used, in conjunction with vanadium and other elements, in making laser materials and commercial lighting. Because of dysprosium's high thermal-neutron absorption cross-section, dysprosium-oxide–nickel cermets are used in neutron-absorbing control rods in nuclear reactors.");
    strcpy(atom[65].image_path,"");
	
	
    strcpy(atom[66].name,"HOLMINM");
    strcpy(atom[66].symbol,"Ho");	
    atom[66].atomic_number=67;	
    atom[66].atomic_weight=164.93;
    strcpy(atom[66].electronic_configuration,"Xe 4f11 6s2");
    strcpy(atom[66].history,"Holmium was discovered at Geneva in 1878 by Marc Delafontaine and Louis Soret, and independently by Per Teodor Cleve at Uppsala, Sweden. ... He separated holmium from erbium in 1878. Delafontaine and Soret also extracted it from the same source, having seen unexplained lines in the atomic spectrum.");
    atom[66].melting_point = 1472;
    atom[66].boiling_point = 2695;
    atom[66].ionic_radius = 233;
    atom[66].isotopes = 36;
    atom[66].electronegativity = 1.23;
    strcpy(atom[66].color,"Silvery white");
    atom[66].group = 0;
    atom[66].period = 6;
    strcpy(atom[66].conductivity,"Thermal Conductivity");
    strcpy(atom[66].luster,"Silvery luster");
    strcpy(atom[66].phase,"Solid");
    atom[66].density = 8.8;
    strcpy(atom[66].uses,"Holmium alloys are used as a magnetic flux concentrator to create the strongest artificially-generated magnetic fields. It is also used in nuclear reactors for nuclear control rods. Holmium oxide is used as yellow gas colouring.");
    strcpy(atom[66].image_path,"");
	
	
    strcpy(atom[67].name,"ERBIUM");	
    strcpy(atom[67].symbol,"Er");
    atom[67].atomic_number=68;	
    atom[67].atomic_weight=167.25;
    strcpy(atom[67].electronic_configuration,"Xe 4f12 6s2");
    strcpy(atom[67].history,"Erbium (for Ytterby, a village in Sweden) was discovered by Carl Gustaf Mosander in 1843. ... He discovered that the sample contained at least two metal oxides in addition to pure yttria, which he named 'erbia' and 'terbia' after the village of Ytterby where the gadolinite had been found.");
    atom[67].melting_point = 1529;
    atom[67].boiling_point = 2867;
    atom[67].ionic_radius = 232;
    atom[67].isotopes = 6;
    atom[67].electronegativity = 1.24;
    strcpy(atom[67].color,"Silvery-white");
    atom[67].group = 0;
    atom[67].period = 6;
    strcpy(atom[67].conductivity,"Thermal conductivity");
    strcpy(atom[67].luster,"Metallic luster");
    strcpy(atom[67].phase,"Solid");
    atom[67].density = 9.2;
    strcpy(atom[67].uses,"Erbium isotopes are good neutron absorbers and are used in nuclear reactor control rods. The oxide erbia is used as a pink coloring agent in glazes and glasses. Erbium is used in alloys especially with vanadium to decrease the hardness of metals. It is also used in amplifiers and lasers.");
    strcpy(atom[67].image_path,"");
	
	
    strcpy(atom[68].name,"THULIUM");	
    strcpy(atom[68].symbol,"Tm");	
    atom[68].atomic_number=69;
    atom[68].atomic_weight=168.93;
    strcpy(atom[68].electronic_configuration,"Xe 4f13 6s2");
    strcpy(atom[68].history,"Thulium was first isolated in 1879 as its oxide by Per Teodor Cleve at the University of Uppsala, Sweden. The discoveries of the many rare earth elements (aka lanthanoid) began with yttrium in 1794. This was contaminated with these chemically similar elements.");
    atom[68].melting_point = 1545;
    atom[68].boiling_point = 1730;
    atom[68].ionic_radius = 230;
    atom[68].isotopes = 35;
    atom[68].electronegativity = 1.25;
    strcpy(atom[68].color,"Silvery-gray");
    atom[68].group = 0;
    atom[68].period = 6;
    strcpy(atom[68].conductivity,"Thermal Conductivity");
    strcpy(atom[68].luster,"Silvery-gray luster");
    strcpy(atom[68].phase,"Solid");
    atom[68].density = 9.3;
    strcpy(atom[68].uses,"Thulium has been used to create lasers. When stable thulium (Tm-169) is bombarded in a nuclear reactor it can later serve as a radiation source in portable X-ray devices. It also has potential use in ceramic magnetic materials called ferrites, which are used in microwave equipment.");
    strcpy(atom[68].image_path,"");
	
	
    strcpy(atom[69].name,"YTTERBIUM");
    strcpy(atom[69].symbol,"Yb");
    atom[69].atomic_number=70;	
    atom[69].atomic_weight=173.04;
    strcpy(atom[69].electronic_configuration,"Xe 4f14 6s2");
    strcpy(atom[69].history,"Ytterbium was isolated in 1878 by Jean Charles Galissard de Marignac at the University of Geneva. The story began with yttrium, discovered in 1794, which was contaminated with other rare-earth elements (aka lanthanoids).Even this was eventually shown to contain another rare earth, lutetium, in 1907.");
    atom[69].melting_point = 824;
    atom[69].boiling_point = 1196;
    atom[69].ionic_radius = 228;
    atom[69].isotopes = 7;
    atom[69].electronegativity = 1.1;
    strcpy(atom[69].color,"Silvery white");
    atom[69].group = 0;
    atom[69].period = 6;
    strcpy(atom[69].conductivity,"Thermal conductivity");
    strcpy(atom[69].luster,"Silver luster");
    strcpy(atom[69].phase,"Solid");
    atom[69].density = 7;
    strcpy(atom[69].uses,"Ytterbium clocks are the World's most stable atomic clock.It is used as a doping agent to improve the strength, grain refinement and mechanical properties of stainless steel.It also acts as an industrial catalyst.Few alloys of Ytterbium are used in dentistry.");
    strcpy(atom[69].image_path,"");
	
	
    strcpy(atom[70].name,"LUTETIUM");
    strcpy(atom[70].symbol,"Lu");
    atom[70].atomic_number=71;	
    atom[70].atomic_weight=174.96;
    strcpy(atom[70].electronic_configuration,"Xe 4f14 5d1 6s2");
    strcpy(atom[70].history,"Lutetium was discovered in 1907–08 by Austrian chemist Carl Auer von Welsbach and Georges Urbain, working independently. Urbain derived the name for the element from Lutetia, the ancient Roman name for Paris, to honour his native city.Lutetium is also found in the products of nuclear fission.");
    atom[70].melting_point = 1663;
    atom[70].boiling_point = 3402;
    atom[70].ionic_radius = 227;
    atom[70].isotopes = 2;
    atom[70].electronegativity = 1.27;
    strcpy(atom[70].color,"Silvery white");
    atom[70].group = 0;
    atom[70].period = 6;
    strcpy(atom[70].conductivity,"Thermal Conductivity");
    strcpy(atom[70].luster,"Metallic luster");
    strcpy(atom[70].phase,"Solid");
    atom[70].density = 9.7;
    strcpy(atom[70].uses,"Lutetium oxide is used to make catalysts for cracking hydrocarbons in the petrochemical industry. Lu is used in cancer therapy and because of its long half-life, 176Lu is used to date the age of meteorites. Lutetium oxyorthosilicate (LSO) is currently used in detectors in positron emission tomography (PET).");
    strcpy(atom[70].image_path,"");
	
	
    strcpy(atom[71].name,"HAFNIUM");
    strcpy(atom[71].symbol,"Hf");	
    atom[71].atomic_number=72; 	
    atom[71].atomic_weight=178.49;
    strcpy(atom[71].electronic_configuration,"[Xe] 4f¹⁴ 5d² 6s²");
    strcpy(atom[71].history,"Hafnium is a chemical element with the symbol Hf and atomic number 72. A lustrous, silvery gray, tetravalent transition metal, hafnium chemically resembles zirconium and is found in many zirconium minerals. Its existence was predicted by Dmitri Mendeleev in 1869, though it was not identified until 1923, by Coster and Hevesy, making it the second-last stable element to be discovered. Hafnium is named after Hafnia, the Latin name for Copenhagen, where it was discovered.");
    atom[71].melting_point = 2233;
    atom[71].boiling_point = 4602;
    atom[71].ionic_radius = 225;
    atom[71].isotopes = 5;
    atom[71].electronegativity = 1.3;
    strcpy(atom[71].color,"Silvery gray");
    atom[71].group = 4;
    atom[71].period = 6;
    strcpy(atom[71].conductivity,"Thermal conductivity");
    strcpy(atom[71].luster,"Silver luster");
    strcpy(atom[71].phase,"Solid");
    atom[71].density = 13.07;
    strcpy(atom[71].uses,"Hafnium is a good absorber of neutrons and is used to make control rods, such as those found in nuclear submarines. It also has a very high melting point and because of this is used in plasma welding torches. Hafnium has been successfully alloyed with several metals including iron, titanium and niobium.");
    strcpy(atom[71].image_path,"");
	
	
    strcpy(atom[72].name,"TANTALUM");
    strcpy(atom[72].symbol,"Ta");	
    atom[72].atomic_number=73;	
    atom[72].atomic_weight=180.94;
    strcpy(atom[72].electronic_configuration,"Xe 4f14 5d3 6s2");
    strcpy(atom[72].history,"Tantalum was reported as a new metal in 1802 by Anders Gustav Ekeberg at Uppsala University, Sweden. However, when William Wollaston analysed the minerals from which it had been extracted he declared it was identical to niobium which has been discovered the year previously.");
    atom[72].melting_point = 3017;
    atom[72].boiling_point = 5457;
    atom[72].ionic_radius = 220;
    atom[72].isotopes = 2;
    atom[72].electronegativity = 1.5;
    strcpy(atom[72].color,"Blue-gray");
    atom[72].group = 5;
    atom[72].period = 6;
    strcpy(atom[72].conductivity,"Thermal and Electrical Conductivity");
    strcpy(atom[72].luster,"Metallic luster");
    strcpy(atom[72].phase,"Solid");
    atom[72].density = 16.6;
    strcpy(atom[72].uses,"Tantalum is used in the electronics industry for capacitors and high power resistors. It is also used to make alloys to increase strength, ductility and corrosion resistance. The metal is used in dental and surgical instruments and implants, as it causes no immune response.");
    strcpy(atom[72].image_path,"");
	
	
    strcpy(atom[73].name,"TUNGSTEN");	
    strcpy(atom[73].symbol,"Lu");	
    atom[73].atomic_number=74;	
    atom[73].atomic_weight=174.96;
    strcpy(atom[73].electronic_configuration,"[Xe] 6s² 4f¹⁴ 5d⁴");
    strcpy(atom[73].history,"Tungsten was discovered by Juan José and Fausto Elhuyar, Spanish chemists and brothers, in 1783 in samples of the mineral wolframite ((Fe, Mn)WO4).Tungsten is alloyed with steel to form tough metals that are stable at high temperatures.");
    atom[73].melting_point = 3422;
    atom[73].boiling_point = 5555;
    atom[73].ionic_radius = 210;
    atom[73].isotopes = 5;
    atom[73].electronegativity = 2.36;
    strcpy(atom[73].color,"Gunmetal gray");
    atom[73].group = 6;
    atom[73].period = 6;
    strcpy(atom[73].conductivity,"Thermal conductivity");
    strcpy(atom[73].luster,"Grayish lustre");
    strcpy(atom[73].phase,"Solid");
    atom[73].density = 19.3;
    strcpy(atom[73].uses,"Tungsten is commonly used in heavy metal alloys such as high speed steel, from which cutting tools are manufactured. It is also used in the so-called 'superalloys' to form wear-resistant coatings.");
    strcpy(atom[73].image_path,"");
	
	
    strcpy(atom[74].name,"RHENIUM");	
    strcpy(atom[74].symbol,"Re");	
    atom[74].atomic_number=75;	
    atom[74].atomic_weight=186.84;
    strcpy(atom[74].electronic_configuration,"Xe 4f14 5d5 6s2");
    strcpy(atom[74].history,"Rhenium is generally considered to have been discovered by Walter Noddack, Ida Noddack, and Otto Berg in Germany. In 1925 they reported that they had detected the element in platinum ore and in the mineral columbite. They also found rhenium in gadolinite and molybdenite.");
    atom[74].melting_point = 3185;
    atom[74].boiling_point = 5597;
    atom[74].ionic_radius = 205;
    atom[74].isotopes = 2;
    atom[74].electronegativity = 1.9;
    strcpy(atom[74].color,"Silvery-white");
    atom[74].group = 7;
    atom[74].period = 6;
    strcpy(atom[74].conductivity,"Thermal conductivity");
    strcpy(atom[74].luster,"Metallic luster");
    strcpy(atom[74].phase,"Solid");
    atom[74].density = 21.02;
    strcpy(atom[74].uses,"Rhenium is used as an additive to tungsten- and molybdenum-based alloys to give useful properties. These alloys are used for oven filaments and x-ray machines. It is also used as an electrical contact material as it resists wear and withstands arc corrosion.");
    strcpy(atom[74].image_path,"");
	
	
   strcpy(atom[75].name,"OSMIUM");	
   strcpy(atom[75].symbol,"Os");		
   atom[75].atomic_number=76;
   atom[75].atomic_weight=190.23;
    strcpy(atom[75].electronic_configuration,"Xe 4f14 5d6 6s2");
    strcpy(atom[75].history,"Osmium comes from the Greek term osme, which means smell, scent, odor. Discovery: British chemist Smithson Tennant discovered osmium in 1803 in the residue left when crude platinum was dissolved by aqua regia. Osmium is produced as a by-product of nickel refining.");
    atom[75].melting_point = 3,033;
    atom[75].boiling_point = 5,027;
    atom[75].ionic_radius = 200;
    atom[75].isotopes = 7;
    atom[75].electronegativity = 2.2;
    strcpy(atom[75].color,"Silvery");
    atom[75].group = 8;
    atom[75].period = 6;
    strcpy(atom[75].conductivity,"Thermal Conductivity");
    strcpy(atom[75].luster,"Metallic luster");
    strcpy(atom[75].phase,"Solid");
    atom[75].density = 22590;
    strcpy(atom[75].uses,"Osmium has only a few uses. It is used to produce very hard alloys for fountain pen tips, instrument pivots, needles and electrical contacts. It is also used in the chemical industry as a catalyst.");
    strcpy(atom[75].image_path,"");
	
	
    strcpy(atom[76].name,"IRIDIUM");	
    strcpy(atom[76].symbol,"Ir");	
    atom[76].atomic_number=77;	
    atom[76].atomic_weight=192.21;
    strcpy(atom[76].electronic_configuration,"[Xe] 4f14 5d7 6s2");
    strcpy(atom[76].history," Iridium was discovered together with osmium in1803 by Smithson Tennant in London. When crude platinum was dissolved in dilute aqua regia, which is a mixture of nitric and hydrochloric acids, it left behind a black residue thought to be graphite.");
    atom[76].melting_point = 2466;
    atom[76].boiling_point = 4130;
    atom[76].ionic_radius = 200;
    atom[76].isotopes = 2;
    atom[76].electronegativity = 2.2;
    strcpy(atom[76].color,"Silvery white");
    atom[76].group = 9;
    atom[76].period = 6;
    strcpy(atom[76].conductivity,"Thermal Conductivity");
    strcpy(atom[76].luster,"Metallic luster");
    strcpy(atom[76].phase, "Solid");
    atom[76].density = 22.562;
    strcpy(atom[76].uses,"Iridium is the most corrosion-resistant material known. It is used in special alloys and forms an alloy with osmium, which is used for pen tips and compass bearings. It was used in making the standard metre bar, which is an alloy of 90% platinum and 10% iridium.");
    strcpy(atom[76].image_path,"");
	
	
    strcpy(atom[77].name,"PLATINUM");	
    strcpy(atom[77].symbol,"Pt");	
    atom[77].atomic_number=78;
    atom[77].atomic_weight=195.07;
    strcpy(atom[77].electronic_configuration,"[Xe] 4f14 5d9 6s1");
    strcpy(atom[77].history,"he metal was used by pre-Columbian Indians but platinum was 'rediscovered' in South America by Ulloa in 1735 and by Wood in 1741. In 1822 plenty of platinum was discovered in the Ural Mountains in Russia.");
    atom[77].melting_point = 1768;
    atom[77].boiling_point = 3825;
    atom[77].ionic_radius = 175;
    atom[77].isotopes = 6;
    atom[77].electronegativity = 2.28;
    strcpy(atom[77].color,"Silver");
    atom[77].group = 10;
    atom[77].period = 6;
    strcpy(atom[77].conductivity,"Electrical conductivity");
    strcpy(atom[77].luster,"Metallic luster");
    strcpy(atom[77].phase,"Solid");
    atom[77].density = 21.45;
    strcpy(atom[77].uses,"Platinum is used in jewelry, decoration and dental work. The metal and its alloys are also used for electrical contacts, fine resistance wires and medical / laboratory instruments. An alloy of platinum and cobalt is used to produce strong permanent magnets.");
    strcpy(atom[77].image_path,"");
	
	
    strcpy(atom[78].name,"GOLD");		
    strcpy(atom[78].symbol,"Au");
    atom[78].atomic_number=79;	
    atom[78].atomic_weight=196.96;
    strcpy(atom[78].electronic_configuration,"[Xe] 4f145d106s1");
    strcpy(atom[78].history,"Gold was first discovered as shining, yellow nuggets. “Gold is where you find it,” so the saying goes, and gold was first discovered in its natural state, in streams all over the world. No doubt it was the first metal known to early hominids. Gold became a part of every human culture.");
    atom[78].melting_point = 1064;
    atom[78].boiling_point = 2966;
    atom[78].ionic_radius = 166;
    atom[78].isotopes = 41;
    atom[78].electronegativity = 2.54;
    strcpy(atom[78].color,"Gold");
    atom[78].group = 11;
    atom[78].period = 6;
    strcpy(atom[78].conductivity,"Electrical conductivity");
    strcpy(atom[78].luster,"Metallic luster");
    strcpy(atom[78].phase,"Solid");
    atom[78].density = 19.3;
    strcpy(atom[78].uses,"Dentistry and Medicine: Gold is considered as the best filling for cavities and crowns, bridges and other orthodontic appliances because the metal is ductile and can easily take shapes. ...Electronics and Computers: ...Medals and Statues: ...Jewellery.");
    strcpy(atom[78].image_path,"");
	
	
    strcpy(atom[79].name,"MERCURY");
    strcpy(atom[79].symbol,"Hg");	
    atom[79].atomic_number=80;	
    atom[79].atomic_weight=200.59;
    strcpy(atom[79].electronic_configuration,"[Xe] 4f14 5d10 6s2");
    strcpy(atom[79].history,"Mercury was among the first metals known, and its compounds have been used throughout history. Archaeologists found mercury in an Egyptian tomb dating from 1500 BC. The Egyptians and the Chinese may have been using cinnabar as a red pigment for centuries before the birth of Christ.");
    atom[79].melting_point = -38.83;
    atom[79].boiling_point = 356.7;
    atom[79].ionic_radius = 155;
    atom[79].isotopes = 7;
    atom[79].electronegativity = 2;
    strcpy(atom[79].color,"Light grey");
    atom[79].group = 12;
    atom[79].period = 6;
    strcpy(atom[58].conductivity,"Thermal conductivity");
    strcpy(atom[58].luster,"Metallic luster");
    strcpy(atom[79].phase,"Solid");
    atom[79].density = 5.43;
    strcpy(atom[79].uses,"Mercury is used in thermometers, barometers, manometers, sphygmomanometers, float valves, mercury switches, mercury relays, fluorescent lamps and other devices, though concerns about the element's toxicity have led to mercury thermometers and sphygmomanometers being largely phased out in clinical environments in favor");
    strcpy(atom[79].image_path,"");
	
	
	strcpy(atom[80].name,"THALLIUM");
	strcpy(atom[80].symbol,"Tl");
        atom[80].atomic_number=81;
	atom[80].atomic_weight=201.38;
        strcpy(atom[80].electronic_configuration,"[Xe] 4f145d106s26p1 ");
        strcpy(atom[80].history," British chemist William Crookes discovered thallium spectroscopically in 1861. Both Crookes and French chemist Claude Auguste Lamy isolated the element in 1862 independently..");
        atom[80].melting_point = 304 ;
        atom[80].boiling_point = 1,473 ;
        atom[80].ionic_radius = 220 ;
        atom[80].isotopes = 41; 
        atom[80].electronegativity = 2.20;
       strcpy(atom[80].color,"silvery-gray");
       atom[80].group =13 ;
	atom[80].period = 6;
        strcpy(atom[80].conductivity,"46.1 W/(m⋅K)");
       strcpy(atom[80].luster,"Thallium is a malleable, soft element that can be sliced with a knife. It has a metallic luster that quickly tarnishes when exposed to air to a bluish-green color. ");
       strcpy(atom[80].phase,"Thallium is a solid at room temperature");
       atom[80].density =11.85  ;
      strcpy(atom[80].uses,"Thallium uses today commonly include the production of electronic devices, fiber optics, camera lenses, switches, and closures.");
       strcpy(atom[80].image_path,"");
	
	
	
	
	
	
	
	
	strcpy(atom[81].name,"LEAD");
	strcpy(atom[81].symbol,"Pb");
	atom[81].atomic_number=82;
	atom[81].atomic_weight=201.20;
        strcpy(atom[81].electronic_configuration,"[Xe] 4f¹⁴5d¹⁰6s²6p²");
    strcpy(atom[81].history,"Lead was one of the earliest metals discovered by the human race and was in use by 3000 B.C. ");
    atom[81].melting_point =327.5  ;
    atom[81].boiling_point =1,749  ;
    atom[81].ionic_radius = 202 ;
    atom[81].isotopes =4 ;
    atom[81].electronegativity =2.33 ;
    strcpy(atom[81].color,"When freshly cut, lead is silvery with a hint of blue; it tarnishes to a dull gray color when exposed to air.");
    atom[81].group =14 ;
    atom[81].period =6 ;
    strcpy(atom[81].conductivity,"lead is a metal that conducts electricity, making it a poor insulator. ");
    strcpy(atom[81].luster,"Lead has a dull luster and is a dense, ductile, very soft, highly malleable, bluish-white metal that has poor electrical conductivity. ");
    strcpy(atom[81].phase,"This element is a solid");
    atom[81].density =11.29 ;
    strcpy(atom[81].uses,"Lead is still widely used for car batteries, pigments, ammunition, cable sheathing, weights for lifting, weight belts for diving, lead crystal glass, radiation protection and in some solders. It is often used to store corrosive liquids.");
    strcpy(atom[81].image_path,"");
	
	
	strcpy(atom[82].name,"BISMUTH");
	strcpy(atom[82].symbol,"Bi");
	atom[82].atomic_number=83;
	atom[82].atomic_weight=208.98;
	 strcpy(atom[82].electronic_configuration,"[Xe] 4f14 5d10 6s2 6p3");
	strcpy(atom[82].history,"Today, China, Mexico and Peru are the main sources of bismuth. Origin of name:The chemical element bismuth was officially discovered in 1753 by French scientist Claude Geoffroy.");
    atom[82].melting_point =271.4  ;
    atom[82].boiling_point =1,564  ;
    atom[82].ionic_radius =230  ;
    atom[82].isotopes =41  ;
    atom[82].electronegativity =2.02 ;
    strcpy(atom[82].color,"gray-white with a reddish tinge.");
    atom[82].group = 15;
    atom[82].period =6 ;
    strcpy(atom[82].conductivity,"Thermal conductivity	10 W/mK");
    strcpy(atom[82].luster,"Metallic");
    strcpy(atom[82].phase, "are about 10 possible solid phases");
    atom[82].density =9.8 ;
    strcpy(atom[82].uses,"It is used in extinguishers, electric fuses, and fire detectors. Certain bismuth compounds are also manufactured and used as pharmaceuticals. Industry makes use of bismuth compounds as catalysts in manufacturing acrylonitrile, the starting material for synthetic fibers and rubbers.");
    strcpy(atom[82].image_path,"");
	
	strcpy(atom[83].name,"POLONIUM");
	strcpy(atom[83].symbol,"Po");
	atom[83].atomic_number=84;
	atom[83].atomic_weight=209.00;
	strcpy(atom[83].electronic_configuration,"[Xe] 6s2 4f14 5d10 6p4");
	strcpy(atom[83].history,"Polonium was discovered in 1898 by Marie and Pierre Curie, when it was extracted from the uranium ore pitchblende and identified solely by its strong radioactivity: it was the first element to be so discovered");
	 atom[83].melting_point =254  ;
    atom[83].boiling_point =962  ;
    atom[83].ionic_radius = 200 ;
    atom[83].isotopes = 42. ;
    atom[83].electronegativity =2 ;
    strcpy(atom[83].color,"silvery");
    atom[83].group =16 ;
    atom[83].period =0 ;
    strcpy(atom[83].conductivity," 20 W·m-1·K-1");
    strcpy(atom[83].luster,"Polonium is a rare, silvery-gray, radioactive, low-melting metalloid.");
    strcpy(atom[83].phase,"solid");
    atom[83].density = 9.4 ;
    strcpy(atom[83].uses,"Polonium is an alpha-emitter, hence it is used in antistatic devices and for research purposes. It is used in the form of a thin film on a stainless steel disc as an alpha-particle source. It is used to eliminate static electricity produced during processes such as rolling paper, wire and sheet metal.");
    strcpy(atom[83].image_path,"");
	
	strcpy(atom[84].name,"Astatine");
	strcpy(atom[84].symbol,"At");
	atom[84].atomic_number=85;
	atom[84].atomic_weight=210.00;
	strcpy(atom[84].electronic_configuration,"[Xe] 4f¹⁴ 5d¹⁰ 6s² 6p⁵");
	strcpy(atom[84].history,"Astatine was first produced in 1940 by Dale R. Coson, Kenneth Ross Mackenzie and Emilio Segrè at the University of California, Berkeley. ... The scientists found that the isotope they created was radioactive, so they named the element using the Greek 'astatos' meaning unstable.");
    atom[84].melting_point = 302 ;
    atom[84].boiling_point =336.8  ;
    atom[84].ionic_radius =200 ;
    atom[84].isotopes =39. ;
    atom[84].electronegativity =2.2 ;
    strcpy(atom[84].color,"black");
    atom[84].group =17 ;
    atom[84].period = 6;
    strcpy(atom[84].conductivity,"1.7 W·m-1·K-1");
    strcpy(atom[84].luster," Metallic. Odor.");
    strcpy(atom[84].phase,"Solid");
    atom[84].density = 7 ;
    strcpy(atom[84].uses,"Hence it is used for treating diseases related to the thyroid. The isotope called Astatine-211 is utilized in the process of radiotherapy. It is also employed in the treatment of cancer as it is known to destroy cancer-causing cells....");
    strcpy(atom[84].image_path,"");
	
	strcpy(atom[85].name,"RADON");
	strcpy(atom[85].symbol,"Rn");
	atom[85].atomic_number=86;
	atom[85].atomic_weight=222.00;
	atom[85].atomic_weight=210.00;
	strcpy(atom[85].electronic_configuration,"[Xe] 4f145d106s26p6");
	strcpy(atom[85].history,"Radon was discovered by Friedrich Ernst Dorn, a German chemist, in 1900 while studying radium's decay chain. Originally named niton after the Latin word for shining, “nitens,” it has been known as radon since 1923. ... Eventually, occupational limits were established for radon concentrations in uranium mines");
    atom[85].melting_point = -71 ;
    atom[85].boiling_point = -61.7 ;
    atom[85].ionic_radius =200  ;
    atom[85].isotopes = 37  ;
    atom[85].electronegativity =2.2 ;
    strcpy(atom[85].color,"colorless");
    atom[85].group = 18 ;
    atom[85].period =6 ;
    strcpy(atom[85].conductivity,"3.61 m W·m-1·K-1");
    strcpy(atom[85].luster," It does not have luster,");
    strcpy(atom[58].phase,"gas");
    atom[58].density =9.73 ;
    strcpy(atom[58].uses,"It is used in the treatment of cell damage and cancer. Radon is also used in radiation therapy.");
    strcpy(atom[58].image_path,"");
	
	
	strcpy(atom[86].name,"FRANCIUM");
	strcpy(atom[86].symbol,"Fr");
	atom[86].atomic_number=87;
	atom[86].atomic_weight=223.00;
	strcpy(atom[86].electronic_configuration,"[Rn] 7s1");
	strcpy(atom[86].history,"Francium was finally discovered in 1939 by Marguerite Perey at the Curie Institute in Paris. She had purified a sample of actinium free of all its known radioactive impurities and yet its radioactivity still indicated another element was present, and which she rightly deduced was the missing element 87.");
    atom[86].melting_point =27  ;
    atom[86].boiling_point =676.8  ;
    atom[86].ionic_radius = 348 ;
    atom[86].isotopes =0. ;
    atom[86].electronegativity =0.79 ;
    strcpy(atom[86].color,"silver-gray-metallic (presumed)");
    atom[86].group = 1 ;
    atom[86].period = 7;
    strcpy(atom[86].conductivity,"15 ");
    strcpy(atom[86].luster," Silver Gray (Unconfirmed) Flame Color.");
    strcpy(atom[86].phase,"solid");
    atom[86].density =2.48  ;
    strcpy(atom[86].uses,"Francium has been used in the field of research, chemistry and also in the atomic structure.");
    strcpy(atom[86].image_path,"");
	
	strcpy(atom[87].name,"RADIUM");
	strcpy(atom[87].symbol,"Ra");
	atom[87].atomic_number=88;
	atom[87].atomic_weight=226.00;
	strcpy(atom[87].electronic_configuration,"[Rn] 7s2");
	strcpy(atom[87].history,"Polish physicist Marie Curie and her husband, Pierre, discovered radium in 1898, refining it from pitchblende scooped from the Joachimsthal mines. ");
    atom[87].melting_point =700  ;
    atom[87].boiling_point =1,737  ;
    atom[87].ionic_radius =283  ;
    atom[87].isotopes =33. ;
    atom[87].electronegativity=0.89 ;
    strcpy(atom[87].color,"silvery white metallic");
    atom[87].group =2 ;
    atom[87].period =7 ;
    strcpy(atom[87].conductivity,"18.6 ");
    strcpy(atom[87].luster,"Radium is silvery, lustrous, soft, intensely radioactive");
    strcpy(atom[87].phase,"Solid");
    atom[87].density =5 ;
    strcpy(atom[87].uses,"Radium-223 is sometimes used to treat prostate cancer that has spread to the bones. Because bones contain calcium and radium is in the same group as calcium, it can be used to target cancerous bone cells.");
    strcpy(atom[87].image_path,"");
	
	strcpy(atom[88].name,"ACTINIUM");
	strcpy(atom[88].symbol,"Ac");
	atom[88].atomic_number=89;
	atom[88].atomic_weight=227.00;
	strcpy(atom[88].electronic_configuration," [Rn] 6d17s2");
	strcpy(atom[88].history," Actinium was discovered in 1899 by André-Louis Debierne, a French chemist, while experimenting with new methods of separating rare earth oxides. Friedrich Otto Giesel independently discovered actinium in 1902");
    atom[88].melting_point =1,050  ;
    atom[88].boiling_point =3,197  ;
    atom[88].ionic_radius =200 ;
    atom[88].isotopes = 32;
    atom[88].electronegativity =1.1 ;
    strcpy(atom[88].color,"silvery-white radioactive metal");
    atom[88].group =  3;
    atom[88].period =7 ;
    strcpy(atom[88].conductivity,"12 W -1 K-1 ");
    strcpy(atom[88].luster,"Unknown");
    strcpy(atom[88].phase,"solid");
    atom[88].density =10.07 ;
    strcpy(atom[88].uses,"Actinium is a very powerful source of alpha rays, but is rarely used outside research. Actinium has no known biological role");
    strcpy(atom[88].image_path,"");
	
	strcpy(atom[89].name,"THORIUM");
	strcpy(atom[89].symbol,"Th");
	atom[89].atomic_number=90;
	atom[89].atomic_weight=232.03;
	 strcpy(atom[89].electronic_configuration," [Rn] 6d27s2 ");
	strcpy(atom[89].history,"Thorium was discovered in 1828 by the Norwegian amateur mineralogist Morten Thrane Esmark and identified by the Swedish chemist Jöns Jacob Berzelius, who named it after Thor, the Norse god of thunder.");
    atom[89].melting_point =1,750  ;
    atom[89].boiling_point =4,787  ;
    atom[89].ionic_radius =240  ;
    atom[89].isotopes = 7 ;
    atom[89].electronegativity =1.3 ;
    strcpy(atom[89].color," silvery white metal");
    atom[89].group = 0;
    atom[89].period = 7;
    strcpy(atom[89].conductivity,"The thermal conductivity for ThO2 is significantly higher than for UO2");
    strcpy(atom[89].luster,"thorium is a silvery-white metal which is air-stable and retains its luster for several months. When contaminated with the oxide, thorium slowly tarnishes in air, becoming gray and finally black.");
    strcpy(atom[89].phase," solid.");
    atom[89].density =11.72 ;
    strcpy(atom[89].uses,"Thorium is also used to strengthen magnesium, coating tungsten wire in electrical equipment, controlling the grain size of tungsten in electric lamps, high-temperature crucibles, in glasses, in camera and scientific instrument lenses, and is a source of nuclear power");
    strcpy(atom[89].image_path,"");
	
	strcpy(atom[90].name,"PROTACTINIUM");
	strcpy(atom[90].symbol,"Pa");
	atom[90].atomic_number=91;
	atom[90].atomic_weight=231.03;
	strcpy(atom[90].electronic_configuration," [Rn] 5f26d17s2");
	strcpy(atom[90].history,"The existence of protactinium was predicted in 1871 by Dmitri Mendeleev. Discovery of the element is attributed to Otto Hahn and Lise Meitner, who discovered another isotope of protactinium, 231Pa in 1917. The element wasn't isolated until 1934, by Aristid von Grosse.");
    atom[90].melting_point =1,568  ;
    atom[90].boiling_point =4,027  ;
    atom[90].ionic_radius =200 ;
    atom[90].isotopes =3. ;
    atom[90].electronegativity =1.5 ;
    strcpy(atom[90].color,"Silvery metallic");
    atom[90].group = 0 ;
    atom[90].period = 7 ;
    strcpy(atom[90].conductivity,"47 W/(m⋅K)");
    strcpy(atom[90].luster,"bright, silvery metallic");
    strcpy(atom[90].phase,"solid");
    atom[90].density =15.37 ;
    strcpy(atom[90].uses," protactinium is usually extracted from used nuclear fuel. Due to its scarcity, high toxicity, and high radioactivity, protactinium has no current practical uses other than basic scientific research.");
    strcpy(atom[90].image_path,"");
	
	
	
	strcpy(atom[91].name,"URANIUM");
	strcpy(atom[91].symbol,"U");
	atom[91].atomic_number=92;
	atom[91].atomic_weight=238.02;
	strcpy(atom[91].electronic_configuration,"[Rn] 5f36d17s2");
	strcpy(atom[91].history,"Uranium was discovered in 1789 by Martin Klaproth, a German chemist, in the mineral called pitchblende. It was named after the planet Uranus, which had been discovered eight years earlier. ");
    atom[91].melting_point =1,132 ;
    atom[91].boiling_point =4,131 ;
    atom[91].ionic_radius =230 ;
    atom[91].isotopes =3 ;
    atom[91].electronegativity =1.38 ;
    strcpy(atom[91].color,"silvery white");
    atom[91].group =6 ;
    atom[91].period =7 ;
    strcpy(atom[91].conductivity,"27.5 W/(m⋅K)");
    strcpy(atom[91].luster," sub-metallic, greasy, pitchy, or dull.");
    strcpy(atom[91].phase,"alpha (α), beta (β), and gamma (γ) phases.");
    atom[91].density =19.1 ;
    strcpy(atom[91].uses,"a very important element because it provides us with nuclear fuel used to generate electricity in nuclear power stations. It is also the major material from which other synthetic transuranium elements are made.");
    strcpy(atom[91].image_path,"");
	
	
	
	
	
	strcpy(atom[92].name,"NEPTUNIUM");
	strcpy(atom[92].symbol,"Np");
	atom[92].atomic_number=93;
	atom[92].atomic_weight=237.00;
	strcpy(atom[92].electronic_configuration,"[Rn] 5f46d17s2");
	strcpy(atom[92].history,"Neptunium was first made in 1940 by Edwin McMillan and Philip Abelson at Berkeley, California. It came from a uranium target that had been bombarded with slow neutrons ");
    atom[92].melting_point =644 ;
    atom[92].boiling_point =3,902 ;
    atom[92].ionic_radius = 230;
    atom[92].isotopes =7 ;
    atom[92].electronegativity =1.36 ;
    strcpy(atom[92].color,"silvery metallic");
    atom[92].group = 0;
    atom[92].period =7 ;
    strcpy(atom[92].conductivity,"6.3 W/(m⋅K)");
    strcpy(atom[92].luster,"Unknown");
    strcpy(atom[92].phase,"solid");
    atom[92].density =20.45 ;
    strcpy(atom[92].uses,"Neptunium is fissionable, and could theoretically be used as fuel in a fast neutron reactor or in a nuclear weapon.");
    strcpy(atom[92].image_path,"");
	
	
	
	
	strcpy(atom[93].name,"PLUTONIUM");
	strcpy(atom[93].symbol,"Pu");
	atom[93].atomic_number=94;
	atom[93].atomic_weight=244.00;
	strcpy(atom[93].electronic_configuration,"[Rn] 5f67s2");
	strcpy(atom[93].history,"Plutonium was first made in December 1940 at Berkeley, California, by Glenn Seaborg, Arthur Wahl, Joseph Kennedy, and Edwin McMillan. ... ");
    atom[93].melting_point =639.4  ;
    atom[93].boiling_point =3.232  ;
    atom[93].ionic_radius =108  ;
    atom[93].isotopes =5 ;
    atom[93].electronegativity =1.28 ;
    strcpy(atom[93].color," plutonium is yellow or olive green in colour.");
    atom[93].group =0 ;
    atom[93].period =7 ;
    strcpy(atom[93].conductivity,"6.74 W/(m⋅K)");
    strcpy(atom[93].luster," silvery bright color but takes on a dull gray, yellow, or olive green tarnish when oxidized in air. ");
    strcpy(atom[93].phase,"solid at room temperature.");
    atom[93].density =19.84  ;
    strcpy(atom[93].uses,"Plutonium has been used to make nuclear weapons (such as 'atomic bombs') and in nuclear power plants to produce electricity. Plutonium has also been used as a portable energy supply in space probes and other space vehicles.");
    strcpy(atom[93].image_path,"");
	
	
	
	
	
	strcpy(atom[94].name,"AMERICIUM");
	strcpy(atom[94].symbol,"Am");
	atom[94].atomic_number=95;
	atom[94].atomic_weight=243.00;
	strcpy(atom[94].electronic_configuration,"[Rn] 5f77s2");
	strcpy(atom[94].history,"Americium was first made late in 1944 at the University of Chicago by a team which included Glenn Seaborg, Ralph James, Leon Morgan, and Albert Ghiorso.");
    atom[94].melting_point =1.176  ;
    atom[94].boiling_point =2.607  ;
    atom[94].ionic_radius =200  ;
    atom[94].isotopes =19 ;
    atom[94].electronegativity =1.3 ;
    strcpy(atom[94].color,"silvery white");
    atom[94].group = 0;
    atom[94].period =7 ;
    strcpy(atom[94].conductivity,"10 W/(m⋅K)");
    strcpy(atom[94].luster,"The luster of freshly prepared americium metal is white");
    strcpy(atom[94].phase,"solid");
    atom[94].density =13.67  ;
    strcpy(atom[94].uses," used in spacecraft batteries in the future. Currently plutonium is used but availability is poor so alternatives are being considered.");
    strcpy(atom[94].image_path,"");
	
	strcpy(atom[95].name,"CURIUM");
	strcpy(atom[95].symbol,"Cm");
	atom[95].atomic_number=96;
	atom[95].atomic_weight=247.00;
	strcpy(atom[95].electronic_configuration,"[Rn] 5f76d17s2");
	strcpy(atom[95].history,"Curium is named in honour of Pierre and Marie Curie, who pioneered the study of radioactivity in the final days of the 19th century. ");
    atom[95].melting_point =1.345 ;
    atom[95].boiling_point =3.110  ;
    atom[95].ionic_radius =200 ;
    atom[95].isotopes =14 ;
    atom[95].electronegativity =1.3 ;
    strcpy(atom[95].color,"silvery-white");
    atom[95].group = 0;
    atom[95].period =7 ;
    strcpy(atom[95].conductivity,"N/A");
    strcpy(atom[95].luster,"Unknown");
    strcpy(atom[95].phase," solid ");
    atom[95].density =13.51  ;
    strcpy(atom[95].uses,"Curium has two main uses: as a fuel for Radioisotope Thermal Generators (RTGs) on board satellites, deep space probes, planetary surface rovers and in heart pacemakers, and as a alpha emitter for alpha particle X-Ray spectrometry, again particularly in space applications.");
    strcpy(atom[95].image_path,"");
	
	
	
	
	
	
	
	
	strcpy(atom[96].name,"BERKELIUM");
	strcpy(atom[96].symbol,"Bk");
	atom[96].atomic_number=97;
	atom[96].atomic_weight=247.00;
	strcpy(atom[96].electronic_configuration,"[Rn] 5f97s2");
	strcpy(atom[96].history,"Berkelium was first produced in December 1949, at the University of California at Berkeley, and was made by Stanley Thompson, Albert Ghiorso, and Glenn Seaborg");
    atom[96].melting_point =986  ;
    atom[96].boiling_point =2627 ;
    atom[96].ionic_radius =200  ;
    atom[96].isotopes =14 ;
    atom[96].electronegativity =1.3 ;
    strcpy(atom[96].color,"it is electropositive, reactive, and silver-coloured ");
    atom[96].group =0 ;
    atom[96].period =7 ;
    strcpy(atom[96].conductivity,"10 W·m-1·K-1");
    strcpy(atom[96].luster,"Metallic");
    strcpy(atom[96].phase,"solid");
    atom[96].density =14  ;
    strcpy(atom[96].uses,"It was used for the atmospheric nuclear weapons tests between 1945 and 1980.");
    strcpy(atom[96].image_path,"");
	
	
	
	strcpy(atom[97].name,"CALIFONIUM");
	strcpy(atom[97].symbol,"Cf");
	atom[97].atomic_number=98;
	atom[97].atomic_weight=251.00;
	strcpy(atom[97].electronic_configuration," [Rn] 5f107s2");
	strcpy(atom[97].history,"Californium was first made in 1950 at Berkeley, California, by a team consisting of Stanley Thompson, Kenneth Street Jr., Albert Ghiorso, and Glenn Seaborg. ");
    atom[97].melting_point =900  ;
    atom[97].boiling_point =1,472  ;
    atom[97].ionic_radius = 200 ;
    atom[97].isotopes =20 ;
    atom[97].electronegativity =1.3 ;
    strcpy(atom[97].color," silvery-white");
    atom[97].group =0 ;
    atom[97].period =7 ;
    strcpy(atom[97].conductivity,"10 ");
    strcpy(atom[97].luster,"high and shines like sodium");
    strcpy(atom[97].phase,"solid");
    atom[97].density =15.1 ;
    strcpy(atom[97].uses," It is used in portable metal detectors, for identifying gold and silver ores, to identify water and oil layers in oil wells and to detect metal fatigue and stress in aeroplanes.");
    strcpy(atom[97].image_path,"");
	
	
	
	
	
	strcpy(atom[98].name,"EINSTEINIUM");
	strcpy(atom[98].symbol,"Es");
	atom[98].atomic_number=99;
	atom[98].atomic_weight=252.00;
	 strcpy(atom[98].electronic_configuration," [Rn] 5f117s2");
	strcpy(atom[98].history,"Einsteinium was discovered by a team of scientists led by Albert Ghiorso in 1952 while studying the radioactive debris ");
    atom[98].melting_point =860 ;
    atom[98].boiling_point =996 ;
    atom[98].ionic_radius = 200 ;
    atom[98].isotopes =18 ;
    atom[98].electronegativity =1.3 ;
    strcpy(atom[98].color,"silvery; glows blue in the dark");
    atom[98].group = 0;
    atom[98].period =7 ;
    strcpy(atom[98].conductivity,"N/A");
    strcpy(atom[98].luster,"silvery-white metallic");
    strcpy(atom[98].phase,"solid");
    atom[98].density =8.84 ;
    strcpy(atom[98].uses,"Einsteinium has no uses outside research. Einsteinium has no known biological role");
    strcpy(atom[98].image_path,"");
	
	
	
	strcpy(atom[99].name,"FERMIUM");
	strcpy(atom[99].symbol,"Fm");
	atom[99].atomic_number=257.00;
	atom[99].atomic_weight=231.03;
	strcpy(atom[99].electronic_configuration," [Rn] 5f127s2");
	strcpy(atom[99].history," Fermium was discovered in 1953 in the debris of the first thermonuclear explosion which took place on a Pacific atoll on 1 November 1952");
    atom[99].melting_point =1527  ;
    atom[99].boiling_point =-1;
    atom[99].ionic_radius =200  ;
    atom[99].isotopes =21 ;
    atom[99].electronegativity =1.3 ;
    strcpy(atom[99].color,"shiny and silver-colored.");
    atom[99].group = 0;
    atom[99].period = 7;
    strcpy(atom[99].conductivity,"25");
    strcpy(atom[99].luster,"Unknown");
    strcpy(atom[99].phase,"solid ");
    atom[99].density =9.7  ;
    strcpy(atom[99].uses,"outside research");
    strcpy(atom[99].image_path,"");
	
	
	
	
	
	strcpy(atom[100].name,"MENDELEVIUM");
	strcpy(atom[100].symbol,"Md");
	atom[100].atomic_number=101;
	atom[100].atomic_weight=258.00;
	strcpy(atom[100].electronic_configuration,"[Rn] 5f137s2");
	strcpy(atom[100].history," Mendelevium is named after the Russian chemist Dmitri Mendeleev. Discovery: In early 1955, Stanley Thompson, Glenn Seaborg, Bernard Harvey, Gregory Choppin and Albert Ghiorso ");
    atom[100].melting_point =827 ;
    atom[100].boiling_point = 0;
    atom[100].ionic_radius =200  ;
    atom[100].isotopes =14 ;
    atom[100].electronegativity =1.3 ;
    strcpy(atom[100].color,"Unknown, but probably metallic and silvery white or grey in appearance");
    atom[100].group = 0;
    atom[100].period =7 ;
    strcpy(atom[100].conductivity,"N/A");
    strcpy(atom[100].luster,"bright metallic");
    strcpy(atom[100].phase,"solid");
    atom[100].density =10.3  ;
    strcpy(atom[100].uses," It is used only for scientific research. ");
    strcpy(atom[100].image_path,"");
	
	
	
	strcpy(atom[101].name,"NOBELIUM");
	strcpy(atom[101].symbol,"Np");
	atom[101].atomic_number=102;
	atom[101].atomic_weight=259.00;
	strcpy(atom[101].electronic_configuration,"[Rn] 5f147s2");
	strcpy(atom[101].history,"Georgy Flerov and colleagues and at Dubna, near Moscow, Russia, and independently by Albert Ghiorso and colleagues at Berkeley, California, USA");
    atom[101].melting_point =827 ;
    atom[101].boiling_point = 0 ;
    atom[101].ionic_radius =200  ;
    atom[101].isotopes =12 ;
    atom[101].electronegativity =1.3 ;
    strcpy(atom[101].color,"Unknown, but probably metallic and silvery white or grey in appearance");
    atom[101].group = 0;
    atom[101].period =7 ;
    strcpy(atom[101].conductivity,"N/A");
    strcpy(atom[101].luster,"Metallic");
    strcpy(atom[101].phase,"solid ");
    atom[101].density =9.9 ;
    strcpy(atom[101].uses,"Nobelium has no uses outside research. Nobelium has no known biological role");
    strcpy(atom[101].image_path,"");
	
	
	
	
	
	strcpy(atom[102].name,"LAWRENCIUM");
	strcpy(atom[102].symbol,"Lr");
	atom[102].atomic_number=103;
	atom[102].atomic_weight=262.00;
	strcpy(atom[102].electronic_configuration," [Rn] 5f147s27p1");
	strcpy(atom[58].history,"Georgy Flerov and colleagues and at Dubna, near Moscow, Russia, and independently by Albert Ghiorso and colleagues at Berkeley, California, USA");
    atom[102].melting_point =1627 ;
    atom[102].boiling_point =-1 ;
    atom[102].ionic_radius =200  ;
    atom[102].isotopes =10 ;
    atom[102].electronegativity =1.3 ;
    strcpy(atom[102].color,"Unknown, but probably metallic and silvery white or grey in appearance");
    atom[102].group = 0;
    atom[102].period =7 ;
    strcpy(atom[102].conductivity,"10");
    strcpy(atom[102].luster,"Metallic");
    strcpy(atom[102].phase,"solid (predicted)");
    atom[102].density =14.4  ;
    strcpy(atom[102].uses,"Very few atoms of Lawrencium have been made until now, due to this reason, there is no commercial use of Lawrencium. It is only being used in the laboratory for research work. They are mainly used for their radioactive properties and being toxic. This element can be used for technical purposes and harvesting energy.");
    strcpy(atom[102].image_path,"");
	
	
	
	
	
	strcpy(atom[103].name,"RUTHERFORDIUM");
	strcpy(atom[103].symbol,"Rf");
	atom[103].atomic_number=104;
	atom[103].atomic_weight=261.00;
	strcpy(atom[103].electronic_configuration,"[Rn] 5f146d27s2");
	strcpy(atom[103].history," Rutherfordium is named for scientist Ernest Rutherford. ... It was first reported by a team of scientists in Dubna, Russia, in 1964. ");
    atom[103].melting_point =2400  ;
    atom[103].boiling_point =5800  ;
    atom[103].ionic_radius =200 ;
    atom[103].isotopes =12 ;
    atom[103].electronegativity = 1.28;
    strcpy(atom[103].color,"Unknown, but probably metallic and silvery white or grey in appearance");
    atom[103].group = 4 ;
    atom[103].period = 7 ;
    strcpy(atom[103].conductivity," 23 (estimate) W m‑1 K‑1");
    strcpy(atom[103].luster,"The chemical element rutherfordium is classed as a transition metal.");
    strcpy(atom[103].phase,"solid (predicted)");
    atom[103].density =23 ;
    strcpy(atom[103].uses,"Because rutherfordium is made within the lab, there are not very many uses for this element commercially. On the other hand, rutherfordium has been used within the laboratory setting to conduct research");
    strcpy(atom[103].image_path,"");
	
	
	
	
	strcpy(atom[104].name,"DUBNIUM");
	strcpy(atom[104].symbol,"Db");
	atom[104].atomic_number=105;
	atom[104].atomic_weight=262.00;
	strcpy(atom[105].electronic_configuration,"[Rn] 5f146d37s2");
	strcpy(atom[104].history," Scientists working at the Joint Institute for Nuclear Research in Dubna, Russia, first reported the production of dubnium in 1967. ");
    atom[104].melting_point = -1 ;
    atom[104].boiling_point = -1 ;
    atom[104].ionic_radius =200 ;
    atom[104].isotopes = 13 ;
    atom[104].electronegativity =-1 ;
    strcpy(atom[104].color,"");
    atom[104].group = 5;
    atom[104].period =7 ;
    strcpy(atom[104].conductivity,"N/A");
    strcpy(atom[104].luster," It is a transuranium element ");
    strcpy(atom[104].phase,"Presumably a solid at 298 K");
    atom[104].density = 21.6 ;
    strcpy(atom[104].uses,"At present, it is only used in research. Dubnium has no known biological role");
    strcpy(atom[104].image_path,"");
	
	
	
	strcpy(atom[105].name,"SEABORGIUM");
	strcpy(atom[105].symbol,"Sg");
	atom[105].atomic_number=106;
	atom[105].atomic_weight=266.00;
	strcpy(atom[105].electronic_configuration,"[Rn] 5f146d47s2");
	strcpy(atom[105].history," Seaborgium was first produced by a team of scientists led by Albert Ghiorso working at the Lawrence Berkeley Laboratory in Berkeley, California, in 1974. ");
    atom[105].melting_point =-1 ;
    atom[105].boiling_point =-1 ;
    atom[105].ionic_radius =200  ;
    atom[105].isotopes = 12 ;
    atom[105].electronegativity =  0;
    strcpy(atom[105].color,"Seaborgium is an artificially produced radioactive chemical element, it's appearance is unknown, it probably has a silvery white or metallic gray colour");
    atom[105].group =  6;
    atom[105].period =  7;
    strcpy(atom[105].conductivity,"Thermal Conductivity,");
    strcpy(atom[105].luster," It appears like a metallic grey or silvery white with a hint of shine. It is of metallic lustre.");
    strcpy(atom[105].phase,"solid (predicted)");
    atom[105].density =23 ;
    strcpy(atom[105].uses," Since only a few atoms of seaborgium have ever been made, there are currently no uses for seaborgium outside of basic scientific research.");
    strcpy(atom[105].image_path,"");
	
	
	
	
	
	strcpy(atom[106].name,"BOHRIUM");
	strcpy(atom[106].symbol,"Bh");
	atom[106].atomic_number=107;
	atom[106].atomic_weight=264.00;
	strcpy(atom[106].electronic_configuration,"[Rn] 5f14 6d5 7s2");
	strcpy(atom[106].history,"Bohrium was first discovered by a team of scientists in Dubna, Russia, in 1976. The discovery was confirmed by Peter Armbruster, Gottfried Münzenber and their team working in Darmstadt, Germany, in 1981");
    atom[106].melting_point =254 ;
    atom[106].boiling_point =962  ;
    atom[106].ionic_radius =200  ;
    atom[106].isotopes =11  ;
    atom[106].electronegativity =1.3 ;
    strcpy(atom[106].color,"Unknown, but probably metallic and silvery white or grey in appearance");
    atom[106].group = 7 ;
    atom[106].period = 7 ;
    strcpy(atom[106].conductivity,"Transition Metals are generally described as ductile, malleable, and able to conduct electricity and heat.");
    strcpy(atom[106].luster,"Unknown Luster");
    strcpy(atom[106].phase,"Solid");
    atom[106].density =26 ;
    strcpy(atom[106].uses," Since only a few atoms of bohrium have ever been made, there are currently no uses for bohrium outside of basic scientific research.");
    strcpy(atom[106].image_path,"");
	
	
	
	
	strcpy(atom[107].name,"HASSSIUM");
	strcpy(atom[107].symbol,"Hs");
	atom[107].atomic_number=108;
	atom[107].atomic_weight=277.00;
	 strcpy(atom[107].electronic_configuration,"[Rn] 5f146d67s2");
	strcpy(atom[107].history,"Hassium was discovered in 1984. It was first produced in Darmstadt, Germany, by a team led by Peter Armbruster and Gottfried Münzenber");
    atom[107].melting_point =-1 ;
    atom[107].boiling_point =-1 ;
    atom[107].ionic_radius =200 ;
    atom[107].isotopes = 12 ;
    atom[107].electronegativity =1.3 ;
    strcpy(atom[107].color,"Unknown, but probably metallic and silvery white or grey in appearance");
    atom[107].group =8 ;
    atom[107].period =7 ;
    strcpy(atom[107].conductivity," high electrical conductivity and malleability ");
    strcpy(atom[107].luster,"Hassium's appearance is unknown but it is suspected to be silvery white or metallic grey in color");
    strcpy(atom[107].phase,"41 ");
    atom[107].density =41  ;
    strcpy(atom[107].uses," At present it is only used in research. Hassium has no known biological role.");
    strcpy(atom[107].image_path,"");
	
	strcpy(atom[108].name,"Meitnerium");
	strcpy(atom[108].symbol,"Mt");
	atom[108].atomic_number=109;
	atom[108].atomic_weight=278.00;
	strcpy(atom[108].electronic_configuration,"[Rn] 5f146d77s2");
	strcpy(atom[108].history,"Meitnerium was first discovered in 1982 in Darmstadt, in what was then West Germany.");
    atom[108].melting_point =-1. ;
    atom[108].boiling_point =-1. ;
    atom[108].ionic_radius =200  ;
    atom[108].isotopes =8 ;
    atom[108].electronegativity =  1.3;
    strcpy(atom[108].color,"Unknown, but probably metallic and silvery white or grey in appearance");
    atom[108].group =0;
    atom[108].period =7 ;
    strcpy(atom[108].conductivity," high electrical conductivity ");
    strcpy(atom[108].luster,"Meitnerium is a radioactive, synthetic element about which little is known. It is classified as a metal and is a solid at room temperature.");
    strcpy(atom[108].phase," solid at room temperature.");
    atom[108].density =27;
    strcpy(atom[108].uses,"meitnerium might be used for technology purposes and harvesting energy.");
    strcpy(atom[108].image_path,"");

    strcpy(atom[109].name,"Darmstadtium");
	strcpy(atom[109].symbol,"Ds");
	atom[109].atomic_number=110;
	atom[109].atomic_weight=281;
	strcpy(atom[109].electronic_configuration,"[Rn] 5f146d97s1");
	strcpy(atom[109].history," Darmstadtium was first produced by Peter Armbruster, Gottfried Münzenber and their team working at the Gesellschaft für Schwerionenforschung in Darmstadt, Germany on November 9th, 1994.");
    atom[109].melting_point = 0;
    atom[109].boiling_point = 0;
    atom[109].ionic_radius = 128  ;
    atom[109].isotopes =9  ;
    atom[109].electronegativity =0;
    strcpy(atom[109].color,"unknown (presumably metallic/ silvery white/ gray");
    atom[109].group =10;
    atom[109].period =7 ;
    strcpy(atom[109].conductivity,"conduct electricity and heat.");
    strcpy(atom[109].luster,"silvery white");
    strcpy(atom[109].phase," solid ");
    atom[109].density =34.8;
    strcpy(atom[109].uses,"At present, it is only used in research. Darmstadtium has no known biological role.");
    strcpy(atom[109].image_path,"");

    strcpy(atom[110].name,"Roentgenium");
	strcpy(atom[110].symbol,"Rg");
	atom[110].atomic_number=111;
	atom[110].atomic_weight=282;
	strcpy(atom[110].electronic_configuration,"[Rn] 5f146d107s1");
	strcpy(atom[110].history,"Peter Armbruster and Gottfried Münzenberg");
    atom[110].melting_point = -1 ;
    atom[110].boiling_point = -1 ;
    atom[110].ionic_radius =114   ;
    atom[110].isotopes =7 ;
    atom[110].electronegativity = 0;
    strcpy(atom[110].color,"orange metallic or yellow ");
    atom[110].group =11;
    atom[110].period =7 ;
    strcpy(atom[110].conductivity,"good electrical and thermal");
    strcpy(atom[110].luster," metallic gold (yellow solid)");
    strcpy(atom[110].phase,"Solid");
    atom[110].density =22; 
    strcpy(atom[110].uses,"At present, it is only used in research. Roentgenium has no known biological role.");
    strcpy(atom[110].image_path,"");

    strcpy(atom[111].name,"Copernicium");
	strcpy(atom[111].symbol,"Cn");
	atom[111].atomic_number=112;
	atom[111].atomic_weight=285;
	strcpy(atom[111].electronic_configuration,"[Rn] 5f146d107s2");
	strcpy(atom[111].history,"was first created on February 9, 1996, at the Gesellschaft für Schwerionenforschung (GSI) in Darmstadt, Germany, by Sigurd Hofmann, Victor Ninov et al. ");
    atom[111].melting_point =  10;
    atom[111].boiling_point = 67 ;
    atom[111].ionic_radius = 110   ;
    atom[111].isotopes = 4 ;
    atom[111].electronegativity = 0;
    strcpy(atom[111].color,"unknown, but is likely to be metallic and silvery white or grey in appearance");
    atom[111].group =12;
    atom[111].period =7 ;
    strcpy(atom[111].conductivity,"Thermal Conductivity");
    strcpy(atom[111].luster,"metallic and silvery white or grey in appearance");
    strcpy(atom[111].phase,"solid");
    atom[111].density =23.7 ;
    strcpy(atom[111].uses,"it is only used in research");
    strcpy(atom[111].image_path,"");

    strcpy(atom[112].name,"Nihonium");
	strcpy(atom[112].symbol,"Nh");
	atom[112].atomic_number=113;
	atom[112].atomic_weight=286;
	strcpy(atom[112].electronic_configuration,"[Rn] 5f146d107s27p1");
	strcpy(atom[112].history,"was first reported to have been created in 2003 by a Russian–American collaboration at the Joint Institute for Nuclear Research (JINR) in Dubna, Russia, and in 2004 by a team of Japanese scientists at Riken in Wakō, Japan.");
    atom[112].melting_point = 430  ;
    atom[112].boiling_point =1130  ;
    atom[112].ionic_radius = 170;
    atom[112].isotopes = 6 ;
    atom[112].electronegativity = 0;
    strcpy(atom[112].color,"silvery-gray/ unknown");
    atom[112].group =13;
    atom[112].period =7 ;
    strcpy(atom[112].conductivity,"thermal conductivity");
    strcpy(atom[112].luster,"silvery-gray");
    strcpy(atom[112].phase,"solid ");
    atom[112].density =16 ;
    strcpy(atom[112].uses," it currently has no uses outside of basic scientific research.");
    strcpy(atom[112].image_path,"");

    strcpy(atom[113].name,"Flerovium");
	strcpy(atom[113].symbol,"Fl");
	atom[113].atomic_number=114;
	atom[113].atomic_weight=289;
	strcpy(atom[113].electronic_configuration,"[Rn] 5f146d107s27p2");
	strcpy(atom[113].history,"was named for the Flerov Laboratory of Nuclear Reactions where element 114 was synthesized");
    atom[113].melting_point =-73 ;
    atom[113].boiling_point = 107 ;
    atom[113].ionic_radius = 180  ;
    atom[113].isotopes = 7 ;
    atom[113].electronegativity =  0;
    strcpy(atom[113].color,"Unknown, but probably metallic and silvery white or grey in appearance");
    atom[113].group =14;
    atom[113].period =7;
    strcpy(atom[113].conductivity,"heat of vapourization");
    strcpy(atom[113].luster,"metallic");
    strcpy(atom[113].phase,"gas");
    atom[113].density =14;
    strcpy(atom[113].uses," it currently has no uses outside of basic scientific research.");
    strcpy(atom[113].image_path,"");

    strcpy(atom[114].name,"Moscovium");
	strcpy(atom[114].symbol,"Mc");
	atom[114].atomic_number=115;
	atom[114].atomic_weight=290;
	strcpy(atom[114].electronic_configuration,"[Rn] 5f146d107s27p3");
	strcpy(atom[114].history," It was first synthesized in 2003 by a joint team of Russian and American scientists at the Joint Institute for Nuclear Research (JINR) in Dubna, Russia. .");
    atom[114].melting_point = 400;
    atom[114].boiling_point = 1100 ;
    atom[114].ionic_radius = 187  ;
    atom[114].isotopes = 4 ;
    atom[114].electronegativity =  2.96;
    strcpy(atom[114].color,"unknown (presumably metallic/ silvery white/ gray)");
    atom[114].group =15;
    atom[114].period =7 ;
    strcpy(atom[114].conductivity,"");
    strcpy(atom[114].luster,"metallic");
    strcpy(atom[114].phase,"solid");
    atom[114].density =13.5;
    strcpy(atom[114].uses,"they are only used in scientific study. It is used to make nihonium");
    strcpy(atom[114].image_path,"");

    strcpy(atom[115].name,"Livermorium");
	strcpy(atom[115].symbol,"Lv");
	atom[115].atomic_number=116;
	atom[115].atomic_weight=293;
	strcpy(atom[115].electronic_configuration,"[Rn]7s27p45f146d10");
	strcpy(atom[115].history," was first synthesized on July 19, 2000, when scientists at Dubna (JINR) bombarded a curium-248 target with accelerated calcium-48 ions.");
    atom[115].melting_point = 364;
    atom[115].boiling_point = 762 ;
    atom[115].ionic_radius = 164 ;
    atom[115].isotopes = 4 ;
    atom[115].electronegativity = 1.61;
    strcpy(atom[115].color,"unknown, but probably metallic and silvery white or grey in appearance");
    atom[115].group =16;
    atom[115].period =7 ;
    strcpy(atom[115].conductivity,"");
    strcpy(atom[115].luster,"metallic");
    strcpy(atom[115].phase,"solid");
    atom[115].density =12.9;
    strcpy(atom[115].uses," it is only used in research. It has no known biological role. ");
    strcpy(atom[115].image_path,"");

    strcpy(atom[116].name,"Tennessine");
	strcpy(atom[116].symbol,"Ts");
	atom[116].atomic_number=117;
	atom[116].atomic_weight=294;
	strcpy(atom[116].electronic_configuration,"[Rn] 5f146d107s27p5");
	strcpy(atom[116].history,"Joint Institute for Nuclear Research, Lawrence Livermore National Laboratory, Vanderbilt University and Oak Ridge National Laboratory (2009)");
    atom[116].melting_point = 623 ;
    atom[116].boiling_point = 883 ;
    atom[116].ionic_radius = 165  ;
    atom[116].isotopes = 2;
    atom[116].electronegativity = 0;
    strcpy(atom[116].color,"Silver");
    atom[116].group =17;
    atom[116].period =7 ;
    strcpy(atom[116].conductivity,"thermal conductivity");
    strcpy(atom[116].luster,"silver");
    strcpy(atom[116].phase,"solid");
    atom[116].density =7.3 ;
    strcpy(atom[116].uses," it currently has no uses outside of basic scientific research");
    strcpy(atom[116].image_path,"");

    strcpy(atom[117].name,"Oganesson");
	strcpy(atom[117].symbol,"Og");
	atom[117].atomic_number=118;
	atom[117].atomic_weight=294;
	strcpy(atom[117].electronic_configuration,"[Rn] 5f146d107s27p6");
	strcpy(atom[117].history," It was first synthesized in 2002 at the Joint Institute for Nuclear Research (JINR) in Dubna, near Moscow, Russia, by a joint team of Russian and American scientists.");
    atom[117].melting_point = 325;
    atom[117].boiling_point = 450 ;
    atom[117].ionic_radius = 152 ;
    atom[117].isotopes = 1 ;
    atom[117].electronegativity = 0;
    strcpy(atom[117].color,"unknown (presumably colourless)");
    atom[117].group =18;
    atom[117].period =7 ;
    strcpy(atom[117].conductivity,"ionisation energy");
    strcpy(atom[117].luster,"unknown");
    strcpy(atom[117].phase,"solid");
    atom[117].density =6.6;
    strcpy(atom[117].uses," At present, it is only used in research. It has no known biological role.");
    strcpy(atom[117].image_path,"");

        
    //for data department please don't change below code
    
    for(int i=0;i<118;i++){
        if(strcmp(atom[i].name,element_name)==0){
            return atom[i];
        }
        if(strcmp(atom[i].symbol,element_symbol)==0){
            return atom[i];
        }
        if(atom[i].atomic_number==atomic_number){
            return atom[i];
        }
        if(atom[i].atomic_weight==atomic_weight){
            return atom[i];
        }
    }
}

