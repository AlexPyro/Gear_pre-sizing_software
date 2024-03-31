#include "../include/prototypes.hpp"

#include <iostream>
using namespace std;

void print_trans(Trans& t)
{   
    printf("\n\n--------------------------------\n\n");

    Arbre* a =  t.getArbres();
    int i = 1;

    printf("\nArbre n#%d \n", i);

    if (a->getMenante() != nullptr)
    {
        printf("\tRoue menante Z = %d , D = %f, M = %f \n", a->getMenante()->getZ(), a->getMenante()->getD(), a->getMenante()->getM());
    }

    while (a->getSuivant() != nullptr) 
    {   
        i++;

        a = a->getSuivant();

        printf("\nArbre n#%d \n", i);

        if (a->getMenee() != nullptr)
        {
            printf("\tRoue menee Z = %d , D = %f, M = %f \n", a->getMenee()->getZ(), a->getMenee()->getD(), a->getMenee()->getM());
        }     

        if (a->getMenante() != nullptr)
        {
            printf("\tRoue menante Z = %d , D = %f, M = %f \n", a->getMenante()->getZ(), a->getMenante()->getD(), a->getMenante()->getM());
        }
    }  
}


int main()
{
    Trans transmission;
    
    int err = trans_puissance(transmission, 4, 1000, 2500, 1);

    print_trans(transmission);
}