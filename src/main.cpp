#include "../include/prototypes.hpp"

#include <iostream>
using namespace std;

void print_trans(Trans transmission){
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

    
    Trans transmission;
    Arbre arbre1;
    Roue roue1(13.2, 13), roue2(15.2, 10);
    arbre1.setMenee(&roue1);
    arbre1.setMenante(&roue2);
    transmission.ajoutArbre(&arbre1);

    cout << R1.getZ();
    //int err = trans_puissance(transmission, 4, 1000, 2500, 1);


    //cout << "Nombre d'arbres : " << transmission.getNbArbres();


    //print_trans(transmission);


}