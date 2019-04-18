/*Example 2: Multiple Inheritance in C++ Programming

This program calculates the area and perimeter of an rectangle but, to perform this program, multiple inheritance is used.*/

#include <iostream>
using namespace std;

class Mammal {
  public:
    Mammal()
    {
      cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
  public:
    WingedAnimal()
    {
      cout << "Winged animal can flap." << endl;
    }
};

class Bat: public Mammal, public WingedAnimal {

};

int main()
{
    Bat b1;
    return 0;
}

Output

Mammals can give direct birth.
Winged animal can flap.
