#include "Outil.h"
#include "Mot.h"
#include "Grille.h"

void ModuleAmorcer(){
    GrilleAmorcer();
    MotAmorcer();
}//ModuleAmorcer

int main(){
    ModuleAmorcer();
    MotTester(1);
    GrilleTester(1);
    return 0;
}
