#include "../include/Roue.hpp"

Roue::Roue(double M,int Z)
{
    _Z = Z;
    _M = M;
    _D = Z*M;
}

Roue::Roue(double D, double M)
{
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