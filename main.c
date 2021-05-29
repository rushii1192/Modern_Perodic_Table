#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header_files/elements.h"

void search();
void again();
void clrscr() {
    system("@cls||clear");
}
void info2(){
	
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
void info(char element_name[20],char element_symbol[4],int atomic_number,float atomic_weight){
	struct element user_element;
	if(element_name!=""){
		user_element = element_searcher(element_name,"",0,0);
	}
	if(element_symbol!=""){
		user_element = element_searcher("",element_symbol,0,0);
	}
	if(atomic_number!=0){
		user_element = element_searcher("","",atomic_number,0);
	}
	if (atomic_weight!=0)
	{
		user_element = element_searcher("","",0,atomic_weight);
	}
	printf("\033[36m\tELEMENT : %s\033[0m\n",user_element.name);
	printf("\033[36m\tSYMBOL : %s\033[0m\n",user_element.symbol);
	printf("\033[36m\tATOMIC NUMBER : %d\033[0m\n",user_element.atomic_number);
	printf("\033[36m\tATOMIC WEIGHT : %f\033[0m\n",user_element.atomic_weight);
	printf("\033[36m\tELECTRONIC CONFIGURATION : %s\033[0m\n",user_element.electronic_configuration);
	printf("\033[36m\tHISTORY : %s\033[0m\n",user_element.history);
	printf("\033[36m\tMELTING POINT : %f\033[0m\n",user_element.melting_point);
	printf("\033[36m\tBOILING POINT : %f\033[0m\n",user_element.boiling_point);
	printf("\033[36m\tIONIC RADIUS : %f\033[0m\n",user_element.ionic_radius);
	printf("\033[36m\tISOTOPES : %d\033[0m\n",user_element.isotopes);
	printf("\033[36m\tELECTRONEGATIVITY : %f\033[0m\n",user_element.electronegativity);
	printf("\033[36m\tELEMENT COLOUR : %s\033[0m\n",user_element.color);
	printf("\033[36m\tPOSITION : ELEMENT IS IN  %d GROUP and %d PERIOD\033[0m\n",user_element.group,user_element.period);
	printf("\033[36m\tCONDUCTIVITY : %s\033[0m\n",user_element.conductivity);
	printf("\033[36m\tLUSTER : %s\033[0m\n",user_element.luster);
	printf("\033[36m\tSTATE OF MATTER : %s\033[0m\n",user_element.phase);
	printf("\033[36m\tDENSITY : %f\033[0m\n",user_element.density);
	printf("\033[36m\tUses : %s\033[0m\n",user_element.uses);
	again();	
}
void search() {
	newScreen();
	char ele[20];
	char sym[4];
	int atn;
	float atwt;
	printf("\033[32mSEARCH BY :- \033[0m\n\n");
	printf("\033[33m\t1 -> ELEMENT\033[0m\n");
	printf("\033[33m\t2 -> SYMBOL\033[0m\n");
	printf("\033[33m\t3 -> ATOMIC NUMBER\033[0m\n");
	printf("\033[33m\t4 -> ATOMIC WEIGHT\033[0m\n\n\n\n");
	int choice2;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice2);
	if (choice2==1){
		printf("\033[32mENTER THE ELEMENT'S NAME : \033[0m");
		scanf("%s",&ele);
		info(ele,"",0,0);
	} else if (choice2==2){
		
		printf("\033[32mENTER THE ELEMENT'S SYMBOL : \033[0m");
		scanf("%s",&sym);
		info("",sym,0,0);
	} else if (choice2==3){
		
		printf("\033[32mENTER THE ELEMENT'S ATOMIC NUMBER : \033[0m");
		scanf("%d",&atn);
		info("","",atn,0);
	} else if (choice2==4){
		
		printf("\033[32mENTER THE ELEMENT'S ATOMIC WEIGHT : \033[0m");
		scanf("%f",&atwt);
		info("","",0,atwt);
	} else {
		search();
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

int main(){
	newScreen();
	printf("\033[37m1 -> EXPLORE\033[0m\n");
	printf("\033[37m2 -> QUIT\033[0m\n\n\n\n");
	int choice1;
	printf("\033[37mYOUR CHOICE : \033[0m");
	scanf("%d",&choice1);
	if (choice1==1){
		search();
	} else if (choice1==2){
		quit();
	} else {
		main();
	}
}