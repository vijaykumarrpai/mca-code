#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x);

int main()
{

    int i, n;

    cout << "Enter a number: " << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }
}

bool isPrime(int x)
{
    int i;
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if ((x % i) == 0)
            return false;
    }
    return true;
}
