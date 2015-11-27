#include "Grille.h"
#define N 9
#define M 16

char cGrille[N][M];

void GrilleAfficher()
{
    GrilleInitialiser();
    int i, j;
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++){
            printf(" %c ", cGrille[i][j]);
        }
        printf(" \n");
    }
        
        
}//GrilleAfficher

void GrilleInitialiser(){
    int i, j;
    //Appel0("GrilleInitialiser");
		for (i=0; i<N; i++) {
			for (j=0; j<M; j++){
				cGrille[i][j]='A';
			}
		}
    //Appel1("GrilleInitialiser");
}

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
