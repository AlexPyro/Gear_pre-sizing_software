#include <iostream>
#include <vector>

class Roue
{
    private :

    int _Z;
    double _D;
    double _M;
    
    protected :

    public :
    
    Roue(double,int);
    Roue(double, double);
    ~Roue();

    int getZ();
    void setZ(int);

    double getD();
    void setD(double);

    double getM();
    void setM(double);
};