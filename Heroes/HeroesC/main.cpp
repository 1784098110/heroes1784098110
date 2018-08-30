#include <iostream>
#include <string>
//#define NDEBUG
#include <cassert>

#include "types.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    string input;

    TY::WType weapon = TY::WType::none;
    bool test = 1==2;



    TY::Circle* circle = new TY::Circle(5, 5, 5);
    cout << circle->getRadius() << endl;

    cout << static_cast<int>(TY::WType::none) << endl;

    return 0;
}


