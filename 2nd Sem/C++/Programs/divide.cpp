#include<iostream>
using namespace std;

int divide(int a, int b)
{

    int temp = 1;
    int quotient = 0;

    while (b <= a)
    {
        b <<= 1;
        temp <<= 1;
    }

    while (temp > 1)
    {
        b >>= 1;
        temp >>= 1;

        if (a >= b)
        {
            a -= b;
            quotient += temp;
        }
    }

    return quotient;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Divide: " << divide(a, b) << endl;
}