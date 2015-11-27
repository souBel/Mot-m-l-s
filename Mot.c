#include "Outil.h"
#include "Mot.h"
#define T 36
#define nbMot 36
#define Lmax 9
#define Cmax 4

char tab[1+Lmax][1+Cmax];

void MotAmorcer()
{
	
}

void MotLire(){ //lit un mot du dico (il le récupère)
	char *tab=malloc(30);
	int i;
	Appel0("MotLire");
	int max = 8300;
	uHasard(max);
	FILE* fic = NULL;
	fic=fopen("dico.txt", "r");
		for(i=0; i<max; i++)
			fscanf(fic, "%s", tab);
	fclose(fic);
	Dis(tab); //affiche la valeur de la chaîne;comme s()
	//
	Appel1("MotLire");
	
}


void MotInitialiser()
{//stocke ds T nbMot mots du dictionr de référence
	
	
	/*tab
	int max=36;
	for(*/
	
}

void MotTester(int numTest){
    switch (numTest) {
        case 1:MotLire();
            break;
            
        default:
            break;
    }
}

