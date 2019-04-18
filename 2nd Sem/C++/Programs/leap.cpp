#include <stdio.h>
int main()
{
    int n;
    cout << "Enter a year: \n";
    cin >> n;

    if (n % 400 == 0)
        cout << "Leap year\n";
    else if (n % 100 == 0)
        cout << "Not a leap year\n";
    else if (n % 4 == 0)
        cout << "Leap year\n";
    else
        cout << "Not a leap year\n";
}