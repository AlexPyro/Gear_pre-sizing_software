#include <iostream>
#include <vector>

class Roue
{
    private :

    int _Z;
    double _D;
    double _M;
    std::vector<float> _modules_possibles = {0.13, 0.5, 0.6, 0.8, 1, 1.25, 1.5, 2, 2.5, 3, 4, 5, 6, 8};
    

    protected :

    public :
    
    Roue(double,int);
    Roue(double, double);

    int getZ();
    void setZ(int);

    double getD();
    void setD(double);

    double getM();
    void setM(double);
};