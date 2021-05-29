#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elements.h"

struct quiz
{
    char questions[200];
    char correct_answer[100];
};




struct quiz quiz_details[300];
struct element quiz_element[118];
//you can start from here

struct quiz question_search()
{
    strcpy(quiz_details[0].questions,"Atomic number of helium is________");
    strcpy(quiz_details[0].correct_answer,"2");
}

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