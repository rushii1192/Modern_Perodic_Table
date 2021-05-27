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
    char uses[2700];
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
    strcpy(atom[0].history,"In 1776, Hydrogen was first identified as a distinct element by British scientist Henry Cavendish after he evolved hydrogen gas by reacting zinc metal with hydrochloric acid. In a demonstration to the Royal Society of London, Cavendish applied a spark to hydrogen gas yielding water. This discovery led to his later finding that water (H2O) is made of hydrogen and oxygen.");
    atom[0].melting_point = 14.01;
    atom[0].boiling_point = 20.28;
    atom[0].ionic_radius = 0.012;
    atom[0].isotopes = 7;
    atom[0].electronegativity = 2.20;
    strcpy(atom[0].color,"Many Colors");
    atom[0].group = 1;
    atom[0].period = 1;
    strcpy(atom[0].conductivity,"Non Conducting");
    strcpy(atom[0].luster,"No luster");
    strcpy(atom[0].phase,"Gas");
    atom[0].density = 0.00008;
    strcpy(atom[0].uses,"Hydrogen is the lightest of the chemical elements, the most common isotope contains no neutron and consists of only one proton and one electron, it is called Protium. Under conditions that normally prevail in the world, this atomic hydrogen is not available, instead of hydrogen, it is present in the dimerized form, the molecular hydrogen H2, a colorless and odorless gas.");
    strcpy(atom[0].image_path,"");


    strcpy(atom[1].name,"HELIUM");	
    strcpy(atom[1].symbol,"He");
    atom[1].atomicnum=2;
    atom[1].atomicwt=4.00;
    strcpy(atom[1].electronic_configuration,"1s2");
    strcpy(atom[1].history,"The first evidence of helium was obtained on August 18th, 1868 by French astronomer Jules Janssen. While in Guntur, India, Janssen observed a solar eclipse through a prism, whereupon he noticed a bright yellow spectral line (at 587.49 nanometers) emanating from the chromosphere of the Sun.");
    atom[1].melting_point = 95;
    atom[1].boiling_point = 4.22;
    atom[1].ionic_radius = 0.93;
    atom[1].isotopes = 2;
    atom[1].electronegativity = 0;
    strcpy(atom[1].color,"Colorless");
    atom[1].group = 18;
    atom[1].period = 1;
    strcpy(atom[1].conductivity,"high thermal conductivity");
    strcpy(atom[1].luster,"No Luster");
    strcpy(atom[1].phase,"Gas");
    atom[1].density = 0.00017;
    strcpy(atom[1].uses,"The helium uses in everyday life for medical applications. The important medical usage of liquefied helium is for the initiation towards magnetic resonance imaging (MRI) systems. Liquefied helium is consume as a refrigerant coolant for the hyper conductivity magnetic that are imperative compounds in many of these medical tools.");
    strcpy(atom[1].image_path,"");

    strcpy(atom[2].name,"LITHIUM");
    strcpy(atom[2].symbol,"Li");
    atom[2].atomicnum=3;
    atom[2].atomicwt=6.94;
    strcpy(atom[2].electronic_configuration,"[He] 2s1");
    strcpy(atom[2].history,"The first lithium mineral petalite, LiAlSi4O10, was discovered on the Swedish island of Utö by the Brazilian, Jozé Bonifácio de Andralda e Silva in the 1790s. It was observed to give an intense crimson flame when thrown onto a fire. In 1817, Johan August Arfvedson of Stockholm analysed it and deduced it contained a previously unknown metal, which he called lithium.");
    atom[2].melting_point = 453.69;
    atom[2].boiling_point = 1560;
    atom[2].ionic_radius = 0.76;
    atom[2].isotopes = 10;
    atom[2].electronegativity = 0.98;
    strcpy(atom[2].color,"Silvery-white");
    atom[2].group = 1;
    atom[2].period = 2;
    strcpy(atom[2].conductivity,"Thermal conductivity");
    strcpy(atom[2].luster,"Metallic");
    strcpy(atom[2].phase,"Solid");
    atom[2].density = 0.534;
    strcpy(atom[2].uses,"The most important use of lithium is in rechargeable batteries for mobile phones, laptops, digital cameras and electric vehicles. Lithium is also used in some non-rechargeable batteries for things like heart pacemakers, toys and clocks. Lithium metal is made into alloys with aluminium and magnesium, improving their strength and making them lighter. A magnesium-lithium alloy is used for armour plating. Aluminium-lithium alloys are used in aircraft, bicycle frames and high-speed trains.");
    strcpy(atom[2].image_path,"");



    strcpy(atom[3].name,"BERYLLIUM");	
    strcpy(atom[3].symbol,"Be");	
    atom[3].atomicnum=4;	
    atom[3].atomicwt=9.01;
    strcpy(atom[3].electronic_configuration,"[He] 2s2");
    strcpy(atom[3].history,"Elemental (metallic) beryllium was isolated in 1828 by two chemists, working independently: Antoine Bussy (France) and Friedrich Wöhler (Germany). Copper beryllium alloys were first patented and used as the conductive spring components of telephone switchboard relays produced in Germany.");
    atom[3].melting_point = 1560;
    atom[3].boiling_point = 2742;
    atom[3].ionic_radius = 0.45;
    atom[3].isotopes = 11;
    atom[3].electronegativity = 1.57;
    strcpy(atom[3].color,"silver gray metallic");
    atom[3].group = 2;
    atom[3].period = 2;
    strcpy(atom[3].conductivity,"Electrically Conducting");
    strcpy(atom[3].luster,"Silver white");
    strcpy(atom[3].phase,"Solid");
    atom[3].density = 1.85;
    strcpy(atom[3].uses,"Beryllium is used as an alloying agent. It possesses high strength, non-magnetic properties, better resistance, and dimensionally stable over a significant range of temperature. Beryllium fused with copper forms alloys which are used in defense and aerospace industries is a typical application of Beryllium.");
    strcpy(atom[3].image_path,"");


    strcpy(atom[4].name,"BORON");	
    strcpy(atom[4].symbol,"B");
    atom[4].atomicnum=5;
    atom[4].atomicwt=10.81;
    strcpy(atom[4].electronic_configuration,"[He] 2s2 2p1");
    strcpy(atom[4].history,"Jöns Jacob Berzelius identified boron as an element in 1824. Pure boron was arguably first produced by the American chemist Ezekiel Weintraub in 1909. The earliest routes to elemental boron involved the reduction of boric oxide with metals such as magnesium or aluminium.");
    atom[4].melting_point = 2349;
    atom[4].boiling_point = 4200;
    atom[4].ionic_radius = 0.23;
    atom[4].isotopes = 14;
    atom[4].electronegativity = 2.04;
    strcpy(atom[4].color,"Blue");
    atom[4].group = 13;
    atom[4].period = 2;
    strcpy(atom[4].conductivity,"Thermal Conducting");
    strcpy(atom[4].luster,"No luster");
    strcpy(atom[4].phase,"Solid");
    atom[4].density = 2.34;
    strcpy(atom[4].uses,"Much boron is made into sodium tetraborate which is used to insulate fiberglass. Most boron is used to produce glass and ceramics. Boron filaments are used as light but high-strength materials for aerospace structures. Boron carbide shields can be used as control rods in nuclear reactors.");
    strcpy(atom[4].image_path,"");


    strcpy(atom[5].name,"CARBON");	
    strcpy(atom[5].symbol,"C");	
    atom[5].atomicnum=6;	
    atom[5].atomicwt=12.01;
    strcpy(atom[5].electronic_configuration,"[He] 2s2 2p2");
    strcpy(atom[5].history,"Although this element was discovered in prehistory, several individuals contributed to a clearer knowledge about its different properties and characteristics. For instance, French scientist Rene A. F. de Reaumur first showed in 1722 that through the absorption of carbon, it was possible to transform iron into steel. By 1772, the father of modern chemistry Antoine Lavoisier discovered that diamonds were in a way one form of carbon. In the textbook that he published in 1789, he classified it as an element.");
    atom[5].melting_point = 4000;
    atom[5].boiling_point = 4300;
    atom[5].ionic_radius = 0.16;
    atom[5].isotopes = 15;
    atom[5].electronegativity = 2.55;
    strcpy(atom[5].color,"Grey");
    atom[5].group = 14;
    atom[5].period = 2;
    strcpy(atom[5].conductivity,"Thermal Conductivity");
    strcpy(atom[5].luster,"Metallic");
    strcpy(atom[5].phase,"Solid and Liquid");
    atom[5].density = 2.267;
    strcpy(atom[5].uses,"There are many limited uses of carbon in its elemental form. But once it combines with another element, it changes itself into a useful substance for numerous things. Carbon is used as a base for the ink in inkjet printers. Carbon, in the form of carbon dioxide, is used in the manufacture of many fizzy and carbonated drinks.");
    strcpy(atom[5].image_path,"");

   


    strcpy(atom[6].name,"NITROGEN");	
    strcpy(atom[6].symbol,"N");
    atom[6].atomicnum=7;
    atom[6].atomicwt=14.00;
    strcpy(atom[6].electronic_configuration,"[He] 2s22p3 ");
    strcpy(atom[6].history,"Nitrogen in the form of ammonium chloride, NH4Cl, was known to the alchemists as sal ammonia. It was manufactured in Egypt by heating a mixture of dung, salt and urine. Nitrogen gas itself was obtained in the 1760s by both Henry Cavendish and Joseph Priestley and they did this by removing the oxygen from air. They noted it extinguished a lighted candle and that a mouse breathing it would soon die. Neither man deduced that it was an element. ");
    atom[6].melting_point = 63.2;
    atom[6].boiling_point = 77.355;
    atom[6].ionic_radius = 1.71;
    atom[6].isotopes = 16;
    atom[6].electronegativity = 3.04;
    strcpy(atom[6].color,"Colorless");
    atom[6].group = 15;
    atom[6].period = 2;
    strcpy(atom[6].conductivity,"Thermal Conductivity");
    strcpy(atom[6].luster,"No luster");
    strcpy(atom[6].phase,"Gas ");
    atom[6].density = 0.00114;
    strcpy(atom[6].uses,"Nitrogen is important to the chemical industry. It is used to make fertilisers, nitric acid, nylon, dyes and explosives. To make these products, nitrogen must first be reacted with hydrogen to produce ammonia. This is done by the Haber process. 150 million tonnes of ammonia are produced in this way every year. Nitrogen gas is also used to provide an unreactive atmosphere. It is used in this way to preserve foods, and in the electronics industry during the production of transistors and diodes. Large quantities of nitrogen are used in annealing stainless steel and other steel mill products. Annealing is a heat treatment that makes steel easier to work.");
    strcpy(atom[6].image_path,"");



    strcpy(atom[7].name,"OXYGEN");	
    strcpy(atom[7].symbol,"O");
    atom[7].atomicnum=8;
    atom[7].atomicwt=15.59;
    strcpy(atom[7].electronic_configuration,"[He] 2s22p4 ");
    strcpy(atom[7].history,"In 1608, Cornelius Drebbel had shown that heating saltpetre (potassium nitrate, KNO3) released a gas. This was oxygen although it was not identified as such. The credit for discovering oxygen is now shared by three chemists: an Englishman, a Swede, and a Frenchman. Joseph Priestley was the first to publish an account of oxygen, having made it in 1774 by focussing sunlight on to mercuric oxide (HgO), and collecting the gas which came off. He noted that a candle burned more brightly in it and that it made breathing easier. Unknown to Priestly, Carl Wilhelm Scheele had produced oxygen in June 1771. ");
    atom[7].melting_point = 54.36;
    atom[7].boiling_point = 90.188;
    atom[7].ionic_radius = 0.3;
    atom[7].isotopes = 17;
    atom[7].electronegativity = 3.44;
    strcpy(atom[7].color,"Colourless");
    atom[7].group = 16;
    atom[7].period = 2;
    strcpy(atom[7].conductivity,"Thermal conductivity");
    strcpy(atom[7].luster,"No luster");
    strcpy(atom[7].phase,"Gas");
    atom[7].density = 0.0013;
    strcpy(atom[7].uses,"The greatest commercial use of oxygen gas is in the steel industry. Large quantities are also used in the manufacture of a wide range of chemicals including nitric acid and hydrogen peroxide. It is also used to make epoxyethane (ethylene oxide), used as antifreeze and to make polyester, and chloroethene, the precursor to PVC. Oxygen gas is used for oxy-acetylene welding and cutting of metals. A growing use is in the treatment of sewage and of effluent from industry.");



    strcpy(atom[8].name,"FLUORINE");	
    strcpy(atom[8].symbol,"F");
    atom[8].atomicnum=9;
    atom[8].atomicwt=18.99;
    strcpy(atom[8].electronic_configuration,"[He] 2s22p5 ");
    strcpy(atom[8].history,"The early chemists were aware that metal fluorides contained an unidentified element similar to chlorine, but they could not isolate it. (The French scientist, André Ampère coined the name fluorine in 1812.) Even the great Humphry Davy was unable to produce the element, and he became ill by trying to isolate it from hydrofluoric acid. The British chemist George Gore in 1869 passed an electric current through liquid HF but found that the gas which was liberated reacted violently with his apparatus. He thought it was fluorine but was unable to collect it and prove it. Then in 1886 the French chemist Henri Moissan obtained it by the electrolysis of potassium bifluoride (KHF2) dissolved in liquid HF");
    atom[8].melting_point = 53.48;
    atom[8].boiling_point = 85.04;
    atom[8].ionic_radius = 1.33;
    atom[8].isotopes = 18;
    atom[8].electronegativity = 3.98;
    strcpy(atom[8].color,"Pale yellow-green");
    atom[8].group = 17;
    atom[8].period = 2;
    strcpy(atom[8].conductivity,"Bad conductor of electricity");
    strcpy(atom[8].luster,"Shiny");
    strcpy(atom[8].phase,"Solid");
    atom[8].density = 0.00155;
    strcpy(atom[8].uses,"There was no commercial production of fluorine until the Second World War, when the development of the atom bomb, and other nuclear energy projects, made it necessary to produce large quantities. Before this, fluorine salts, known as fluorides, were for a long time used in welding and for frosting glass. The element is used to make uranium hexafluoride, needed by the nuclear power industry to separate uranium isotopes. It is also used to make sulfur hexafluoride, the insulating gas for high-power electricity transformers. Fluoride is an essential ion for animals, strengthening teeth and bones. It is added to drinking water in some areas. The presence of fluorides below 2 parts per million in drinking water is believed to prevent dental cavities. However, above this concentration it may cause children’s tooth enamel to become mottled. Fluoride is also added to toothpaste");
    strcpy(atom[8].image_path,"");



    strcpy(atom[9].name,"NEON");      
    strcpy(atom[9].symbol,"Ne");        
    atom[9].atomicnum=10;        
    atom[9].atomicwt=20.18;
    strcpy(atom[9].electronic_configuration,"[He] 2s22p6");
    strcpy(atom[9].history,"In 1898, William Ramsay and Morris Travers at University College London isolated krypton gas by evaporating liquid argon. They had been expecting to find a lighter gas which would fit a niche above argon in the periodic table of the elements. They then repeated their experiment, this time allowing solid argon to evaporate slowly under reduced pressure and collected the gas which came off first. This time they were successful, and when they put a sample of the new gas into their atomic spectrometer it startled them by the brilliant red glow that we now associate with neon signs. Ramsay named the new gas neon, basing it on neos, the Greek word for new.");
    atom[9].melting_point = 24.56;
    atom[9].boiling_point = 27.104;
    atom[9].ionic_radius = 0;
    atom[9].isotopes = 19;
    atom[9].electronegativity = 0;
    strcpy(atom[9].color,"Colourless");
    atom[9].group = 18;
    atom[9].period = 2;
    strcpy(atom[9].conductivity,"Thermal Conductivity");
    strcpy(atom[9].luster,"No Luster");
    strcpy(atom[9].phase,"Gas");
    atom[9].density = 0.00082;
    strcpy(atom[9].uses,"The largest use of neon is in making the ubiquitous ‘neon signs’ for advertising. In a vacuum discharge tube neon glows a reddish orange colour. Only the red signs actually contain pure neon. Others contain different gases to give different colours. Neon is also used to make high-voltage indicators and switching gear, lightning arresters, diving equipment and lasers. Liquid neon is an important cryogenic refrigerant. It has over 40 times more refrigerating capacity per unit volume than liquid helium, and more than 3 times that of liquid hydrogen.");
    strcpy(atom[9].image_path,"");



    strcpy(atom[10].name,"SODIUM");       
    strcpy(atom[10].symbol,"Na");        
    atom[10].atomicnum=11;        
    atom[10].atomicwt=22.99;
    strcpy(atom[10].electronic_configuration,"[Ne] 3s1");
    strcpy(atom[10].history,"Salt (sodium chloride, NaCl) and soda (sodium carbonate, Na2CO3) had been known since prehistoric times, the former used as a flavouring and preservative, and the latter for glass manufacture. Salt came from seawater, while soda came from the Natron Valley in Egypt or from the ash of certain plants. Their composition was debated by early chemists and the solution finally came from the Royal Institution in London in October 1807 where Humphry Davy exposed caustic soda (sodium hydroxide, NaOH) to an electric current and obtained globules of sodium metal, just as he had previously done for potassium, although he needed to use a stronger current. The following year, Louis-Josef Gay-Lussac and Louis-Jacques Thénard obtained sodium by heating to red heat a mixture of caustic soda and iron filings.");
    atom[10].melting_point = 370.94;
    atom[10].boiling_point = 1621.2;
    atom[10].ionic_radius = 0.98;
    atom[10].isotopes = 20;
    atom[10].electronegativity = 0.93;
    strcpy(atom[10].color,"silvery-white");
    atom[10].group = 1;
    atom[10].period = 3;
    strcpy(atom[10].conductivity,"Electrical conductivity");
    strcpy(atom[10].luster,"Metallic");
    strcpy(atom[10].phase,"Solid");
    atom[10].density = 0.97 ;
    strcpy(atom[10].uses,"Sodium is used as a heat exchanger in some nuclear reactors, and as a reagent in the chemicals industry. But sodium salts have more uses than the metal itself. The most common compound of sodium is sodium chloride (common salt). It is added to food and used to de-ice roads in winter. It is also used as a feedstock for the chemical industry. Sodium carbonate (washing soda) is also a useful sodium salt. It is used as a water softener.");
    strcpy(atom[10].image_path,"");



    strcpy(atom[11].name,"MAGNESIUM");        
    strcpy(atom[11].symbol,"Mg");        
    atom[11].atomicnum=12;      
    atom[11].atomicwt=24.30;
    strcpy(atom[11].electronic_configuration,"[Ne] 3s2");
    strcpy(atom[11].history,"The first person to recognise that magnesium was an element was Joseph Black at Edinburgh in 1755. He distinguished magnesia (magnesium oxide, MgO) from lime (calcium oxide, CaO) although both were produced by heating similar kinds of carbonate rocks, magnesite and limestone respectively. Another magnesium mineral called meerschaum (magnesium silicate) was reported by Thomas Henry in 1789, who said that it was much used in Turkey to make pipes for smoking tobacco. An impure form of metallic magnesium was first produced in 1792 by Anton Rupprecht who heated magnesia with charcoal. A pure, but tiny, amount of the metal was isolated in 1808 by Humphry Davy by the electrolysis of magnesium oxide. However, it was the French scientist, Antoine-Alexandre-Brutus Bussy who made a sizeable amount of the metal in 1831 by reacting magnesium chloride with potassium, and he then studied its properties.");
    atom[11].melting_point = 923;
    atom[11].boiling_point = 1363;
    atom[11].ionic_radius = 0.72;
    atom[11].isotopes = 21;
    atom[11].electronegativity = 1.31;
    strcpy(atom[11].color,"Silvery-white");
    atom[11].group = 2;
    atom[11].period = 3;
    strcpy(atom[11].conductivity,"Thermal conductivity");
    strcpy(atom[11].luster,"Metallic");
    strcpy(atom[11].phase,"Solid");
    atom[11].density = 1.74 ;
    strcpy(atom[11].uses,"Magnesium is one-third less dense than aluminium. It improves the mechanical, fabrication and welding characteristics of aluminium when used as an alloying agent. These alloys are useful in aeroplane and car construction. Magnesium is used in products that benefit from being lightweight, such as car seats, luggage, laptops, cameras and power tools. It is also added to molten iron and steel to remove sulfur. Magnesium sulfate is sometimes used as a mordant for dyes. Magnesium hydroxide is added to plastics to make them fire retardant. Magnesium oxide is used to make heat-resistant bricks for fireplaces and furnaces. It is also added to cattle feed and fertilisers. Magnesium hydroxide (milk of magnesia), sulfate (Epsom salts), chloride and citrate are all used in medicine.");
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
    atom[12].isotopes = 22;
    atom[12].electronegativity = 1.61;
    strcpy(atom[12].color,"Silvery-white");
    atom[12].group = 13;
    atom[12].period = 3;
    strcpy(atom[12].conductivity,"Thermal conductivity");
    strcpy(atom[12].luster,"Metallic");
    strcpy(atom[12].phase,"Solid");
    atom[12].density = 2.70;
    strcpy(atom[12].uses,"Aluminium is used in a huge variety of products including cans, foils, kitchen utensils, window frames, beer kegs and aeroplane parts. This is because of its particular properties. It has low density, is non-toxic, has a high thermal conductivity, has excellent corrosion resistance and can be easily cast, machined and formed. It is also non-magnetic and non-sparking. It is the second most malleable metal and the sixth most ductile. Most commercially produced aluminium is extracted by the Hall–Héroult process. In this process aluminium oxide is dissolved in molten cryolite and then electrolytically reduced to pure aluminium. Making aluminium is very energy intensive. 5% of the electricity generated in the USA is used in aluminium production. However, once it has been made it does not readily corrode and can be easily recycled. Aluminium can accumulate in the body, and a link with Alzheimer’s disease (senile dementia) has been suggested but not proven.");
    strcpy(atom[12].image_path,"");



    strcpy(atom[13].name,"SILICON");        
    strcpy(atom[13].symbol,"Si");        
    atom[13].atomicnum=14;        
    atom[13].atomicwt=28.08;
    strcpy(atom[13].electronic_configuration,"[Ne] 3s23p2");
    strcpy(atom[13].history,"Silica (SiO2) in the form of sharp flints were among the first tools made by humans. The ancient civilizations used other forms of silica such as rock crystal, and knew how to turn sand into glass. Considering silicon’s abundance, it is somewhat surprising that it aroused little curiosity among early chemists. Attempts to reduce silica to its components by electrolysis had failed. In 1811, Joseph Gay Lussac and Louis Jacques Thénard reacted silicon tetrachloride with potassium metal and produced some very impure form of silicon. The credit for discovering silicon really goes to the Swedish chemist Jöns Jacob Berzelius of Stockholm who, in 1824, obtained silicon by heating potassium fluorosilicate with potassium. The product was contaminated with potassium silicide, but he removed this by stirring it with water, with which it reacts, and thereby obtained relatively pure silicon powder.");
    atom[13].melting_point = 1687;
    atom[13].boiling_point = 3538;
    atom[13].ionic_radius = 0.26;
    atom[13].isotopes = 23;
    atom[13].electronegativity = 1.90;
    strcpy(atom[13].color,"Blue-grey");
    atom[13].group = 14;
    atom[13].period = 3;
    strcpy(atom[13].conductivity,"Electrical Conductivity");
    strcpy(atom[13].luster,"Metallic");
    strcpy(atom[13].phase,"Solid");
    atom[13].density = 2.3296;
    strcpy(atom[13].uses,"Silicon is one of the most useful elements to mankind. Most is used to make alloys including aluminium-silicon and ferro-silicon (iron-silicon). These are used to make dynamo and transformer plates, engine blocks, cylinder heads and machine tools and to deoxidise steel. Silicon is also used to make silicones. These are silicon-oxygen polymers with methyl groups attached. Silicone oil is a lubricant and is added to some cosmetics and hair conditioners. Silicone rubber is used as a waterproof sealant in bathrooms and around windows, pipes and roofs. The element silicon is used extensively as a semiconductor in solid-state devices in the computer and microelectronics industries. For this, hyperpure silicon is needed. The silicon is selectively doped with tiny amounts of boron, gallium, phosphorus or arsenic to control its electrical properties. Silicon carbides are important abrasives and are also used in lasers.");
    strcpy(atom[13].image_path,"");



    strcpy(atom[14].name,"PHOSPHOROUS");        
    strcpy(atom[14].symbol,"P");        
    atom[14].atomicnum=15;       
    atom[14].atomicwt=30.97;
    strcpy(atom[14].electronic_configuration,"[Ne] 3s23p3 ");
    strcpy(atom[14].history,"Phosphorus was first made by Hennig Brandt at Hamburg in 1669 when he evaporated urine and heated the residue until it was red hot, whereupon phosphorus vapour distilled which he collected by condensing it in water. Brandt kept his discovery secret, thinking he had discovered the Philosopher’s Stone that could turn base metals into gold. When he ran out of money, he sold phosphorus to Daniel Kraft who exhibited it around Europe including London where Robert Boyle was fascinated by it. He discovered how it was produced and investigated it systematically. (His assistant Ambrose Godfrey set up his own business making and selling phosphorus and became rich.) When it was realised that bone was calcium phosphate, and could be used to make phosphorus, and it became more widely available. Demand from match manufacturers in the 1800s ensured a ready market.");
    atom[14].melting_point = 317.3;
    atom[14].boiling_point = 553.7;
    atom[14].ionic_radius = 0.17;
    atom[14].isotopes = 24;
    atom[14].electronegativity = 2.19;
    strcpy(atom[14].color,"White and Red");
    atom[14].group = 15;
    atom[14].period = 3;
    strcpy(atom[14].conductivity,"Thermal conductivity");
    strcpy(atom[14].luster,"No luster");
    strcpy(atom[14].phase,"Solid");
    atom[14].density = 1.823;
    strcpy(atom[14].uses,"White phosphorus is used in flares and incendiary devices. Red phosphorus is in the material stuck on the side of matchboxes, used to strike safety matches against to light them. Phosphorus is essential to all living things. It forms the sugar-phosphate backbone of DNA and RNA. It is important for energy transfer in cells as part of ATP (adenosine triphosphate), and is found in many other biologically important molecules. We take in about 1 gram of phosphate a day, and store about 750 grams in our bodies, since our bones and teeth are mainly calcium phosphate. Over-use of phosphates from fertilisers and detergents can cause them to pollute rivers and lakes causing algae to grow rapidly. The algae block out light stopping further photosynthesis. Oxygen dissolved in the water soon gets used up and the lake dies. White phosphorus is manufactured industrially by heating phosphate rock in the presence of carbon and silica in a furnace. This produces phosphorus as a vapour, which is then collected under water. Red phosphorus is made by gently heating white phosphorus to about 250°C in the absence of air.");
    strcpy(atom[14].image_path,"");



    strcpy(atom[15].name,"SULPHUR");        
    strcpy(atom[15].symbol,"S");        
    atom[15].atomicnum=16;        
    atom[15].atomicwt=32.06;


    strcpy(atom[16].name,"CHLORINE");        
    strcpy(atom[16].symbol,"Cl");        
    atom[16].atomicnum=17;        
    atom[16].atomicwt=35.45;


    strcpy(atom[17].name,"ARGON");        
    strcpy(atom[17].symbol,"Ar");        
    atom[17].atomicnum=18;        
    atom[17].atomicwt=39.94;


    strcpy(atom[18].name,"POTASSIUM");       
    strcpy(atom[18].symbol,"K");        
    atom[18].atomicnum=19;        
    atom[18].atomicwt=39.09;


    strcpy(atom[19].name,"CALICUM");        
    strcpy(atom[19].symbol,"Ca");        
    atom[19].atomicnum=20;        
    atom[19].atomicwt=40.07;


    strcpy(atom[20].name,"SCANDIUM");       
    strcpy(atom[20].symbol,"Sc");        
    atom[20].atomicnum=21;        
    atom[20].atomicwt=44.95;


    strcpy(atom[21].name,"TITANIUM");        
    strcpy(atom[21].symbol,"Ti");        
    atom[21].atomicnum=22;        
    atom[21].atomicwt=47.86;


    strcpy(atom[22].name,"VANADIUM");        
    strcpy(atom[22].symbol,"V");        
    atom[22].atomicnum=23;        
    atom[22].atomicwt=50.94;


    strcpy(atom[23].name,"CHROMIUM");        
    strcpy(atom[23].symbol,"Cr");        
    atom[23].atomicnum=24;        
    atom[23].atomicwt=51.99;


    strcpy(atom[24].name,"MANGANESE");        
    strcpy(atom[24].symbol,"Mg");        
    atom[24].atomicnum=25;        
    atom[24].atomicwt=54.84;


    strcpy(atom[25].name,"IRON");        
    strcpy(atom[25].symbol,"Fe");        
    atom[25].atomicnum=26;        
    atom[25].atomicwt=55.84;


    strcpy(atom[26].name,"COBALT");        
    strcpy(atom[26].symbol,"Co");        
    atom[26].atomicnum=27;        
    atom[26].atomicwt=58.93;


    strcpy(atom[27].name,"NICKEL");        
    strcpy(atom[27].symbol,"Ni");        
    atom[27].atomicnum=28;        
    atom[27].atomicwt=58.69;


    strcpy(atom[28].name,"COPPER");       
    strcpy(atom[28].symbol,"Cu");        
    atom[28].atomicnum=29;
    atom[28].atomicwt=63.54;


    strcpy(atom[29].name,"ZINC");        
    strcpy(atom[29].symbol,"Zn");        
    atom[29].atomicnum=30;       
    atom[29].atomicwt=65.39;


    strcpy(atom[30].name,"GALLIUM");     
    strcpy(atom[30].symbol,"Ga");        
    atom[30].atomicnum=31;        
    atom[30].atomicwt=69.72;


    strcpy(atom[31].name,"GERMANIUM");        
    strcpy(atom[31].symbol,"Ge");        
    atom[31].atomicnum=32;        
    atom[31].atomicwt=72.64;


    strcpy(atom[32].name,"ARSENIC");        
    strcpy(atom[32].symbol,"As");        
    atom[32].atomicnum=33;        
    atom[32].atomicwt=74.92;


    strcpy(atom[33].name,"SELENIUM");        
    strcpy(atom[33].symbol,"Se");        
    atom[33].atomicnum=34;        
    atom[33].atomicwt=78.96;


    strcpy(atom[34].name,"BROMINE");        
    strcpy(atom[34].symbol,"Br");        
    atom[34].atomicnum=35;        
    atom[34].atomicwt=79.90;


    strcpy(atom[35].name,"KRYPTON");        
    strcpy(atom[35].symbol,"Kr");        
    atom[35].atomicnum=36;        
    atom[35].atomicwt=83.80;


    strcpy(atom[36].name,"RUBIDIUM");        
    strcpy(atom[36].symbol,"Rb");        
    atom[36].atomicnum=37;        
    atom[36].atomicwt=85.46;


    strcpy(atom[37].name,"STRONTIUM");        
    strcpy(atom[37].symbol,"Sr");       
    atom[37].atomicnum=38;        
    atom[37].atomicwt=87.62;


    strcpy(atom[38].name,"YTTRIUM");        
    strcpy(atom[38].symbol,"Y");        
    atom[38].atomicnum=39;        
    atom[38].atomicwt=88.90;


    strcpy(atom[39].name,"ZIRCONIUM");       
    strcpy(atom[39].symbol,"Zr");        
    atom[39].atomicnum=40;        
    atom[39].atomicwt=91.22;


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
