#include "../include/prototypes.hpp"

#include <iostream>
using namespace std;

void print_trans(Trans transmission){
    printf("here\n");
    Arbre *p = transmission.getArbres();
    printf("here\n");
    printf(" nb arbre %d \n", transmission.getNbArbres());
    for(int i = 0; i < transmission.getNbArbres(); i++){
        printf(" arbre n° %d \n", i);
        printf(" \t roue menante Z = %d , D = %f, M = %f \n", p->getMenante()->getZ(), 
            p->getMenante()->getD(), p->getMenante()->getM());
        printf(" \t roue menee Z = %d , D = %f, M = %f \n", p->getMenee()->getZ(), 
            p->getMenee()->getD(), p->getMenee()->getM());
    }  
}


int main()
{

    //Roue R1(1, 14.4);

    //cout << "Z= " << R1.getZ() << " M= " << R1.getM() << " D=" << R1.getD();

    //Arbre* arbre1;
    //Arbre* arbre2;

    Trans transmission;

    //transmission.ajoutArbre(arbre1);
    //transmission.ajoutArbre(arbre2);

    //Arbre* arbre3 = transmission.getArbres();


    int err = trans_puissance(transmission, 4, 1000, 2500, 1);


 

    //cout << "Nombre d'arbres : " << transmission.getNbArbres();

    //for(int i = 0; i < 2; i++){
    //    printf(" arbre n° %d \n", i);
    //    printf(" \t roue menante Z = %d , D = %f, M = %f \n", arbre3.getMenante()->getZ(), 
    //        arbre3.getMenante()->getD(), arbre3.getMenante()->getM());
    //    printf(" \t roue menee Z = %d , D = %f, M = %f \n", arbre3.getMenee()->getZ(), 
    //        arbre3.getMenee()->getD(), arbre3.getMenee()->getM());
    //        arbre3 = *arbre1.getSuivant();
    //} 

    //transmission.ajoutArbre(&arbre1);
    //transmission.ajoutArbre(&arbre2);

    //printf("nb arbre %d\n ", transmission.getNbArbres());

    print_trans(transmission);


}