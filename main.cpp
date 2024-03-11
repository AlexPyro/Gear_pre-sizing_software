#include "include/Roue.hpp"
#include "include/Arbre.hpp"
#include "include/Trans.hpp"
#include <iostream>

using namespace std;

int main()
{

    Roue R1(1, 14.4);

    cout << "Z= " << R1.getZ() << " M= " << R1.getM() << " D=" << R1.getD();
}