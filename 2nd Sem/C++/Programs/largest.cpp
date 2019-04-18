#include <iostream>
using namespace std;

int largest(int a, int b)
{
    return (a > b ? a : b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Largest: " << largest(a, b);
}