#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct compound
{
    char name[50],representation[30],preparation[200],uses[2700],constituent_elements[60];
};

struct compound *molecules_data(){
    struct compound *molecule = malloc(sizeof(struct compound) * 50);

    strcpy(molecule[0].name,"Salt");
    strcpy(molecule[0].representation,"");
    strcpy(molecule[0].preparation,"");
    strcpy(molecule[0].constituent_elements,"");
    strcpy(molecule[0].uses,"");

    strcpy(molecule[1].name,"");
    strcpy(molecule[1].representation,"");
    strcpy(molecule[1].preparation,"");
    strcpy(molecule[1].constituent_elements,"");
    strcpy(molecule[1].uses,"");

    return molecule;
}