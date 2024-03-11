#include "../include/Roue.hpp"
using namespace std;

Roue::Roue(double M,int Z)
{

   if (!(find(_modules_possibles.begin(), _modules_possibles.end(), M) != _modules_possibles.end()))
    {
        cout << "Module not possible, must be in the following list : {0.13, 0.5, 0.6, 0.8, 1, 1.25, 1.5, 2, 2.5, 3, 4, 5, 6, 8}" ;
    }

    if (Z < 18 | Z > 150)
    {
        cout << "Nombre de dent hors intervalle, doit être compris entre 18 et 150";
    }

    _Z = Z;
    _M = M;
    _D = Z * M;
}

Roue::Roue(double D, double M)
{
    if (D < 0 | D > 15000)
    {
        cout << "Diametre hors intervalle, doit être compris entre 0 et 15000 mm";
    }

    if (!(find(_modules_possibles.begin(), _modules_possibles.end(), M) != _modules_possibles.end()))
    {
        cout << "Module not possible, must be in the following list : {0.13, 0.5, 0.6, 0.8, 1, 1.25, 1.5, 2, 2.5, 3, 4, 5, 6, 8}" ;
    }

    _D = D;
    _M = M;
    _Z = D/M;
}
    
int Roue::getZ()
{
    return _Z;
}

void Roue::setZ(int Z)
{
    _Z = Z;
}

double Roue::getD()
{
    return _D;
}

void Roue::setD(double D)
{
    _D = D;
}

double Roue::getM()
{
    return _M;
}

void Roue::setM(double M)
{
    _M = M;
}