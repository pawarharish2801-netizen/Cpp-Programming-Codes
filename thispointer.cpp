#include <iostream>

using namespace std ;

class person 
{
    private :
            int age ;

    public:
        person (int age) 
        {
            this->age=age;
        }

        void printvalue()
        {
            cout<<"Age"<<age<<endl ;
        }
} ;
int main()
{
    person a(45) ;
    a.printvalue() ;
}
