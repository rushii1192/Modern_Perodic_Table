#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elements.h"

struct quiz
{
    char questions[200];
    char correct_answer[100];
};




struct quiz quiz_details[250];
struct element quiz_element[118];
//you can start from here

struct quiz question_search()
{
    strcpy(quiz_details[0].questions,"Atomic number of Helium is________");
    strcpy(quiz_details[0].correct_answer,"2");

    strcpy(quiz_details[1].questions,"Symbol of Iridium is________");
    strcpy(quiz_details[1].correct_answer,"Ir");
    
    strcpy(quiz_details[2].questions,"Atomic number of Oxygen is________");
    strcpy(quiz_details[2].correct_answer,"8");

    strcpy(quiz_details[3].questions,"Symbol of Vanadium is________");
    strcpy(quiz_details[3].correct_answer,"V");

    strcpy(quiz_details[4].questions,"Atomic mass of Lithium is________");
    strcpy(quiz_details[4].correct_answer,"7");

    strcpy(quiz_details[5].questions,"Symbol of Osmium is________");
    strcpy(quiz_details[5].correct_answer,"Os");

    strcpy(quiz_details[6].questions,"Symbol of Fermium is________");
    strcpy(quiz_details[6].correct_answer,"Fm");

    strcpy(quiz_details[7].questions,"Atomic number of Berkelium is________");
    strcpy(quiz_details[7].correct_answer,"97");

    strcpy(quiz_details[8].questions,"Atomic mass of Uranium is________");
    strcpy(quiz_details[8].correct_answer,"239");

      
    strcpy(quiz_details[10].questions,"Atomic number of Neon is________");
    strcpy(quiz_details[10].correct_answer,"21");

    strcpy(quiz_details[11].questions,"Atomic mass of Zinc is________");
    strcpy(quiz_details[11].correct_answer,"66");

    strcpy(quiz_details[12].questions,"Atomic number of Calcium is________");
    strcpy(quiz_details[12].correct_answer,"20"); 

    strcpy(quiz_details[13].questions,"Symbol of Hafnium is________");
    strcpy(quiz_details[13].correct_answer,"Hf"); 

    strcpy(quiz_details[14].questions,"Element having atomic number 39________");
    strcpy(quiz_details[14].correct_answer,"Yttrium"); 

    strcpy(quiz_details[15].questions,"Atomic mass of Lead is________");
    strcpy(quiz_details[15].correct_answer,"208");

    strcpy(quiz_details[16].questions,"Atomic number of Cerium is________");
    strcpy(quiz_details[16].correct_answer,"58");

    strcpy(quiz_details[17].questions,"Symbol of Gold is________");
    strcpy(quiz_details[17].correct_answer,"Au");

    strcpy(quiz_details[18].questions,"Element having atomic number 53________");
    strcpy(quiz_details[18].correct_answer,"Iodine");

    strcpy(quiz_details[19].questions,"Atomic mass of Europium is________");
    strcpy(quiz_details[19].correct_answer,"152");

    strcpy(quiz_details[20].questions,"Atomic mass of Bromine is________");
    strcpy(quiz_details[20].correct_answer,"80");

    strcpy(quiz_details[21].questions,"Symbol of Tungsten is________");
    strcpy(quiz_details[21].correct_answer,"W");

    strcpy(quiz_details[22].questions,"Element having atomic mass 239 is________");
    strcpy(quiz_details[22].correct_answer,"Uranium");

    strcpy(quiz_details[22].questions,"Atomic mass of Gallium is________");
    strcpy(quiz_details[22].correct_answer,"70");

    strcpy(quiz_details[23].questions,"Sybmol of Potassium is________");
    strcpy(quiz_details[23].correct_answer,"K");

    strcpy(quiz_details[24].questions,"Atomic mass of Francium is________");
    strcpy(quiz_details[24].correct_answer,"223");

    strcpy(quiz_details[25].questions,"Element having symbol Ho________");
    strcpy(quiz_details[25].correct_answer,"Holmium");

    strcpy(quiz_details[26].questions,"Atomic number of Krypton is________");
    strcpy(quiz_details[26].correct_answer,"36");

    strcpy(quiz_details[27].questions,"Element having atomic mass 222 has symbol________");
    strcpy(quiz_details[27].correct_answer,"Rn");

    strcpy(quiz_details[28].questions,"Atomic number of Cobalt is________");
    strcpy(quiz_details[28].correct_answer,"27");

    strcpy(quiz_details[29].questions,"Atomic mass of Iron is________");
    strcpy(quiz_details[29].correct_answer,"55");

    strcpy(quiz_details[30].questions,"Symbol of Lanthanum is________");
    strcpy(quiz_details[30].correct_answer,"La");

    strcpy(quiz_details[31].questions,"Atomic mass of Beryllium is________");
    strcpy(quiz_details[31].correct_answer,"9");

    strcpy(quiz_details[32].questions,"Atomic number of Sulphur is________");
    strcpy(quiz_details[32].correct_answer,"16");

    strcpy(quiz_details[33].questions,"Element having atomic mass 19________");
    strcpy(quiz_details[33].correct_answer,"Fluorine");

    strcpy(quiz_details[34].questions,"Atomic mass of Magnesium is________");
    strcpy(quiz_details[34].correct_answer,"24");

    strcpy(quiz_details[35].questions,"Atomic mass of Mercury is________");
    strcpy(quiz_details[35].correct_answer,"79");

    strcpy(quiz_details[36].questions,"Atomic number of Tin is________");
    strcpy(quiz_details[36].correct_answer,"50");

    strcpy(quiz_details[37].questions,"Element having symbol Xe has name________");
    strcpy(quiz_details[37].correct_answer,"Xenon");

    strcpy(quiz_details[38].questions,"Atomic number of Platinum is________");
    strcpy(quiz_details[38].correct_answer,"78");

    strcpy(quiz_details[39].questions,"Atomic mass of Curium is________");
    strcpy(quiz_details[39].correct_answer,"247");

    strcpy(quiz_details[40].questions,"Symbol of Barium is________");
    strcpy(quiz_details[40].correct_answer,"Ba");

    strcpy(quiz_details[41].questions,"Atomic number of Titanium is________");
    strcpy(quiz_details[41].correct_answer,"22");

    strcpy(quiz_details[42].questions,"Symbol of Aluminium is________");
    strcpy(quiz_details[42].correct_answer,"Al");

    strcpy(quiz_details[43].questions,"Atomic number of Fermium is________");
    strcpy(quiz_details[43].correct_answer,"100");

    strcpy(quiz_details[44].questions,"Symbol of Platinum is________");
    strcpy(quiz_details[44].correct_answer,"Pt");

    strcpy(quiz_details[45].questions,"Atomic mass of Gold is________");
    strcpy(quiz_details[45].correct_answer,"79");

    strcpy(quiz_details[46].questions,"Symbol of Scandium is________");
    strcpy(quiz_details[46].correct_answer,"Sc");

    strcpy(quiz_details[47].questions,"Element having atomic mass 70________");
    strcpy(quiz_details[47].correct_answer,"Gallium");

    strcpy(quiz_details[48].questions,"Symbol of Vanadium is________");
    strcpy(quiz_details[48].correct_answer,"V");

    strcpy(quiz_details[49].questions,"Atomic mass of Zirconium is________");
    strcpy(quiz_details[49].correct_answer,"92");

    strcpy(quiz_details[50].questions,"Atomic number of Rubidium ________");
    strcpy(quiz_details[50].correct_answer,"37");

    strcpy(quiz_details[51].questions,"Atomic mass of Californium ________");
    strcpy(quiz_details[51].correct_answer,"251");

    strcpy(quiz_details[52].questions,"Element having symbol Kr ________");
    strcpy(quiz_details[52].correct_answer,"Krypton");

    strcpy(quiz_details[53].questions,"Atomic number of Chlorine is________");
    strcpy(quiz_details[53].correct_answer,"17");

    strcpy(quiz_details[54].questions,"Atomic mass of Cadmium is  ________");
    strcpy(quiz_details[54].correct_answer,"48");

    strcpy(quiz_details[55].questions,"Symbol of Antimony is ________");
    strcpy(quiz_details[55].correct_answer,"Sb");

    strcpy(quiz_details[56].questions,"Atomic number of Neon is ________");
    strcpy(quiz_details[56].correct_answer,"10");

    strcpy(quiz_details[57].questions,"Atomic mass of Aluminium is ________");
    strcpy(quiz_details[57].correct_answer,"27");

    strcpy(quiz_details[58].questions,"Symbol of Thorium is ________");
    strcpy(quiz_details[58].correct_answer,"Th");

    strcpy(quiz_details[59].questions,"Atomic number of Molybdenum is ________");
    strcpy(quiz_details[59].correct_answer,"42");

    strcpy(quiz_details[60].questions,"Atomic mass of Calcium is ________");
    strcpy(quiz_details[60].correct_answer,"40");

    strcpy(quiz_details[61].questions,"Atomic mass of Copper is ________");
    strcpy(quiz_details[61].correct_answer,"63");

    strcpy(quiz_details[62].questions,"Symbol of Sodium is ________");
    strcpy(quiz_details[62].correct_answer,"Na");

    strcpy(quiz_details[63].questions,"Atomic mass of Chromium is ________");
    strcpy(quiz_details[63].correct_answer,"52");

    strcpy(quiz_details[64].questions,"Atomic number of Mercury is ________");
    strcpy(quiz_details[64].correct_answer,"80");

    strcpy(quiz_details[65].questions,"Atomic number of Protactinium is ________");
    strcpy(quiz_details[65].correct_answer,"91");

    strcpy(quiz_details[66].questions,"Symbol of Argon is ________");
    strcpy(quiz_details[66].correct_answer,"Ar");

    strcpy(quiz_details[67].questions,"Atomic mass of Ce is ________");
    strcpy(quiz_details[67].correct_answer,"140");

    strcpy(quiz_details[68].questions,"Atomic number of Fluorine is ________");
    strcpy(quiz_details[68].correct_answer,"9");

    strcpy(quiz_details[69].questions,"Element having atomic mass 80 ________");
    strcpy(quiz_details[69].correct_answer,"Bromine");

    strcpy(quiz_details[70].questions,"Atomic mass of Cadmium is ________");
    strcpy(quiz_details[70].correct_answer,"112");

    strcpy(quiz_details[71].questions,"Atomic number of Nickel is ________");
    strcpy(quiz_details[71].correct_answer,"28");

    strcpy(quiz_details[72].questions,"Symbol of Selenium is ________");
    strcpy(quiz_details[72].correct_answer,"Se");

    strcpy(quiz_details[73].questions,"Atomic mass of Potassium is ________");
    strcpy(quiz_details[73].correct_answer,"39");

    strcpy(quiz_details[74].questions,"Atomic number of Titanium is ________");
    strcpy(quiz_details[74].correct_answer,"22");

    strcpy(quiz_details[75].questions,"Atomic mass of Oxygen is ________");
    strcpy(quiz_details[75].correct_answer,"16");

    strcpy(quiz_details[76].questions,"Symbol of Erbium of Cadmium is ________");
    strcpy(quiz_details[76].correct_answer,"Er");

    strcpy(quiz_details[77].questions,"Atomic mass of Barium is ________");
    strcpy(quiz_details[77].correct_answer,"137");

    strcpy(quiz_details[78].questions,"Atomic number of Pb is ________");
    strcpy(quiz_details[78].correct_answer,"82");

    strcpy(quiz_details[79].questions,"Atomic number of Rubidium is ________");
    strcpy(quiz_details[79].correct_answer,"37");

    strcpy(quiz_details[80].questions,"Atomic mass of Platinum is ________");
    strcpy(quiz_details[80].correct_answer,"195");

    strcpy(quiz_details[81].questions,"Symbol of Tantalum is ________");
    strcpy(quiz_details[81].correct_answer,"Ta");

    strcpy(quiz_details[82].questions,"Atomic mass of Praseodymium is ________");
    strcpy(quiz_details[82].correct_answer,"141");

    strcpy(quiz_details[83].questions,"Atomic number of Zinc is ________");
    strcpy(quiz_details[83].correct_answer,"30");

    strcpy(quiz_details[84].questions,"Atomic number of I is ________");
    strcpy(quiz_details[84].correct_answer,"53");

    strcpy(quiz_details[85].questions,"Element having atomic number 79 has symbol ________");
    strcpy(quiz_details[85].correct_answer,"Au");

    strcpy(quiz_details[86].questions,"Atomic mass of Carbon is ________");
    strcpy(quiz_details[86].correct_answer,"12");

    strcpy(quiz_details[87].questions,"Atomic number of Ni is ________");
    strcpy(quiz_details[87].correct_answer,"28");

    strcpy(quiz_details[88].questions,"Atomic mass of Tin is ________");
    strcpy(quiz_details[88].correct_answer,"118");

    strcpy(quiz_details[89].questions,"Atomic mass of Be is ________");
    strcpy(quiz_details[89].correct_answer,"9.01");

    strcpy(quiz_details[90].questions,"Atomic number of Holmium is ________");
    strcpy(quiz_details[90].correct_answer,"67");

    strcpy(quiz_details[91].questions,"Symbol of Arsenic is ________");
    strcpy(quiz_details[91].correct_answer,"Ar");

    strcpy(quiz_details[92].questions,"Atomic mass Neon is ________");
    strcpy(quiz_details[92].correct_answer,"20.17");

    strcpy(quiz_details[93].questions,"Atomic number of Radon is ________");
    strcpy(quiz_details[93].correct_answer,"86");

    strcpy(quiz_details[94].questions,"Atomic mass of Nitrogen is ________");
    strcpy(quiz_details[94].correct_answer,"14");

    strcpy(quiz_details[95].questions,"Symbol of Palladium is ________");
    strcpy(quiz_details[95].correct_answer,"Pd");

    strcpy(quiz_details[96].questions,"Atomic mass of Nb is ________");
    strcpy(quiz_details[96].correct_answer,"92.90");

    strcpy(quiz_details[97].questions,"Atomic number of Caesium is ________");
    strcpy(quiz_details[97].correct_answer,"55");

    strcpy(quiz_details[98].questions,"Atomic mass of Nickel is ________");
    strcpy(quiz_details[98].correct_answer,"58.69");

    strcpy(quiz_details[99].questions,"Symbol of Boron of is ________");
    strcpy(quiz_details[99].correct_answer,"B");

    strcpy(quiz_details[100].questions,"Atomic number of Tm is ________");
    strcpy(quiz_details[100].correct_answer,"69");

    strcpy(quiz_details[101].questions,"Element having atomic number 57 is ________");
    strcpy(quiz_details[101].correct_answer,"Lanthanum");

    strcpy(quiz_details[102].questions,"Atomic number of Cr is ________");
    strcpy(quiz_details[102].correct_answer,"24");

    strcpy(quiz_details[103].questions,"Symbol of Silver of is ________");
    strcpy(quiz_details[103].correct_answer,"Ag");

    strcpy(quiz_details[104].questions,"Atomic mass of Chlorine is ________");
    strcpy(quiz_details[104].correct_answer,"35.45");

    strcpy(quiz_details[105].questions,"Atomic number of Hf is ________");
    strcpy(quiz_details[105].correct_answer,"72");

    strcpy(quiz_details[106].questions,"Symbol of Neptunium is ________");
    strcpy(quiz_details[106].correct_answer,"Np");

    strcpy(quiz_details[107].questions,"Atomic mass of Titanium is ________");
    strcpy(quiz_details[107].correct_answer,"47.86");

    strcpy(quiz_details[108].questions,"Element having symbol Ac is ________");
    strcpy(quiz_details[108].correct_answer,"Actinium");

    strcpy(quiz_details[109].questions,"Atomic mass of Cr is ________");
    strcpy(quiz_details[109].correct_answer,"51.99");

    strcpy(quiz_details[110].questions,"Atomic mass of Cadmium is ________");
    strcpy(quiz_details[110].correct_answer,"112");

    strcpy(quiz_details[112].questions,"Atomic number of Gallium is ________");
    strcpy(quiz_details[112].correct_answer,"31");

    strcpy(quiz_details[113].questions,"Symbol of Cadmium is ________");
    strcpy(quiz_details[113].correct_answer,"Cd");

    strcpy(quiz_details[114].questions,"Atomic number of Krypton is ________");
    strcpy(quiz_details[114].correct_answer,"36");

    strcpy(quiz_details[115].questions,"Atomic mass of P is ________");
    strcpy(quiz_details[115].correct_answer,"30.97");

    strcpy(quiz_details[116].questions,"Atomic number of Sr is ________");
    strcpy(quiz_details[116].correct_answer,"38");

    strcpy(quiz_details[117].questions,"Element having atomic atomic number 56 is ________");
    strcpy(quiz_details[117].correct_answer,"Barium");

    strcpy(quiz_details[118].questions,"Atomic number of Al is ________");
    strcpy(quiz_details[118].correct_answer,"13");

    strcpy(quiz_details[119].questions,"Symbol of Samarium is ________");
    strcpy(quiz_details[119].correct_answer,"Sm");

    strcpy(quiz_details[120].questions,"Atomic mass of Iron is ________");
    strcpy(quiz_details[120].correct_answer,"55.84");

    strcpy(quiz_details[121].questions,"Atomic number of Ca is ________");
    strcpy(quiz_details[121].correct_answer,"20");

    strcpy(quiz_details[122].questions,"Element having symbol Ar has atomic number ________");
    strcpy(quiz_details[122].correct_answer,"18");

    strcpy(quiz_details[123].questions,"Atomic mass of Silicon is ________");
    strcpy(quiz_details[123].correct_answer,"28.085");

    strcpy(quiz_details[124].questions,"Element having symbol Rf is ________");
    strcpy(quiz_details[124].correct_answer,"Rutherfordium");

    strcpy(quiz_details[125].questions,"Atomic number of Tin is ________");
    strcpy(quiz_details[125].correct_answer,"50");

    strcpy(quiz_details[126].questions,"Atomic number of Cobalt is ________");
    strcpy(quiz_details[126].correct_answer,"27");

    strcpy(quiz_details[127].questions,"Symbol of Calcium is ________");
    strcpy(quiz_details[127].correct_answer,"Ca");

    strcpy(quiz_details[128].questions,"Atomic number of Hydrogen is ________");
    strcpy(quiz_details[128].correct_answer,"1");

    strcpy(quiz_details[129].questions,"Atomic mass of Yttrium is ________");
    strcpy(quiz_details[129].correct_answer,"88.90");

    strcpy(quiz_details[130].questions,"Symbol of Astatine is ________");
    strcpy(quiz_details[130].correct_answer,"At");

    strcpy(quiz_details[131].questions,"Atomic number of Polonium is ________");
    strcpy(quiz_details[131].correct_answer,"84");

    strcpy(quiz_details[132].questions,"Atomic number of W is ________");
    strcpy(quiz_details[132].correct_answer,"74");

    strcpy(quiz_details[133].questions,"Element having symbol Eu is ________");
    strcpy(quiz_details[133].correct_answer,"Europium");

    strcpy(quiz_details[134].questions,"Atomic mass of Copper is ________");
    strcpy(quiz_details[134].correct_answer,"63.54");

    strcpy(quiz_details[135].questions,"Atomic number of Bismuth is ________");
    strcpy(quiz_details[135].correct_answer,"83");

    strcpy(quiz_details[136].questions,"Atomic mass of Lu is ________");
    strcpy(quiz_details[136].correct_answer,"174.96");

    strcpy(quiz_details[137].questions,"Symbol of Scandium is ________");
    strcpy(quiz_details[137].correct_answer,"Sc");

    strcpy(quiz_details[138].questions,"Atomic number of Thallium is ________");
    strcpy(quiz_details[138].correct_answer,"81");

    strcpy(quiz_details[139].questions,"Element having atomic number 24 ________");
    strcpy(quiz_details[139].correct_answer,"Chromium");

    strcpy(quiz_details[140].questions,"Atomic mass of Rubidium is ________");
    strcpy(quiz_details[140].correct_answer,"85.46");

    strcpy(quiz_details[141].questions,"Atomic number of Se is ________");
    strcpy(quiz_details[141].correct_answer,"34");

    strcpy(quiz_details[142].questions,"Symbol of Fermium is ________");
    strcpy(quiz_details[142].correct_answer,"Fm");

    strcpy(quiz_details[143].questions,"Atomic number of Fm is ________");
    strcpy(quiz_details[143].correct_answer,"100");

    strcpy(quiz_details[144].questions,"Atomic mass of Nobelium is ________");
    strcpy(quiz_details[144].correct_answer,"259");

    strcpy(quiz_details[145].questions,"Symbol of Bohrium is ________");
    strcpy(quiz_details[145].correct_answer,"Bh");

    strcpy(quiz_details[146].questions,"Atomic number of Silicon is ________");
    strcpy(quiz_details[146].correct_answer,"14");

    strcpy(quiz_details[147].questions,"Atomic number of Mercury is ________");
    strcpy(quiz_details[147].correct_answer,"80");

    strcpy(quiz_details[148].questions,"Atomic number of In is ________");
    strcpy(quiz_details[148].correct_answer,"49");

    strcpy(quiz_details[149].questions,"Symbol of Gadolinium is ________");
    strcpy(quiz_details[149].correct_answer,"Gd");

    strcpy(quiz_details[150].questions,"Atomic mass of Dysprosium is ________");
    strcpy(quiz_details[150].correct_answer,"162.50");

    strcpy(quiz_details[151].questions,"Symbol of Lawrencium is ________");
    strcpy(quiz_details[151].correct_answer,"Lr");

    strcpy(quiz_details[152].questions,"Symbol of Flerovium is ________");
    strcpy(quiz_details[152].correct_answer,"Fl");

    strcpy(quiz_details[153].questions,"Atomic number of Tungsten is ________");
    strcpy(quiz_details[153].correct_answer,"74");

    strcpy(quiz_details[154].questions,"Atomic mass of Iridium is ________");
    strcpy(quiz_details[154].correct_answer,"192.21");

    strcpy(quiz_details[155].questions,"Element having symbol Cf is ________");
    strcpy(quiz_details[155].correct_answer,"Californium");

    strcpy(quiz_details[156].questions,"Atomic number of Antimony is ________");
    strcpy(quiz_details[156].correct_answer,"51");

    strcpy(quiz_details[157].questions,"Symbol of Nickel is ________");
    strcpy(quiz_details[157].correct_answer,"Ni");

    strcpy(quiz_details[158].questions,"Atomic number of Radon is ________");
    strcpy(quiz_details[158].correct_answer,"86");

    strcpy(quiz_details[159].questions,"Atomic mass of Vanadium is ________");
    strcpy(quiz_details[159].correct_answer,"50.94");

    strcpy(quiz_details[160].questions,"Symbol of Thorium is ________");
    strcpy(quiz_details[160].correct_answer,"Th");

    strcpy(quiz_details[161].questions,"Atomic number of Eu is ________");
    strcpy(quiz_details[161].correct_answer,"63");

    strcpy(quiz_details[162].questions,"Atomic number of Pd is ________");
    strcpy(quiz_details[162].correct_answer,"46");

    strcpy(quiz_details[163].questions,"Atomic number of Ar is ________");
    strcpy(quiz_details[163].correct_answer,"18");

    strcpy(quiz_details[164].questions,"Symbol of Molybdenum is ________");
    strcpy(quiz_details[164].correct_answer,"Mo");

    strcpy(quiz_details[165].questions,"Atomic mass of Pb is ________");
    strcpy(quiz_details[165].correct_answer,"207.2");

    strcpy(quiz_details[166].questions,"Atomic number of Potassium is ________");
    strcpy(quiz_details[166].correct_answer,"19");

    strcpy(quiz_details[167].questions,"Atomic mass of Ca is ________");
    strcpy(quiz_details[167].correct_answer,"40.07");

    strcpy(quiz_details[168].questions,"Symbol of Thallium is ________");
    strcpy(quiz_details[168].correct_answer,"Tl");

    strcpy(quiz_details[169].questions,"Atomic number of Gadolinium is ________");
    strcpy(quiz_details[169].correct_answer,"64");

    strcpy(quiz_details[170].questions,"Element having symbol No is ________");
    strcpy(quiz_details[170].correct_answer,"Nobelium");

    strcpy(quiz_details[171].questions,"Atomic number of N is ________");
    strcpy(quiz_details[171].correct_answer,"7");

    strcpy(quiz_details[172].questions,"Atomic number of Aluminium is ________");
    strcpy(quiz_details[172].correct_answer,"13");

    strcpy(quiz_details[173].questions,"Symbol  of Sodium is ________");
    strcpy(quiz_details[173].correct_answer,"Na");

    strcpy(quiz_details[174].questions,"Atomic number of Cobalt is ________");
    strcpy(quiz_details[174].correct_answer,"27");

    strcpy(quiz_details[175].questions,"Atomic mass of Aluminium is ________");
    strcpy(quiz_details[175].correct_answer,"26.98");

    strcpy(quiz_details[176].questions,"Atomic number of Silver is ________");
    strcpy(quiz_details[176].correct_answer,"47");

    strcpy(quiz_details[177].questions,"Atomic mass of Ruthenium is ________");
    strcpy(quiz_details[177].correct_answer,"101.07");

    strcpy(quiz_details[178].questions,"Atomic number of Zircomium is ________");
    strcpy(quiz_details[178].correct_answer,"47");

    strcpy(quiz_details[179].questions,"Symbol of Molybdenum is ________");
    strcpy(quiz_details[179].correct_answer,"Mo");

    strcpy(quiz_details[180].questions,"Atomic number of Fe is ________");
    strcpy(quiz_details[180].correct_answer,"26");

    strcpy(quiz_details[181].questions,"Atomic mass of Potassium is is ________");
    strcpy(quiz_details[181].correct_answer,"39.09");

    strcpy(quiz_details[182].questions,"Atomic number of Indium is ________");
    strcpy(quiz_details[182].correct_answer,"49");

    strcpy(quiz_details[183].questions,"Symbol of Zirconium is ________");
    strcpy(quiz_details[183].correct_answer,"Zr");

    strcpy(quiz_details[184].questions,"Atomic number of Neon is ________");
    strcpy(quiz_details[184].correct_answer,"10");

    strcpy(quiz_details[185].questions,"Atomic number of Ge is ________");
    strcpy(quiz_details[185].correct_answer,"32");

    strcpy(quiz_details[186].questions,"Atomic mass of Tl is ________");
    strcpy(quiz_details[186].correct_answer,"204.38");

    strcpy(quiz_details[187].questions,"Symbol of Osmium is ________");
    strcpy(quiz_details[187].correct_answer,"Os");

    strcpy(quiz_details[188].questions,"Atomic number of Vanadium is ________");
    strcpy(quiz_details[188].correct_answer,"23");

    strcpy(quiz_details[189].questions,"Atomic mass of Cadmium is ________");
    strcpy(quiz_details[189].correct_answer,"112.41");

    strcpy(quiz_details[190].questions,"Element having symbol W is ________");
    strcpy(quiz_details[190].correct_answer,"Tungsten");

    strcpy(quiz_details[191].questions,"Atomic number of Antimony is ________");
    strcpy(quiz_details[191].correct_answer,"51");

    strcpy(quiz_details[192].questions,"Symbol of Palladium is ________");
    strcpy(quiz_details[192].correct_answer,"Pd");

    strcpy(quiz_details[193].questions,"Atomic mass of Rh is ________");
    strcpy(quiz_details[193].correct_answer,"102.90");

    strcpy(quiz_details[194].questions,"Atomic number of Mercury is ________");
    strcpy(quiz_details[194].correct_answer,"80");

    strcpy(quiz_details[195].questions,"Symbol of Erbium is ________");
    strcpy(quiz_details[195].correct_answer,"Er");

    strcpy(quiz_details[196].questions,"Atomic mass of Phosphorus is ________");
    strcpy(quiz_details[196].correct_answer,"30.97");

    strcpy(quiz_details[197].questions,"Symbol of Gold is ________");
    strcpy(quiz_details[197].correct_answer,"Ag");

    strcpy(quiz_details[198].questions,"Atomic number of Beryllium is ________");
    strcpy(quiz_details[198].correct_answer,"4");

    strcpy(quiz_details[199].questions,"Atomic mass of Tellurium is ________");
    strcpy(quiz_details[199].correct_answer,"127.60");

    strcpy(quiz_details[200].questions,"Symbol of Seaborgium is ________");
    strcpy(quiz_details[200].correct_answer,"Sg");

    strcpy(quiz_details[201].questions,"Atomic number of Hafnium is ________");
    strcpy(quiz_details[201].correct_answer,"72");

    strcpy(quiz_details[202].questions,"Atomic mass Ge is ________");
    strcpy(quiz_details[202].correct_answer,"72.63")

    strcpy(quiz_details[203].questions,"Symbol of Oxygen is ________");
    strcpy(quiz_details[203].correct_answer,"O");

    strcpy(quiz_details[204].questions,"Atomic number of Arsenic is ________");
    strcpy(quiz_details[204].correct_answer,"33");

    strcpy(quiz_details[205].questions,"Atomic number of Tin is ________");
    strcpy(quiz_details[205].correct_answer,"50");

    strcpy(quiz_details[206].questions,"Atomic symbol of Strontium is ________");
    strcpy(quiz_details[206].correct_answer,"Sr");

    strcpy(quiz_details[207].questions,"Atomic mass of Gold is ________");
    strcpy(quiz_details[207].correct_answer,"196.96");

    strcpy(quiz_details[208].questions,"Atomic number of Moscovium is ________");
    strcpy(quiz_details[208].correct_answer,"115");

    strcpy(quiz_details[209].questions,"Symbol of Flerovium is ________");
    strcpy(quiz_details[209].correct_answer,"Fl");

    strcpy(quiz_details[210].questions,"Atomic mass of Y is ________");
    strcpy(quiz_details[210].correct_answer,"88.90");

    strcpy(quiz_details[211].questions,"Atomic mass of Aluminium is ________");
    strcpy(quiz_details[211].correct_answer,"26.98");

    strcpy(quiz_details[212].questions,"Atomic number of Dubnium is ________");
    strcpy(quiz_details[212].correct_answer,"105");

    strcpy(quiz_details[213].questions,"Symbol of Hassium is ________");
    strcpy(quiz_details[213].correct_answer,"Hs");

    strcpy(quiz_details[214].questions,"Atomic mass of Yttrium is ________");
    strcpy(quiz_details[214].correct_answer,"88.90");

    strcpy(quiz_details[215].questions,"Element having symbol Cu ________");
    strcpy(quiz_details[215].correct_answer,"Copper");

    strcpy(quiz_details[216].questions,"Atomic mass of Cadmium is ________");
    strcpy(quiz_details[216].correct_answer,"112.41");

    strcpy(quiz_details[217].questions,"Symbol of Antimony is ________");
    strcpy(quiz_details[217].correct_answer,"Sb");

    strcpy(quiz_details[218].questions,"Atomic number of Po is ________");
    strcpy(quiz_details[218].correct_answer,"84");

    strcpy(quiz_details[219].questions,"Element having symbol Pb ________");
    strcpy(quiz_details[219].correct_answer,"Lead");

    strcpy(quiz_details[220].questions,"Atomic mass of Iodine is ________");
    strcpy(quiz_details[220].correct_answer,"126.90");

    strcpy(quiz_details[221].questions,"Atomic number of Osmium is ________");
    strcpy(quiz_details[221].correct_answer,"76");

    strcpy(quiz_details[222].questions,"Symbol of Darmstadtium is ________");
    strcpy(quiz_details[222].correct_answer,"Ds");

    strcpy(quiz_details[223].questions,"Atomic number of Thallium is ________");
    strcpy(quiz_details[223].correct_answer,"81");

    strcpy(quiz_details[224].questions,"Atomic mass of Lithium is ________");
    strcpy(quiz_details[224].correct_answer,"6.94");

    strcpy(quiz_details[225].questions,"Element having atomic number 9 is ________");
    strcpy(quiz_details[225].correct_answer,"Fluorine");

    strcpy(quiz_details[226].questions,"Atomic number of Technetium is ________");
    strcpy(quiz_details[226].correct_answer,"43");

    strcpy(quiz_details[227].questions,"Atomic mass of Xenox is ________");
    strcpy(quiz_details[227].correct_answer,"131.29");

    strcpy(quiz_details[228].questions,"Symbol of Copernicium is ________");
    strcpy(quiz_details[228].correct_answer,"Cn");

    strcpy(quiz_details[229].questions,"Element having symbol Mt is ________");
    strcpy(quiz_details[229].correct_answer,"Meitnerium");

    strcpy(quiz_details[230].questions,"Atomic mass of Bromine is ________");
    strcpy(quiz_details[230].correct_answer,"79.90");

    strcpy(quiz_details[231].questions,"Atomic number of Bi is ________");
    strcpy(quiz_details[231].correct_answer,"83");

    strcpy(quiz_details[232].questions,"Atomic number of Radium is ________");
    strcpy(quiz_details[232].correct_answer,"88");

    strcpy(quiz_details[233].questions,"Atomic mass of Selenium is ________");
    strcpy(quiz_details[233].correct_answer,"78.97");

    strcpy(quiz_details[234].questions,"Symbol of Darmstadtium is ________");
    strcpy(quiz_details[234].correct_answer,"Ds");

    strcpy(quiz_details[235].questions,"Atomic mass of Lead is ________");
    strcpy(quiz_details[235].correct_answer,"207.2");

    strcpy(quiz_details[236].questions,"Having having atomic mass 89 is ________");
    strcpy(quiz_details[236].correct_answer,"Actinium");

    strcpy(quiz_details[237].questions,"Atomic mass of Fe is ________");
    strcpy(quiz_details[237].correct_answer,"55.845");

    strcpy(quiz_details[238].questions,"Atomic number of Oganesson is ________");
    strcpy(quiz_details[238].correct_answer,"118");

    strcpy(quiz_details[239].questions,"Atomic mass of Mg is ________");
    strcpy(quiz_details[239].correct_answer,"24.30");

    strcpy(quiz_details[240].questions,"Symbol of Niobium is ________");
    strcpy(quiz_details[240].correct_answer,"Nb");

    strcpy(quiz_details[241].questions,"Atomic mass of Dysprosium is ________");
    strcpy(quiz_details[241].correct_answer,"162.50");

    strcpy(quiz_details[242].questions,"Atomic number of Vanadium is ________");
    strcpy(quiz_details[242].correct_answer,"23");

    strcpy(quiz_details[243].questions,"Symbol of Platinum is ________");
    strcpy(quiz_details[243].correct_answer,"Pt");

    strcpy(quiz_details[244].questions,"Atomic number of Krypton is ________");
    strcpy(quiz_details[244].correct_answer,"36");

    strcpy(quiz_details[245].questions,"Element having atomic mass 54.93 ________");
    strcpy(quiz_details[245].correct_answer,"Manganese");

    strcpy(quiz_details[246].questions,"Atomic number of Rhenium is ________");
    strcpy(quiz_details[246].correct_answer,"75");

    strcpy(quiz_details[247].questions,"Atomic mass of Calcium is ________");
    strcpy(quiz_details[247].correct_answer,"40.07");

    strcpy(quiz_details[248].questions,"Element having symbol Cr is ________");
    strcpy(quiz_details[248].correct_answer,"Chromium");

    strcpy(quiz_details[249].questions,"Atomic number of Ge is ________");
    strcpy(quiz_details[249].correct_answer,"36");

    strcpy(quiz_details[250].questions,"Atomic mass of Arsenic is ________");
    strcpy(quiz_details[250].correct_answer,"74.92");
















    

















































    









    


        

    
    
    
    
    




}
    

struct quiz question_search();
bool answer_checker(char question[200],char selected_answer[100]){
    for(int i=0;i<200;i++){
        if(strcmp(quiz_details[i].questions,question)==0){
            if(strcmp(quiz_details[i].correct_answer,selected_answer)==0){
                return true;
            }
        }
        else
            return false;
    }
}

//don't change below code
bool Contains(char MyChar[], char Search[])
{
    int LoopOne;
    int LoopTwo;
    int LoopThree;
    int MyCharSize = sizeof(MyChar);
    int SearchSize = sizeof(Search);
    int Yes = 0;
    
    while(LoopOne < MyCharSize)
    {
        if(MyChar[LoopOne] == Search[0])
        {
        LoopTwo = 0;
        LoopThree = LoopOne;
        while(LoopTwo < SearchSize)
        {
            if(MyChar[LoopThree] == Search[LoopTwo])
            Yes++;
        
            LoopTwo++;
            LoopThree++;
        } 
        if(Yes == SearchSize)
            return true;
        }        
        LoopOne++;
    }
    return false;
}
 
int integer_answers_mcq_finder(){
    for(i=0;i<300;i++){
        if(Contains(quiz_details[i].questions,"Atomic Number")){
            return quiz_element[i].atomic_number;
        }
    }
}