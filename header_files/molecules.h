#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct compound
{
    char name[50],representation[30],preparation[200],uses[2700],constituent_elements[60];
};

struct compound molecules_data(char name[50]){
    struct compound molecule[26];

    strcpy(molecule[0].name,"Water");
    strcpy(molecule[0].representation,"H2O");
    strcpy(molecule[0].preparation,"Water is the common name for dihydrogen monoxide or H2O. The molecule is produced from numerous chemical reactions, including the synthesis reaction from its elements, hydrogen, and oxygen. The balanced chemical equation for the reaction is: \n 2H2 + O2 -->   2H2O  \n");
    strcpy(molecule[0].constituent_elements,"H,O");
    strcpy(molecule[0].uses,"Commercial water use includes fresh water for motels, hotels, restaurants, office buildings, other commercial facilities, and civilian and military institutions. \n Domestic water use is probably the most important daily use of water for most people.Domestic use includes water that is used in the home every day, including water for normal household purposes, such as drinking, food preparation, bathing, washing clothes and dishes, flushing toilets, and watering lawns and gardens. \n   \n Industrial water use is a valuable resource to the nation's industries for such purposes as processing, cleaning, transportation, dilution, and cooling in manufacturing facilities. Major water-using industries include steel, chemical, paper, and petroleum refining. Industries often reuse the same water over and over for more than one purpose. \n   \n Irrigation water use is water artificially applied to farm, orchard, pasture, and horticultural crops, as well as water used to irrigate pastures, for frost and freeze protection, chemical application, crop cooling, harvesting, and for the leaching of salts from the crop root zone. \n");

    strcpy(molecule[1].name,"Nitric acid");
    strcpy(molecule[1].representation,"HNO3");
    strcpy(molecule[1].preparation,"Nitric acid is prepared in the laboratory by heating a nitrate salt with concentrated sulphuric acid. \n   NaNO3 + H2SO4  --->  NaHSO4 + HNO3 \n \nVapours of nitric acid are condensed to a brown liquid in a receiver cooled under cold water. Dissolved oxides of nitrogen are removed by redistillation or blowing a current of carbondioxide or dry air through the warm acid. \n");
    strcpy(molecule[1].constituent_elements,"H,N,O");
    strcpy(molecule[1].uses," Nitric acid is the building block chemical for the production of many other chemical compounds. It is used in manufacturing several types of polymers like polyamides and polyurethane. Nitric acid is also commonly used as rocket propellants in the aerospace industry. \n In fertilizer production, Nitric acid is used for manufacturing different types of nitrogenous fertilizers like calcium nitrate, ammonium nitrate, etc. Nitric acid is key component which is also a by product of Ammonia. \n  \n The most common use of Nitric acid is found in schools where it is often utilized as a laboratory reagent. Diluted nitric acid is used in wood works to fabricate maple and pine wood and make them look aged. It is also used in food industries and helps in cleaning food and equipments, etc. \n");

    strcpy(molecule[2].name,"Hydrochloric acid");
    strcpy(molecule[2].representation,"HCl");
    strcpy(molecule[2].preparation,"Hydrochloric acid is prepared by warming NaCl crystals with concentrated H2SO4 (Sulphuric acid). \n  NaCl + H2SO4 --→ NaHSO4 + HCl \n \n Usually, most of the hydrogen chloride/hydrochloric acid that is formed is a co-product of some other chemical reactions. HCl is also formed by the chlorination of hydrocarbons. \n ");
    strcpy(molecule[2].constituent_elements,"H,Cl");
    strcpy(molecule[2].uses,"HCl is used in the preparation of chlorine, aqua regia, and other chlorides. \n It is used as a solvent to dissolve noble gases. \n  \n It acts as a reagent in laboratories.\n ");

    strcpy(molecule[3].name,"Methane");
    strcpy(molecule[3].representation,"CH4");
    strcpy(molecule[3].preparation,"Combustion of methane is an exothermic reaction in which a large amount of energy is liberated. Due to    this property, methane is used as a domestic and industrial fuel. \n CH4 + 2O2  --->  CO2 + 2H2O  \n ");
                 
    strcpy(molecule[3].constituent_elements,"C,H");
    strcpy(molecule[3].uses,"CH4 Uses (Methane) \n  It is used in automobiles, ovens and water heater as a fuel. \n \n  It is used in the generation of electricity. \n \n  It is used as rocket fuel in its refined liquid form. \n  \n  It is used as  an antifreeze ingredient in industries.\n  \n  It is a common ingredient in fertilizer. \n  \n  It is used to sanitize products. \n   \n  It is used in gas-fired power stations. \n   \n  It is used in gas cookers. \n   \n  It is used in the testing of gas appliances  \n ");


    strcpy(molecule[4].name,"Sodium Hydroxide");
    strcpy(molecule[4].representation,"NaOH");
    strcpy(molecule[4].preparation,"It is generally prepared by electrolysis of sodium chloride in Castner-kellner cell. A brine solution is electrolyzed using mercury cathode and carbon anode. Sodium metal, discharged at the cathode, combine with mercury to form sodium amalgam. Cl gas is evolved at the cathode. The amalgam is treated with water to give sodium hydroxide and hydrogen gas.  \n  2Na/Hg+2H  --->  2NaOH + H2 + Hg  \n  ");
    strcpy(molecule[4].constituent_elements,"Na,O,H");
    strcpy(molecule[4].uses,"Sodium hydroxide is used to manufacture many everyday products, such as paper, aluminum, commercial drain and oven cleaners, and soap and detergents.  \n Sodium hydroxide is used to help manufacture a variety of medicines and pharmaceutical products, from common pain relievers like aspirin, to anticoagulants that can help to prevent blood clots, to cholesterol-reducing medications. \n    \n Municipal water treatment facilities use sodium hydroxide to control water acidity and to help remove heavy metals from water. Sodium hydroxide is also used to produce sodium hypochlorite, a water disinfectant. \n  "); 


    strcpy(molecule[5].name,"Surphuric acid");
    strcpy(molecule[5].representation,"H2SO4");
    strcpy(molecule[5].preparation,"SO2 is prepared by burning sulphur in the presence of excess air so that the product combines with oxygen which is helpful for the next stage.   \n  2SO2(g) + O2(g) ⇌ 2SO3(g)  \n   \n  Sulphur trioxide is formed when sulphur dioxide reacts with oxygen in a ratio of 1:1 at a temperature of 400 °C – 450°C and a pressure of 1-2 atm in the presence of V2O5 as a catalyst. This reaction is reversible in nature. \n    \n 2SO2(g) + O2(g) ⇌ 2SO3(g) \n   \n  The sulphur trioxide formed is first made to react with concentrated sulphuric acid. Sulphur trioxide cannot be dissolved in water directly as it leads to the formation of fog. The product obtained after this reaction is known as oleum. The oleum obtained is then dissolved in water to obtain concentrated sulphuric acid. \n    \n H2SO4 + SO3(g) → H2S2O7(l) \n   \n H2S2O7(l) + H2O(l) → 2H2SO4 \n ");
    strcpy(molecule[5].constituent_elements," H,S,O");
    strcpy(molecule[5].uses,"Up to 50 per cent of this liquid manufactured is used in the production of phosphoric acid which is in turn used to make phosphate fertilizers.   \n It is used in the manufacturing of metals such as copper, zinc etc. \n   \n 5 per cent of the produced acid is used in the making of fibres. \n   \n Used in acidic drain cleaners. \n   \n Due to its strong dehydrating property, it can be used to remove the tissue paper. \n   \n Used as a catalyst in the manufacturing process of nylon. \n   \n Used in the Manheim process in the manufacturing of HCl. \n   \n Used in petroleum refining. \n ");                                     

    
    strcpy(molecule[6].name,"Carbon Dioxide");
    strcpy(molecule[6].representation,"CO2");
    strcpy(molecule[6].preparation,"In the laboratory, carbon dioxide is prepared by the action of calcium carbonate with dilute hydrochloric acid.   \n  CaCO3 + dil 2HCl → CaCl2 + CO2↑ + H2↑   \n ");                                              
    strcpy(molecule[6].constituent_elements,"C,O");
    strcpy(molecule[6].uses,"To prepare soft drinks and soda   \n  In fire extinguishers   \n   \n  As a refrigerating agent  \n   \n  To prepare several chemicals like urea, washing soda and baking soda  \n   \n  To preserve food  \n   \n  Helps to maintain the temperature of the earth’s surface  \n   \n   Used in welding to control corrosion  \n  ");
    
    strcpy(molecule[7].name,"Calcium Carbonate");
    strcpy(molecule[7].representation,"CaCO3");
    strcpy(molecule[7].preparation,"It is prepared by passing carbon dioxide gas through calcium hydroxide (slaked lime). However, if carbon dioxide is passed in excess, it forms the soluble calcium hydrogen-carbonate.  \n  Ca(OH)2 + CO2→ CaCO3 + H2O \n ");
    strcpy(molecule[7].constituent_elements,"Ca,C,O");
    strcpy(molecule[7].uses,"Calcium carbonate is largely employed in the pulp and paper industry. It can be used as a filter and pigment, making possible the production of a whiter, higher quality pigment than other minerals.   \n   In the construction industry, calcium carbonate is used as a filler in concrete, increasing its durability and appearance and to purify metals for use in construction applications. \n   \n   Another application of calcium carbonate is in fertilizers to provide calcium to plants and pH stabilization of the soil.  \n   \n   Calcium carbonate can also be an additive to food products for livestock animals and humans and as a supplement in vitamins. \n   \n   In water and sewer treatment plants, calcium carbonate is employed in the removal of acidity and impurities.  \n ");
   
    
    strcpy(molecule[8].name,"Glucose");
    strcpy(molecule[8].representation,"C6H12O6");
    strcpy(molecule[8].preparation,"Glucose is prepared in the laboratory by hydrolysis of sucrose by boiling it with dilute hydrochloric acid or dilute sulphuric acid for about two hours. On hydrolysis, sucrose gives one molecule of glucose and one molecule of fructose.    \n  C12H22O22 + H2O ---→  C6H12O6  + C6H12O6  \n");
    strcpy(molecule[8].constituent_elements,"C,H,O");
    strcpy(molecule[8].uses,"Glucose is used to treat very low blood sugar (hypoglycemia), most often in people with diabetes mellitus. glucose works by quickly increasing the amount of glucose in your blood.   \n  Glucose is also used to provide carbohydrate calories to a person who cannot eat because of illness, trauma, or other medical condition. Glucose is sometimes given to people who are sick from drinking too much alcohol.  \n ");

    
    strcpy(molecule[9].name,"Carbon tetrachloride");
    strcpy(molecule[9].representation,"CCl4");
    strcpy(molecule[9].preparation,"Carbon tetrachloride can be synthesized by chlorinating carbon disulfide at temperatures between 105 to 130 °C  \n   CS2 + 3 Cl2 → CCl4 + S2Cl  \n ");
    strcpy(molecule[9].constituent_elements,"C,Cl");
    strcpy(molecule[9].uses,"In organic chemistry, carbon tetrachloride serves as a source of chlorine in the Appel reaction.    \n  It is used in fire extinguishers.      \n    \n  In lava lamps.  \n    \n  Detection of neutrinos. \n    \n  Used as a solvent for halogenation.  \n    \n  As dry cleansing solvent in refrigerant.  \n ");


    strcpy(molecule[10].name,"Acetone");
    strcpy(molecule[10].representation,"(CH3)2CO");
    strcpy(molecule[10].preparation,"Acetone is produced by the dry distillation of acetates, for example calcium acetate in ketonic decarboxylation.  \n  Ca(CH3COO)2 → CaO(s) + CO2(g) + (CH3)2CO  \n ");
    strcpy(molecule[10].constituent_elements,"C,H,O");
    strcpy(molecule[10].uses,"Medicine or pharmaceutical industry \n Used in cosmetics. \n   \n Used in laboratory. \n \n Used in electronics. \n \n Used for domestic purpose. \n \n Pest control products. \n ");                    
    

    strcpy(molecule[11].name,"Nitrogen Oxide");
    strcpy(molecule[11].representation,"NO");
    strcpy(molecule[11].preparation,"Nitrogen dioxide is formed in most combustion processes using air as the oxidant. At elevated temperatures nitrogen combines with oxygen to form nitric oxide \n  N2 + O2 ---> 2NO \n ");
    strcpy(molecule[11].constituent_elements,"N,O");
    strcpy(molecule[11].uses,"Used for sedation and pain relief   \n  It is commonly used by dentists and medical professionals to sedate patients undergoing minor medical procedures  \n ");

    
    strcpy(molecule[12].name,"Nitrogen Dioxide");
    strcpy(molecule[12].representation,"NO2");
    strcpy(molecule[12].preparation,"Nitrogen dioxide is formed in most combustion processes using air as the oxidant. At elevated temperatures nitrogen combines with oxygen to form nitric oxide \n N2 + O2 ---> 2NO \n  \n Nitrogen dioxide typically arises via the oxidation of nitric oxide by oxygen in air \n \n 2NO + O2  --->  2NO2 \n");
    strcpy(molecule[12].constituent_elements,"N,O");
    strcpy(molecule[12].uses,"Nitrogen dioxide is used as an intermediate in the production of nitric acid  \n  Used in the manufacturing of oxidized cellulose compounds  \n  \n  Used as a catalyst  \n  \n  Used as an intermediate in the production of sulphuric acid \n  \n  Used as an oxidizer for rocket fuels  \n   \n  Used as a nitrating agent  \n   \n  Used to bleach flour  \n  \n  Used as an oxidizing agent  \n  \n  Used in the making of explosives  \n ");

    strcpy(molecule[13].name,"Ammonia");
    strcpy(molecule[13].representation,"NH3");
    strcpy(molecule[13].preparation,"Ammonia is easily made in the laboratory by heating an ammonium salt, such as ammonium chloride NH4Cl with a strong alkali, such as sodium hydroxide or calcium hydroxide \n 2NH4Cl + Ca(OH)2 → CaCl2 + 2H2O + 2NH3(g) \n ");
    strcpy(molecule[13].constituent_elements,"N,H");
    strcpy(molecule[13].uses,"It is used as fertilizers as it increases the yield of crops \n  It is used in food products as an antimicrobial agent  \n  \n  It is used in the fermentation industry     \n  \n  It is used as a refrigerant  \n  \n  It is used as a pH adjuster in the fermentation process  \n  \n  It is used to neutralize pollutant like nitrogen oxides emitted from diesel engines \n  \n  It is used as a fuel for rocket engines  \n \n  It is used in textile industries  \n  \n  It is used in the manufacture of synthetic fibre like rayon and nylon  \n  ");
    

    strcpy(molecule[14].name,"Urea");
    strcpy(molecule[14].representation,"CH4N2O");
    strcpy(molecule[14].preparation,"Ammonium carbamate is formed by heating a mixture of liquid ammonia and liquid carbon dioxide in autoclave at high temperature. Which is obtained by heating to 150°C at 50 atmospheric pressure.  \n 2NH3 + CO2 --→ NH2COONH4 \n \n NH2COONH4 --→ NH2CONH2 + H2O \n ");
    strcpy(molecule[14].constituent_elements,"C,H,N,O");
    strcpy(molecule[14].uses,"Urea has been used as a insect repellent \n  Urea is dehydrated and condensed to produce melamine  \n \n  As urea-formaldehyde resins, urea-clathrates in petroleum-refining industry for production jet aviation fuels, and for dewaxing aviation fuels.  \n \n  Partially polymerized resins of urea are used by the textile industry to impart permanent-press properties to fabrics.  \n \n  A fertilizer is any substance that is added to soil or water to assist the growth of plants  \n ");
    
    
    strcpy(molecule[15].name,"Benzene");
    strcpy(molecule[15].representation,"C6H6");
    strcpy(molecule[15].preparation,"Benzene is prepared from ethyne by the process of cyclic polymerization. In this process, Ethyne is passed through a red-hot iron tube at 873 K. The ethyne molecule then undergoes cyclic polymerization to form benzene. \n 3(C2H2) + Red hot Iron tube  873K  --->  C6H6 \n ");
    strcpy(molecule[15].constituent_elements,"C,H");
    strcpy(molecule[15].uses,"As a solvent \n As an Intermediate / Production of rubber \n  \n As fuel \n  \n Printing Industry \n ");


    strcpy(molecule[16].name,"Formaldehyde");
    strcpy(molecule[16].representation,"CH2O");
    strcpy(molecule[16].preparation,"Formaldehyde is produced industrially by the catalytic oxidation of methanol. The most common catalysts are silver metal or a mixture of an iron and molybdenum or vanadium oxides. In the commonly used formox process, methanol and oxygen react at ca. 250–400 °C in presence of iron oxide in combination with molybdenum and/or vanadium to produce formaldehyde according to the chemical equation \n 2 CH3OH + O2 → 2 CH2O + 2 H2O \n ");
    strcpy(molecule[16].constituent_elements,"C,H,O");
    strcpy(molecule[16].uses,"Used in car manufacture, explosives, plastic, resins, chemicals and other artificial materials. It is also used in sanitary products like paper towels, napkins and tissues. \n  Formalin is used as a disinfectant in industries.  \n  \n  It kills many bacteria, fungi etc so used as an antiseptic. Some parasites and warts are treated by formaldehyde. It helps to produce some vaccines and also sterilizes them. It can be used in the treatment of infections like urinary tract infection. Bacterial growth can be prevented  \n  \n  Formaldehyde resins are used to manufacture wooden products used widely in furniture, cabinetry, mouldings, flooring, shelving, counter tops and other household furnishings. Wood panels are made from the wood which will be either disposed or burned hence minimizing wood wastage  \n");                                                                                                                                                                                                          
                                                                                                                                                                
    
    strcpy(molecule[17].name,"Salt");
    strcpy(molecule[17].representation,"NaCl");
    strcpy(molecule[17].preparation,"Sodium and chlorine respond together to generate a substance that is familiar to nearly everybody in the globe that is sodium chloride, or table salt, or common salt\n   2Na(s) + Cl2(g) --→  2NaCl(s)       \n ");
    strcpy(molecule[17].constituent_elements,"Na,Cl");
    strcpy(molecule[17].uses,"It is widely used in food industries as a food preservative and as a flavour enhancer. \n  It is a major raw material in the industrial manufacturing of various chemicals such as sodium carbonate, sodium hydrogen carbonate etc.  \n \n  This salt is used in glass production.  \n  \n In cold countries, it is used to prevent the build-up of ice on roads, bridges etc which is important for safe driving conditions. \n ");

    
    strcpy(molecule[18].name,"Teflon");
    strcpy(molecule[18].representation,"(C2F4)n");
    strcpy(molecule[18].preparation,"Teflon is manufactured by free-radical polymerization of tetrafluoroethylene. The catalyst used is per sulphate at high pressures. \n  n F2C=CF2 → −(F2C−CF2)n−  \n ");
    strcpy(molecule[18].constituent_elements,"C,F");
    strcpy(molecule[18].uses,"PTFE is usually used to coat  in the  non-stick frying pans as it has the ability to resist high temperatures. \n IT  is  mostly used as a film interface patch for sports and medical applications, having a  pressure-sensitive adhesive backing. It is installed in one of the  high friction areas of footwear, in soles, ankle-foot orthosis. \n  \n It is widely used in medical synthesis,test and many more medicines. \n ");

    strcpy(molecule[19].name,"Magnesium Chloride");
    strcpy(molecule[19].representation,"MgCl");
    strcpy(molecule[19].preparation,"In the Dow process, magnesium chloride is regenerated from magnesium hydroxide using hydrochloric acid \n Mg(OH)2(s) + 2 HCl(aq) ---→ MgCl2(aq) + 2 H2O(l) \n ");
    strcpy(molecule[19].constituent_elements,"Mg,Cl");
    strcpy(molecule[19].uses,"kidney disease  \n severe heart disease \n "); 

    strcpy(molecule[20].name,"Calcium Chloride");
    strcpy(molecule[20].representation,"CaCl2");
    strcpy(molecule[20].preparation," Calcium chloride is mainly produced by reacting limestone (CaCO3) with hydrochloric acid (HCl).  \n CaCO3 + 2 HCl ---→ CaCl2 + CO2 + H2O \n ");
    strcpy(molecule[20].constituent_elements,"Ca,Cl");
    strcpy(molecule[20].uses,"It is used to prevent the ice formation and therefore used in deicing.  \n  Used in the production of activated charcoal.  \n  \n  Used as a sterilant for male animals.   \n  \n  It is used in heating pads and self-heating cans.  \n  \n  Calcium chloride is used as an electrolyte in sports drinks. \n     \n  In laboratories, the drying tubes are usually packed with calcium chloride.  \n ");
    
    
    strcpy(molecule[21].name,"Magnesium hydroxide");
    strcpy(molecule[21].representation,"Mg(OH)2");
    strcpy(molecule[21].preparation,"When a solution of magnesium salts is combined with alkaline water it instigates precipitation of solid magnesium hydroxide. \n Mg2+ + 2 OH−  --→  Mg(OH)2 \n ");
    strcpy(molecule[21].constituent_elements,"Mg,O,H");
    strcpy(molecule[21].uses,"Magnesium hydroxide is an excellent thermal conductor and poor electrical conductor. \n  It is used in suspensions as a laxative or antacid.  \n \n  Used as a food additive.  \n \n  It is widely used in waste-water treatment.  \n \n  Used as a fire retardant.  \n  \n  It is used in gold mining.  \n \n  Used in warehouses.  \n ");   

    strcpy(molecule[22].name,"Phosphorus pentachloride");
    strcpy(molecule[22].representation,"PCl5");
    strcpy(molecule[22].preparation,"It can be prepared by by the action of excess of dry chloride on phosphorous trichloride \n PCl3 + Cl2 ---> PCl5 \n ");
    strcpy(molecule[22].constituent_elements,"P,Cl");
    strcpy(molecule[22].uses,"Used as a chlorinating agent and catalyst ш making organic chemicals, intermediates, dyestuffs etc. \n  Used as a catalyst in the manufacture of acetyl cellulose the plastic film on which motion pictures are printed.\n  \n  Used as a chlorinating agent in organic chemistry. \n \n  In pharmaceutical industry it is used in the manufacture of penicillin and cephalosporin. \n \n  Used to produce acid chlorides and as a catalyst for cyclization and condensation reactions. \n ");       


    strcpy(molecule[23].name,"Thionyl chloride");
    strcpy(molecule[23].representation,"SOCl2");
    strcpy(molecule[23].preparation,"The major industrial synthesis involves the reaction of sulfur trioxide and sulfur dichloride \n SO3 + SCl2 --→ SOCl2 + SO2 \n");
    strcpy(molecule[23].constituent_elements,"S,O,Cl");
    strcpy(molecule[23].uses,"Photographic supplies, film, and photo chemicals. \n Materials used in the building process, such as flooring, insulation, caulk, tile, wood, glass, etc. \n \n Agents of chemical warfare \n  \n Drug product, or related to the manufacturing of drugs; modified by veterinary, animal, or pet if indicated by source \n");  


    strcpy(molecule[24].name,"Calcium Sulfate");
    strcpy(molecule[24].representation,"CaSO4");
    strcpy(molecule[24].preparation,"");
    strcpy(molecule[24].constituent_elements,"Cu,S,O");
    strcpy(molecule[24].uses,"Its major use is in the manufacture of Plaster of Paris. Due to its ability to be moulded in the paste form on applying water to the powdered form of  Calcium Sulphate. \nCalcium Sulphate is used in tofu as a coagulant.\n \nThe compound was used to make sulphuric acid before the 1970s.\n \nUsed as a moisture indicator.\n  ");     


    strcpy(molecule[25].name,"Zinc chloride");
    strcpy(molecule[25].representation," ZnCl2");
    strcpy(molecule[25].preparation,"The reaction between metallic zinc and hydrogen chloride gas yields the anhydrous form of zinc chloride. The chemical equation for this reaction is given by \nZn + 2HCl → ZnCl2 + H2\n");
    strcpy(molecule[25].constituent_elements,"Zn'Cl");
    strcpy(molecule[25].uses,"In its molten state, this compound acts as a catalyst for some aromatization reactions. For example, hexamethyl benzene can be obtained from methanol with the help of a molten ZnCl2  \nSince it acts as a moderately strong Lewis acid, this compound can also serve as a catalyst for the Fischer indole synthesis reaction and some Friedel-Crafts acylation reactions.\n  \nThe Lucas reagent is a solution of anhydrous zinc chloride and concentrated hydrochloric acid. This reagent is very useful in the preparation of alkyl chlorides.\n  \nA mixture of zinc oxide and hexachloroethane is used in some smoke grenades. Upon ignition, these compounds react to form a smoke of zinc chloride, which serves as a smokescreen.\n  \nZnCl2 is also useful in fingerprint detection since it forms an easily detectable complex with Ruhemann’s purple.\n \nThe aqueous solutions of this compound, when diluted, can be used for disinfecting purposes. It is a constituent of several antiseptic mouthwash products.\n ");                       


    for(int i=0;i<26;i++){
        if(strcmp(name,molecule[i].name)==0)
            return molecule[i];
    }





    
}