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

   
    //int err = trans_puissance(transmission, 4, 1000, 2500, 1);

    Roue roue1(4.5, 3), roue2(3.5, 2);

    cout << "D1 = " << roue1.getD();
    cout << "\nD2 = " << roue2.getD();

    Arbre arbre1;
    arbre1.setMenante(&roue1);
    arbre1.setMenee(&roue2);

    cout << "\nD1 = " << arbre1.getMenante()->getD();
    cout << "\nD2 = " << arbre1.getMenee()->getD();
    //cout << "Nombre d'arbres : " << transmission.getNbArbres();


    //print_trans(transmission);


}