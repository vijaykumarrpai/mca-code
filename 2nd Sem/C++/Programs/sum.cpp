#include <iostream>
using namespace std;

class Array{
    int arr[10];
    int sum = 0;
    public: 
        void input();
        void output();
};

void Array::input()
{
    printf("Enter array elements: \n");

    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
}

void Array::output()
{
    printf("Sum of array elements: \n");
    
    for(int i = 0; i < 10; i++){
        sum = sum + arr[i];
    }

    printf("Sum: %d\n", sum);
}

int main()
{
    Array a;
    a.input();
    a.output();
}