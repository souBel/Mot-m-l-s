#include "Outil.h"
#include "Mot.h"
//#define T 36
#define nbMot 36
#define motLong 30 //longueur du mot
#define Lmax 9
#define Cmax 4

char tabAffiche[Lmax][Cmax]; // +1 ??

void MotAmorcer()
{

}

char MotLire(int min, int max){ //lit un mot du dico (il le récupère)
	char *tab=malloc(30);
	int i, nbRand;
	//Appel0("MotLire");
	//int min = 8300;    // min et max servent ici de test, lorsque la fonction fonctionnera correctement, il faudra les enlever car ils seront défini lors de l'appel de la fonct
	//int max = 16600;
	nbRand=uHasard(min, max);
	//printf("\nVoici le nombre aleatoire : %d \n", nbRand); // --> probleme avec la fonction uHasard : renvoie toujours le meme nb (+41)
	FILE* fic = NULL;
	fic=fopen("dico.txt", "r");
		for(i=0; i<nbRand; i++)
			fscanf(fic, "%s", tab);
	fclose(fic);
	//printf("\n %s \n\n", tab);
	//Dis(tab); //affiche la valeur de la chaîne;comme s()
	//
	return tab;
	//Appel1("MotLire");

}


void MotInitialiser()
{//stocke ds tabMot nbMot mots du dictionr de référence



	char tabMot[nbMot][motLong]; //pour changer une composante du tab, il faut le faire avec strcpy...
	int min=1;
	int max=8300;
	int k=0;
	int i, j;
	char tabResult=malloc(30);
	tabResult=MotLire(min, max);
	do{
        strcpy(tabMot[k], tabResult);
        min=+8300;
        max=+8300;
        k++;
	}while(k<36);
	int l=0;
	for(i=0; i<Lmax; i++){
        for(j=0; j<Cmax; j++){
            tabAffiche[i][j]=tabMot[l];
            l++;
        }
	}
	for(i=0; i<Lmax; i++){
        for(j=0; j<Cmax; j++){
            printf("%s       ", tabAffiche[i][j]);
        }
        printf("\n");
	}

}

void MotTester(int numTest){
    switch (numTest) {
        case 1:MotInitialiser();
            break;

        default:
            break;
    }
}

