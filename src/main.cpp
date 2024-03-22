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

    Roue R1(1, 14.4);

    //cout << "Z= " << R1.getZ() << " M= " << R1.getM() << " D=" << R1.getD();

    cout << R1.getZ();
    //int err = trans_puissance(transmission, 4, 1000, 2500, 1);

    Roue roue1(4.5, 3);

    printf(" M = %f \n", roue1.getM());

    //cout << "Nombre d'arbres : " << transmission.getNbArbres();


    //print_trans(transmission);


}