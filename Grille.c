#include "Outil.h"
#include "Grille.h"
#include "Mot.h"
#define nbMot 36
#define motLong 30
#define N 9
#define M 16

char cGrille[N][M];
char tabMoT[nbMot][motLong];

void GrilleAfficher()
{
    GrillePlacer();
    int i, j;
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++){
            printf(" %c", cGrille[i][j]);
        }
        printf(" \n");
    }
        
        
}//GrilleAfficher

void GrilleInitialiser(){
    int i, j;
    //Appel0("GrilleInitialiser");
		for (i=0; i<N; i++) {
			for (j=0; j<M; j++){
				cGrille[i][j]='@';
			}
		}
    //Appel1("GrilleInitialiser");
}

void GrillePlacementHg() //Place les mots en horizontale en partant de la gauche
{
  int i, j;
		for (i=0; i<nbMot; i++) {
			MotLu(i, tabMoT[0]);
			strcpy(&cGrille[i][0],&tabMoT);
			
		}
    for(i=0; i<N; i++){
      for(j=0; j<M; j++){
        if(cGrille[i][j]==' '){
         cGrille[i][j]='@';
        } 
      }
    }
}

/*void GrillePlacementHd() //Place les mots en horizontale en partant de la droite
{
  int i, j;
		for (i=0; i<nbMot; i++) {
			MotLu(i, tabMoT[0]);
			strcpy(&cGrille[i][0],&tabMoT);
			
		}
    for(i=0; i<N; i++){
      for(j=0; j<M; j++){
        if(cGrille[i][j]==' '){
         cGrille[i][j]='@';
        } 
      }
    }
}*/

void GrillePlacementVh() //Place les mots en verticale en partant du haut
{
}

void GrillePlacementVb() //Place les mots en horizontale en partant du bas
{
}

void GrilleCaseDispo() //Place des lettres dans les cases non utilisées
{
  int i, j;
  srand(time(NULL));
  int nbRand;
  const char alphabet[] = "abcdefghijklmnopkrstuvwxyz";
   for(i=0; i<N; i++){
    for(j=0; j<M; j++){
      if(cGrille[i][j]=='@'){
         nbRand=uHasard(0,26);
         cGrille[i][j]=alphabet[nbRand];}
    }
  }
}

//on verra pour les diagonales plus tard
void GrillePlacer()
{ //Placer les mots stockés dans tabMoT dans la grille
    GrilleInitialiser(); //permet de marquer les cases disponibles restantes
    GrillePlacementHg();
    GrilleCaseDispo();
    //Appel0("GrillePlacer");

    //Appel1("GrillePlacer");
}

/*void GrillePlaceVerific(int coordDeb, int coordFin)
{ //Vérifie si le mot choisi a travers les coordonnées de la grille est correct
    int i, j;
    //Appel0("GrillePlacement");
		for (i=0; i<N; i++) {
			for (j=0; j<M; j++){
				cGrille[coordDeb][coordFin]=' ';
			}
		}
    //Appel1("GrillePlacement");
}*/

void GrilleAmorcer()
{
}

void GrilleTester(int numTest){
    switch (numTest) {
        case 1:
            GrilleAfficher();
            break;
            
        default:
            break;
    }
}
