#include <iostream>
using namespace std;

class MyClass {
public:
    static int x;          // static variable declaration
    
    void vMethod()  // static method
    { 
        cout << x;         // ✅ Allowed, since x is static
    }
};

// static variable definition outside the class
int MyClass::x;

int main() {
    MyClass::x = 135;   // assign value to static variable

    MyClass myobj; 
    myobj.x=13424;
    myobj.vMethod();    // call static method (though better style is MyClass::vMethod())
   
    return 0;
}
