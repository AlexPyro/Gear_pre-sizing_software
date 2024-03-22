#include "../include/prototypes.hpp"

#include <iostream>
using namespace std;


int main()
{

    //Roue R1(1, 14.4);

    //cout << "Z= " << R1.getZ() << " M= " << R1.getM() << " D=" << R1.getD();

    Trans* trans_opti = trans_puissance(4, 1000, 2500, 1);

    cout << "Nombre d'arbres : " << trans_opti->getNbArbres();

}