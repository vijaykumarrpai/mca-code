#include <iostream>
using namespace std;

class Human
{
    int head;
    int hands;
    int legs;
    
public:

    Human()
    {
          head = 1;
          hands = 2;
          legs = 2;
    }

    Human(int head)
    {
      this->head = head;
      hands = 2;
      legs = 2;
    }

    Human(Human &old)
    {
      head = old.head;
      hands = old.hands;
      legs = old.legs;
    }

    ~Human()
    {
      cout<< "All humans die after lifetime"<<endl;
    }
    void display();
};

void Human::display()
{
    cout<<"Head:"<<head<<endl;
    cout<<"Hands:"<<hands<<endl;
    cout<<"Legs:"<<legs<<endl;
}

int main()
{
    Human human1, human2(10), human3(human2);
    human1.display();
    human2.display();
    human3.display();
}
