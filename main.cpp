#include <iostream>
#include "oop.h"

using namespace std;

int main(int argc, char *argv[])
{    
    cout << "* Create Object Child" << endl;
    ChildClass child;
    
    cout << "* Create Object Base" << endl;
    Base base;
    
    cout << "* Call method func() for object base" << endl;
    base.func();
    
    cout << "* Call method func() for object child" << endl;
    child.func();
    
    Function(child);
    
    return 0;
}
