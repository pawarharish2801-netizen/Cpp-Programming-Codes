#include <iostream>

using namespace std;

class Base
{
    public:
    int i,j;
    float f;
    double d;

    void fun() 
    {}

    void gun()
    {}
};

class Derived: public Base
{
    public:
    int i;
    double d;

    void sun()
    {}
};

int main()
{
    Base bobj;
    Derived dobj;
    
    return 0;
}
