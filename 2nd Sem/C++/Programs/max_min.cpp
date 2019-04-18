#include <iostream>
using namespace std;

class Array{
    int arr[10];
    int max = 0, min = 0;
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
    printf("Max and Min array elements: \n");
    
    for(int i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}

int main()
{
    Array a;
    a.input();
    a.output();
}