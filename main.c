#include "Outil.h"
#include "Mot.h"
#include "Grille.h"

void ModuleAmorcer(){
    GrilleAmorcer();
    MotAmorcer();
}//ModuleAmorcer

int main(){
    ModuleAmorcer();
    GrilleTester(1);
    MotTester(1);
    return 0;
}