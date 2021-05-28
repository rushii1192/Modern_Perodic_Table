#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "elements.h"

int i;

void search();

void clrscr() {
    system("@cls||clear");
}

void newScreen() {
	clrscr();
	int width = 132;
	char str[] = "\033[33;1;51;4mPERIODIC TABLE\033[0m\n";
	int length = sizeof(str) - 1;
	int pad = (length >= width) ? 0 : (width - length) / 2;
	printf("%*.*s%s\n", pad, pad, " ", str);
	for(int i=0; i<10; i++){
		printf("\n");
	}
}

void quit() {
	newScreen();
	char ans[5];
	printf("\033[31mARE YOU SURE YOU WANT TO QUIT?\033[0m");
	scanf("%s",ans);
	if (tolower(ans[0])=='y'){
		printf("\n\n\n\n\033[35mTHANK YOU\033[0m\n\n");
	} else {
		main();
	}
}

void again() {
	char ans1[5];
	printf("\n\n\n\n\033[32mSEARCH FOR A DIFFERENT ELEMENT? : \033[0m");
	scanf("%s",ans1);
	if (tolower(ans1[0])=='y'){
		search();
	} else {
		quit();
	}
	printf("\n\n\n\n\n\n\n\n\n\n");
}

void info1() {
	newScreen();
	char ele[20];
	printf("\033[32mENTER THE ELEMENT'S NAME : \033[0m");
	scanf("%s",ele);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].name,ele)==0){
			printf("\033[36m\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[36m\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[36m\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[36m\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atomicwt);
			printf("\033[36m\tELECTRONIC CONFIGURATION : %s\033[0m\n",atom[i].electronic_configuration);
			printf("\033[36m\tHISTORY : %s\033[0m\n",atom[i].history);
			printf("\033[36m\tMELTING POINT : %f\033[0m\n",atom[i].melting_point);
			printf("\033[36m\tBOILING POINT : %f\033[0m\n",atom[i].boiling_point);
			printf("\033[36m\tIONIC RADIUS : %f\033[0m\n",atom[i].ionic_radius);
			printf("\033[36m\tISOTOPES : %d\033[0m\n",atom[i].isotopes);
			printf("\033[36m\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].electronegativity);
			printf("\033[36m\tELEMENT COLOUR : %s\033[0m\n",atom[i].color);
			printf("\033[36m\tPOSITION : ELEMENT IS IN  %d GROUP and %d PERIOD\033[0m\n",atom[i].group,atom[i].period);
			printf("\033[36m\tCONDUCTIVITY : %s\033[0m\n",atom[i].conductivity);
			printf("\033[36m\tLUSTER : %s\033[0m\n",atom[i].luster);
			printf("\033[36m\tSTATE OF MATTER : %s\033[0m\n",atom[i].phase);
			printf("\033[36m\tDENSITY : %f\033[0m\n",atom[i].density);
			printf("\033[36m\tUses : %s\033[0m\n",atom[i].uses);
			break;
		}
	}
	again();
}

void info2() {
	newScreen();
	char sym[1];
	printf("\033[32mENTER THE ELEMENT'S SYMBOL : \033[0m");
	scanf("%s",sym);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].symbol,sym)==0){
			printf("\033[36m\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[36m\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[36m\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[36m\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atomicwt);
			printf("\033[36m\tELECTRONIC CONFIGURATION : %s\033[0m\n",atom[i].electronic_configuration);
			printf("\033[36m\tHISTORY : %s\033[0m\n",atom[i].history);
			printf("\033[36m\tMELTING POINT : %f\033[0m\n",atom[i].melting_point);
			printf("\033[36m\tBOILING POINT : %f\033[0m\n",atom[i].boiling_point);
			printf("\033[36m\tIONIC RADIUS : %f\033[0m\n",atom[i].ionic_radius);
			printf("\033[36m\tISOTOPES : %d\033[0m\n",atom[i].isotopes);
			printf("\033[36m\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].electronegativity);
			printf("\033[36m\tELEMENT COLOUR : %s\033[0m\n",atom[i].color);
			printf("\033[36m\tPOSITION : ELEMENT IS IN  %d GROUP and %d PERIOD\033[0m\n",atom[i].group,atom[i].period);
			printf("\033[36m\tCONDUCTIVITY : %s\033[0m\n",atom[i].conductivity);
			printf("\033[36m\tLUSTER : %s\033[0m\n",atom[i].luster);
			printf("\033[36m\tSTATE OF MATTER : %s\033[0m\n",atom[i].phase);
			printf("\033[36m\tDENSITY : %f\033[0m\n",atom[i].density);
			printf("\033[36m\tUses : %s\033[0m\n",atom[i].uses);
			break;
		}
	}
	again();
}

void info3() {
	newScreen();
	int atn;
	printf("\033[32mENTER THE ELEMENT'S ATOMIC NUMBER : \033[0m");
	scanf("%d",&atn);
	for (i=0; i<118; i++) {
		if (atom[i].atomicnum==atn){
			printf("\033[36m\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[36m\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[36m\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[36m\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atomicwt);
			printf("\033[36m\tELECTRONIC CONFIGURATION : %s\033[0m\n",atom[i].electronic_configuration);
			printf("\033[36m\tHISTORY : %s\033[0m\n",atom[i].history);
			printf("\033[36m\tMELTING POINT : %f\033[0m\n",atom[i].melting_point);
			printf("\033[36m\tBOILING POINT : %f\033[0m\n",atom[i].boiling_point);
			printf("\033[36m\tIONIC RADIUS : %f\033[0m\n",atom[i].ionic_radius);
			printf("\033[36m\tISOTOPES : %d\033[0m\n",atom[i].isotopes);
			printf("\033[36m\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].electronegativity);
			printf("\033[36m\tELEMENT COLOUR : %s\033[0m\n",atom[i].color);
			printf("\033[36m\tPOSITION : ELEMENT IS IN  %d GROUP and %d PERIOD\033[0m\n",atom[i].group,atom[i].period);
			printf("\033[36m\tCONDUCTIVITY : %s\033[0m\n",atom[i].conductivity);
			printf("\033[36m\tLUSTER : %s\033[0m\n",atom[i].luster);
			printf("\033[36m\tSTATE OF MATTER : %s\033[0m\n",atom[i].phase);
			printf("\033[36m\tDENSITY : %f\033[0m\n",atom[i].density);
			printf("\033[36m\tUses : %s\033[0m\n",atom[i].uses);
			break;
		}
	}
	again();
}

void info4() {
	newScreen();
	float atwt;
	printf("\033[32mENTER THE ELEMENT'S ATOMIC WEIGHT : \033[0m");
	scanf("%f",&atwt);
	for (i=0; i<118; i++) {
		if (atom[i].atomicwt==atwt){
			printf("\033[36m\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[36m\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[36m\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[36m\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atomicwt);
			printf("\033[36m\tELECTRONIC CONFIGURATION : %s\033[0m\n",atom[i].electronic_configuration);
			printf("\033[36m\tHISTORY : %s\033[0m\n",atom[i].history);
			printf("\033[36m\tMELTING POINT : %f\033[0m\n",atom[i].melting_point);
			printf("\033[36m\tBOILING POINT : %f\033[0m\n",atom[i].boiling_point);
			printf("\033[36m\tIONIC RADIUS : %f\033[0m\n",atom[i].ionic_radius);
			printf("\033[36m\tISOTOPES : %d\033[0m\n",atom[i].isotopes);
			printf("\033[36m\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].electronegativity);
			printf("\033[36m\tELEMENT COLOUR : %s\033[0m\n",atom[i].color);
			printf("\033[36m\tPOSITION : ELEMENT IS IN  %d GROUP and %d PERIOD\033[0m\n",atom[i].group,atom[i].period);
			printf("\033[36m\tCONDUCTIVITY : %s\033[0m\n",atom[i].conductivity);
			printf("\033[36m\tLUSTER : %s\033[0m\n",atom[i].luster);
			printf("\033[36m\tSTATE OF MATTER : %s\033[0m\n",atom[i].phase);
			printf("\033[36m\tDENSITY : %f\033[0m\n",atom[i].density);
			printf("\033[36m\tUses : %s\033[0m\n",atom[i].uses);
			break;
		}
	}
	again();
}

void search() {
	newScreen();
	printf("\033[32mSEARCH BY :- \033[0m\n\n");
	printf("\033[33m\t1 -> ELEMENT\033[0m\n");
	printf("\033[33m\t2 -> SYMBOL\033[0m\n");
	printf("\033[33m\t3 -> ATOMIC NUMBER\033[0m\n");
	printf("\033[33m\t4 -> ATOMIC WEIGHT\033[0m\n\n\n\n");
	int choice2;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice2);
	if (choice2==1){
		info1();
	} else if (choice2==2){
		info2();
	} else if (choice2==3){
		info3();
	} else if (choice2==4){
		info4();
	} else {
		search();
	}
}

int main() {
	newScreen();
	printf("\033[37m1 -> EXPLORE\033[0m\n");
	printf("\033[37m2 -> QUIT\033[0m\n\n\n\n");
	int choice1;
	printf("\033[37mYOUR CHOICE : \033[0m");
	scanf("%d",&choice1);
	table();
	if (choice1==1){
		search();
	} else if (choice1==2){
		quit();
	} else {
		main();
	}
}