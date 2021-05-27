#include <stdio.h>

#include <string.h>

#include <stdlib.h>


struct element 
{
	
    char name[20]; 
    char symbol[4];
    int atomicnum;
    float atomicwt;
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
    char image_path[150];

}
atom[118];


extern void table() 
{
	
    strcpy(atom[0].name,"HYDROGEN");	
    strcpy(atom[0].symbol,"H");
    atom[0].atomicnum=1;
    atom[0].atomicwt=1.008;
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
    atom[0].density = Thermal conductivity;
    strcpy(atom[0].uses,"Hydrogen also has many other uses. In the chemical industry it is used to make ammonia for agricultural fertiliser (the Haber process) and cyclohexane and methanol, which are intermediates in the production of plastics and pharmaceuticals. It is also used to remove sulfur from fuels during the oil-refining process. Large quantities of hydrogen are used to hydrogenate oils to form fats, for example to make margarine. Hydrogen is an essential element for life. It is present in water and in almost all the molecules in living things. However, hydrogen itself does not play a particularly active role. It remains bonded to carbon and oxygen atoms, while the chemistry of life takes place at the more active sites involving, for example, oxygen, nitrogen and phosphorus. Hydrogen is easily the most abundant element in the universe. It is found in the sun and most of the stars, and the planet Jupiter is composed mostly of hydrogen.");
    strcpy(atom[0].image_path,"");


    strcpy(atom[1].name,"HELIUM");	
    strcpy(atom[1].symbol,"He");
    atom[1].atomicnum=2;
    atom[1].atomicwt=4.00;
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
    atom[2].atomicnum=3;
    atom[2].atomicwt=6.94;
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
    atom[3].atomicnum=4;	
    atom[3].atomicwt=9.01;
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
    atom[4].atomicnum=5;
    atom[4].atomicwt=10.81;
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
    atom[5].atomicnum=6;	
    atom[5].atomicwt=12.01;
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
    atom[6].atomicnum=7;
    atom[6].atomicwt=14.00;
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
    atom[7].atomicnum=8;
    atom[7].atomicwt=15.59;
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
    atom[8].atomicnum=9;
    atom[8].atomicwt=18.99;
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
    atom[9].atomicnum=10;        
    atom[9].atomicwt=20.18;
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
    atom[10].atomicnum=11;        
    atom[10].atomicwt=22.99;
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
    atom[11].atomicnum=12;        
    atom[11].atomicwt=24.30;
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
    atom[12].atomicnum=13;        
    atom[12].atomicwt=1.008;
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
    atom[13].atomicnum=14;        
    atom[13].atomicwt=28.08;
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
    atom[14].atomicnum=15;        
    atom[14].atomicwt=30.97;
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
    atom[15].atomicnum=16;        
    atom[15].atomicwt=32.06;
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
    atom[16].atomicnum=17;        
    atom[16].atomicwt=35.45;
    strcpy(atom[16].electronic_configuration,"[Ne] 3s23p5");
    strcpy(atom[16].history,"Hydrochloric acid (HCl) was known to the alchemists. The gaseous element itself was first produced in 1774 by Carl Wilhelm Scheele at Uppsala, Sweden, by heating hydrochloric acid with the mineral pyrolusite which is naturally occuring manganese dioxide, MnO2. A dense, greenish-yellow gas was evolved which he recorded as having a choking smell and which dissolved in water to give an acid solution. He noted that it bleached litmus paper, and decolourised leaves and flowers.Humphry Davy investigated it in 1807 and eventually concluded not only that it was a simple substance, but that it was truly an element. He announced this in 1810 and yet it took another ten years for some chemists finally to accept that chlorine really was an element.");
    atom[16].melting_point = 171.7;
    atom[16].boiling_point = 239.11;
    atom[16].ionic_radius = 0.99;
    atom[16].isotopes = 27;
    atom[16].electronegativity = 3.16;
    strcpy(atom[16].color,Yellowy-green");
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
    atom[17].atomicnum=18;        
    atom[17].atomicwt=39.94;
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
    atom[18].atomicnum=19;        
    atom[18].atomicwt=39.09;
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
    atom[19].atomicnum=20;        
    atom[19].atomicwt=40.07;
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
    strcpy(atom[19].phase,Solid"");
    atom[19].density = 1.54;
    strcpy(atom[19].uses,"Calcium compounds are widely used. There are vast deposits of limestone (calcium carbonate) used directly as a building stone and indirectly for cement. When limestone is heated in kilns it gives off carbon dioxide gas leaving behind quicklime (calcium oxide). This reacts vigorously with water to give slaked lime (calcium hydroxide). Slaked lime is used to make cement, as a soil conditioner and in water treatment to reduce acidity, and in the chemicals industry. It is also used in steel making to remove impurities from the molten iron ore. When mixed with sand, slaked lime takes up carbon dioxide from the air and hardens as lime plaster.Calcium is essential to all living things, particularly for the growth of healthy teeth and bones. Calcium phosphate is the main component of bone. The average human contains about 1 kilogram of calcium.Calcium metal is used as a reducing agent in preparing other metals such as thorium and uranium. It is also used as an alloying agent for aluminium, beryllium, copper, lead and magnesium alloys.");
    strcpy(atom[19].image_path,"");


    strcpy(atom[20].name,"SCANDIUM");        
    strcpy(atom[20].symbol,"Sc");        
    atom[20].atomicnum=21;        
    atom[20].atomicwt=44.95;
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
    atom[21].atomicnum=22;        
    atom[21].atomicwt=47.86;
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
    atom[22].atomicnum=23;        
    atom[22].atomicwt=50.94;
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
    atom[23].atomicnum=24;        
    atom[23].atomicwt=51.99;
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
    atom[24].atomicnum=25;        
    atom[24].atomicwt=54.84;
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
    atom[25].atomicnum=26;        
    atom[25].atomicwt=55.84;
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
    atom[26].atomicnum=27;        
    atom[26].atomicwt=58.93;
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
    atom[27].atomicnum=28;        
    atom[27].atomicwt=58.69;
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
    atom[28].atomicnum=29;
    atom[28].atomicwt=63.54;
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
    atom[29].atomicnum=30;        
    atom[29].atomicwt=65.39;
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
    atom[30].atomicnum=31;        
    atom[30].atomicwt=69.72;
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
    atom[31].atomicnum=32;        
    atom[31].atomicwt=72.64;
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
    atom[32].atomicnum=33;        
    atom[32].atomicwt=74.92;
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
    atom[33].atomicnum=34;       
    atom[33].atomicwt=78.96;
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
    atom[34].atomicnum=35;        
    atom[34].atomicwt=79.90;
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
    atom[35].atomicnum=36;        
    atom[35].atomicwt=83.80;
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
    atom[36].atomicnum=37;      
    atom[36].atomicwt=85.46;
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
    atom[37].atomicnum=38;        
    atom[37].atomicwt=87.62;
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
    atom[38].atomicnum=39;        
    atom[38].atomicwt=88.90;
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
    atom[39].atomicnum=40;
    atom[39].atomicwt=91.22;
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
        
    atom[40].atomicnum=41;
        
    atom[40].atomicwt=92.90;
    strcpy(atom[41].name,"MOLYBDENUM");
        
    strcpy(atom[41].symbol,"Mo");

    atom[41].atomicnum=42;
        
    atom[41].atomicwt=95.94;
    strcpy(atom[42].name,"TECHNETIUM");
        
    strcpy(atom[42].symbol,"Tc");
        
    atom[42].atomicnum=43;
        
    atom[42].atomicwt=98.00;
    strcpy(atom[43].name,"RUTHENIUM");
        
    strcpy(atom[43].symbol,"Ru");
        
    atom[43].atomicnum=44;
        
    atom[43].atomicwt=101.07;

    strcpy(atom[44].name,"RHODIUM");
        
    strcpy(atom[44].symbol,"Rh");
        
    atom[44].atomicnum=45;
        
    atom[44].atomicwt=102.90;
    strcpy(atom[45].name,"PALLADIUM");
        
    strcpy(atom[45].symbol,"Pd");
        
    atom[45].atomicnum=46;
        
    atom[45].atomicwt=106.42;

    strcpy(atom[46].name,"SILVER");
        
    strcpy(atom[46].symbol,"Ag");
        
    atom[46].atomicnum=47;
        
    atom[46].atomicwt=107.86;
    strcpy(atom[47].name,"CADMIUM");
        
    strcpy(atom[47].symbol,"Cd");
        
    atom[47].atomicnum=48;
        
    atom[47].atomicwt=112.41;
    strcpy(atom[48].name,"INDIUM");
        
    strcpy(atom[48].symbol,"In");
        
    atom[48].atomicnum=49;
        
    atom[48].atomicwt=114.81;
    strcpy(atom[49].name,"TIN");
        
    strcpy(atom[49].symbol,"Sn");
        
    atom[49].atomicnum=50;
        
    atom[49].atomicwt=118.71;
    strcpy(atom[50].name,"ANTIMONY");
        
    strcpy(atom[50].symbol,"Sb");
        
    atom[50].atomicnum=51;
        
    atom[50].atomicwt=121.76;
    strcpy(atom[51].name,"TELLURIUM");
        
    strcpy(atom[51].symbol,"Te");
        
    atom[51].atomicnum=52;
        
    atom[51].atomicwt=127.60;
    strcpy(atom[52].name,"IODINE");
        
    strcpy(atom[52].symbol,"I");
        
    atom[52].atomicnum=53;
        
    atom[52].atomicwt=126.90;
    strcpy(atom[53].name,"XENON");
        
    strcpy(atom[53].symbol,"Xe");
        
    atom[53].atomicnum=54;
        
    atom[53].atomicwt=131.29;
    strcpy(atom[54].name,"CESIUM");
        
    strcpy(atom[54].symbol,"Cs");
        
    atom[54].atomicnum=55;
        
    atom[54].atomicwt=132.906;
    strcpy(atom[55].name,"BARIUM");
        
    strcpy(atom[55].symbol,"Ba");
        
    atom[55].atomicnum=56;
        
    atom[55].atomicwt=137.372;
    strcpy(atom[56].name,"LANTHANUM");
        
    strcpy(atom[56].symbol,"La");
        
    atom[56].atomicnum=57;
        
    atom[56].atomicwt=138.906;

    strcpy(atom[57].name,"CERIUM");
        
    strcpy(atom[57].symbol,"Ce");
        
    atom[57].atomicnum=58;
        
    atom[57].atomicwt=140.116;

    strcpy(atom[58].name,"PRASEODYMIUM");
        
    strcpy(atom[58].symbol,"Pr");
	
	atom[58].atomicnum=59;
		
	atom[58].atomicwt=140.906;
	
	strcpy(atom[59].name,"NEODYMIUM");
		
	strcpy(atom[59].symbol,"Nd");
		
	atom[59].atomicnum=60;
		
	atom[59].atomicwt=144.240;
	
	strcpy(atom[60].name,"PROMETHIUM");
		
	strcpy(atom[60].symbol,"Pm");
		
	atom[60].atomicnum=61;
		
	atom[60].atomicwt=145.000;
	strcpy(atom[61].name,"SAMARIUM");
		
	strcpy(atom[61].symbol,"Sm");
		
	atom[61].atomicnum=62;
		
	atom[61].atomicwt=150.36;
	strcpy(atom[62].name,"EUROPIUM");
		
	strcpy(atom[62].symbol,"Eu");
		
	atom[62].atomicnum=63;
		
	atom[62].atomicwt=151.96;
	strcpy(atom[63].name,"GADOLINIUM");
		
	strcpy(atom[63].symbol,"Gd");
		
	atom[63].atomicnum=64;
		
	atom[63].atomicwt=157.25;
	strcpy(atom[64].name,"SAMARIUM");
		
	strcpy(atom[64].symbol,"Sm");
		
	atom[64].atomicnum=65;
		
	atom[64].atomicwt=150.36;
	strcpy(atom[65].name,"DYSPROSIUM");
		
	strcpy(atom[65].symbol,"Dy");
		
	atom[65].atomicnum=66;
		
	atom[65].atomicwt=162.50;
	strcpy(atom[66].name,"HOLMINM");
		
	strcpy(atom[66].symbol,"Ho");
		
	atom[66].atomicnum=67;
		
	atom[66].atomicwt=164.93;
	strcpy(atom[67].name,"ERBIUM");
		
	strcpy(atom[67].symbol,"Er");
		
	atom[67].atomicnum=68;
		
	atom[67].atomicwt=167.25;
	strcpy(atom[68].name,"THULIUM");
		
	strcpy(atom[68].symbol,"Tm");
		
	atom[68].atomicnum=69;
		
	atom[68].atomicwt=168.93;
	strcpy(atom[69].name,"YTTERBIUM");
		
	strcpy(atom[69].symbol,"Yb");
		
	atom[69].atomicnum=70;
		
	atom[69].atomicwt=173.04;
	strcpy(atom[70].name,"LUTETIUM");
		
	strcpy(atom[70].symbol,"Lu");
		
	atom[70].atomicnum=71;
		
	atom[70].atomicwt=174.96;
	strcpy(atom[71].name,"HAFNIUM");
		
	strcpy(atom[71].symbol,"Hf");
		
	atom[71].atomicnum=72;
		
	atom[71].atomicwt=178.49;
	strcpy(atom[72].name,"TANTALUM");
		
	strcpy(atom[72].symbol,"Ta");
		
	atom[72].atomicnum=73;
		
	atom[72].atomicwt=180.94;
	strcpy(atom[73].name,"TUNGSTEN");
		
	strcpy(atom[73].symbol,"Lu");
		
	atom[73].atomicnum=74;
		
	atom[73].atomicwt=174.96;
	strcpy(atom[74].name,"RHENIUM");
		
	strcpy(atom[74].symbol,"Re");
		
	atom[74].atomicnum=75;
		
	atom[74].atomicwt=186.84;
	
	
	strcpy(atom[75].name,"OSMIUM");
		
	strcpy(atom[75].symbol,"Os");
		
	atom[75].atomicnum=76;
		
	atom[75].atomicwt=190.23;
	
	
	strcpy(atom[76].name,"IRIDIUM");
		
	strcpy(atom[76].symbol,"Ir");
		
	atom[76].atomicnum=77;
		
	atom[76].atomicwt=192.21;
	strcpy(atom[77].name,"PLATINUM");
		
	strcpy(atom[77].symbol,"Pt");
		
	atom[77].atomicnum=78;
		
	atom[77].atomicwt=195.07;
	strcpy(atom[78].name,"GOLD");
		
	strcpy(atom[78].symbol,"Au");
		
	atom[78].atomicnum=79;
		
	atom[78].atomicwt=196.96;
	strcpy(atom[79].name,"MERCURY");
		
	strcpy(atom[79].symbol,"Hg");
		
	atom[79].atomicnum=80;
		
	atom[79].atomicwt=200.59;
	strcpy(atom[80].name,"THALLIUM");
		
	strcpy(atom[80].symbol,"Tl");
		
	atom[80].atomicnum=81;
		
	atom[80].atomicwt=201.38;
	
	
	
	
	
	
	
	
	
	
	strcpy(atom[81].name,"LEAD");
		
	strcpy(atom[81].symbol,"Pb");
		
	atom[81].atomicnum=82;
		
	atom[81].atomicwt=201.20;
	
	
	strcpy(atom[82].name,"BISMITH");
		
	strcpy(atom[82].symbol,"Bi");
		
	atom[82].atomicnum=83;
		
	atom[82].atomicwt=208.98;
	
	
	strcpy(atom[83].name,"POLONIUM");
		
	strcpy(atom[83].symbol,"Po");
		
	atom[83].atomicnum=84;
		
	atom[83].atomicwt=209.00;
	
	
	strcpy(atom[84].name,"Astatine");
		
	strcpy(atom[84].symbol,"At");
		
	atom[84].atomicnum=85;
		
	atom[84].atomicwt=210.00;
	
	
	strcpy(atom[85].name,"RADON");
		
	strcpy(atom[85].symbol,"Rn");
		
	atom[85].atomicnum=86;
		
	atom[85].atomicwt=222.00;
	
	
	strcpy(atom[86].name,"FRANCIUM");
		
	strcpy(atom[86].symbol,"Fr");
		
	atom[86].atomicnum=87;
		
	atom[86].atomicwt=223.00;
	
	
	strcpy(atom[87].name,"RADIUM");
		
	strcpy(atom[87].symbol,"Ra");
		
	atom[87].atomicnum=88;
		
	atom[87].atomicwt=226.00;
	
	
	strcpy(atom[88].name,"ACTINIUM");
		
	strcpy(atom[88].symbol,"Ac");
		
	atom[88].atomicnum=89;
		
	atom[88].atomicwt=227.00;
	
	
	strcpy(atom[89].name,"THORIUM");
		
	strcpy(atom[89].symbol,"Th");
		
	atom[89].atomicnum=90;
		
	atom[89].atomicwt=232.03;
	strcpy(atom[90].name,"PROTACTINIUM");
		
	strcpy(atom[90].symbol,"Pa");
		
	atom[90].atomicnum=91;
		
	atom[90].atomicwt=231.03;
	
	
	
	
	strcpy(atom[91].name,"URANIUM");
		
	strcpy(atom[91].symbol,"U");
		
	atom[91].atomicnum=92;
		
	atom[91].atomicwt=238.02;
	
	
	
	
	strcpy(atom[92].name,"NEPTUNIUM");
		
	strcpy(atom[92].symbol,"Np");
		
	atom[92].atomicnum=93;
		
	atom[92].atomicwt=237.00;
	
	
	
	
	strcpy(atom[93].name,"PLUTONIUM");
		
	strcpy(atom[93].symbol,"Pu");
		
	atom[93].atomicnum=94;
		
	atom[93].atomicwt=244.00;
	
	
	
	
	strcpy(atom[94].name,"AMERICIUM");
		
	strcpy(atom[94].symbol,"Am");
		
	atom[94].atomicnum=95;
		
	atom[94].atomicwt=243.00;
	strcpy(atom[95].name,"CURIUM");
		
	strcpy(atom[95].symbol,"Cm");
		
	atom[95].atomicnum=96;
		
	atom[95].atomicwt=247.00;
	
	
	
	
	
	
	
	
	strcpy(atom[96].name,"BERKELIUM");
		
	strcpy(atom[96].symbol,"Bk");
		
	atom[96].atomicnum=97;
		
	atom[96].atomicwt=247.00;
	
	
	
	
	strcpy(atom[97].name,"CALIFONIUM");
		
	strcpy(atom[97].symbol,"Cf");
		
	atom[97].atomicnum=98;
		
	atom[97].atomicwt=251.00;
	
	
	
	
	strcpy(atom[98].name,"EINSTEINIUM");
		
	strcpy(atom[98].symbol,"Es");
		
	atom[98].atomicnum=99;
		
	atom[98].atomicwt=252.00;
	
	
	
	
	strcpy(atom[99].name,"FERMIUM");
		
	strcpy(atom[99].symbol,"Fm");
		
	atom[99].atomicnum=257.00;
		
	atom[99].atomicwt=231.03;
	
	
	
	
	strcpy(atom[100].name,"MENDELEVIUM");
		
	strcpy(atom[100].symbol,"Md");
		
	atom[100].atomicnum=101;
		
	atom[100].atomicwt=258.00;
	
	
	
	
	strcpy(atom[101].name,"NOBELIUM");
		
	strcpy(atom[101].symbol,"Np");
		
	atom[101].atomicnum=102;
		
	atom[101].atomicwt=259.00;
	
	
	
	
	strcpy(atom[102].name,"LAWRENCIUM");
		
	strcpy(atom[102].symbol,"Lr");
		
	atom[102].atomicnum=103;
		
	atom[102].atomicwt=262.00;
	
	
	
	
	strcpy(atom[103].name,"RUTHERFORDIUM");
		
	strcpy(atom[103].symbol,"Rf");
		
	atom[103].atomicnum=104;
		
	atom[103].atomicwt=261.00;
	
	
	
	
	strcpy(atom[104].name,"DUBNIUM");
		
	strcpy(atom[104].symbol,"Db");
		
	atom[104].atomicnum=105;
		
	atom[104].atomicwt=262.00;
	strcpy(atom[105].name,"SEABORGIUM");
		
	strcpy(atom[105].symbol,"Sg");
		
	atom[105].atomicnum=106;
		
	atom[105].atomicwt=266.00;
	
	
	
	
	strcpy(atom[106].name,"BOHRIUM");
		
	strcpy(atom[106].symbol,"Bh");
		
	atom[106].atomicnum=107;
		
	atom[106].atomicwt=264.00;
	
	
	
	
	strcpy(atom[107].name,"HASSSIUM");
		
	strcpy(atom[107].symbol,"Hs");
		
	atom[107].atomicnum=108;
		
	atom[107].atomicwt=277.00;
	strcpy(atom[108].name,"Meinerium");
		
	strcpy(atom[108].symbol,"Mt");
		
	atom[108].atomicnum=109;
		
	atom[108].atomicwt=268.00;


}
