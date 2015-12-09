#include "Outil.h"
#include "time.h"
#define nbMot 36
#define motLong 30 //longueur du mot
#define Lmax 9
#define Cmax 4

char tabAffiche[Lmax][Cmax]; // +1 ??
char tabMoT[nbMot][motLong]; //pour changer une composante du tab, il faut le faire avec strcpy...

void MotAmorcer()
{

}

void MotLire(int min, int max, char *sResult ){
//retourne un mot au hasard du dico (il le récupère)
	static int nMotLirE=0;//dédié MotLire
  srand(time(NULL)); //permet d'initialiser le random et donc le nombre change
	int nbRand, i;
	//Appel0("MotLire");
	nbRand=uHasard(min,max);
	//printf("\nVoici le nombre aleatoire : %d \n", nbRand);
	FILE* fic = NULL;
	fic=fopen("dico.txt", "r");
		for(i=0; i<nbRand; i++) //on lit nbRand mots et on récupère le nbRandième mot
			fscanf(fic, "%s", sResult);
	fclose(fic);
	//printf("\n %s \n\n", tab);
	//Dis(sResult); //affiche la valeur de la chaîne;comme s()
		//Appel1("MotLire");
	nMotLirE++;

}



void MotInitialiser()
{//stocke ds tabMoT nbMot mots du dictionr de référence

	int min=1;
	int max=8300;
	char tabResult[nbMot+1];
	//int k=0;
	int i;
	// 
	//tabMot[]=nbMot mots donné par MotLire()
	for(i=0; i<nbMot; i++){
		MotLire(min, max, &tabResult[0]);
		//Dis(&tabResult[0]); //affiche la valeur de la chaîne;comme s()
        strcpy(&tabMoT[i][0], &tabResult[0]);//on copie tabResult dans tabMot
        //ss(sC3("tabMoT[",sEntier(i),"]="),&tabMoT[i][0]);
        min+=8300;
        max+=8300;
	}

}

void MotAfficher()
{//affiche les mots récupérés au dessus de la grille

	int i=0, j=0;
	for(i=0; i<Lmax; i++){
		//afficher une ligne de 4 mots
        for(j=0; j<Cmax; j++){
            printf("%s	", tabMoT[i*Cmax+j]);
        }
        printf("\n");
	}

}

void MotLu(int numMot, char *sTabMot)
{//Récupère le chaine de caractère de tabMoT dans sTabMot
	strcpy(sTabMot, tabMoT[numMot]);
}

void MotLuEnvers(int numMot, char TabMot2[nbMot][motLong])
{//Récupère la chaine de caractère de tabMoT dans TabMot2[][]
  int i, k;
  int c=30;
   for (i=motLong; i>=0;i--){
     k=30-c;
	   TabMot2[numMot][k]=tabMoT[numMot][i];
     c--;
   }
}

void MotTester(int numTest){
    switch (numTest) {
        case 1:MotInitialiser();	MotAfficher();  
            break;

        default:
            break;
    }
} //MotInitialiser

