#include<iostream>

using namespace std;

int GCD(int x, int y);

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << GCD(a,b);
}

int GCD(int x, int y)
{
    while(y != 0){
        int temp = x % y;
        x = y;
        y = temp;
    }
    
    return x;
}
