#include<iostream>
using namespace std;
int func(int);
const int X = 5;
int main(){
cout << "Program is starting.\n";
int result;
int X = 10;
cout << "In the middle of the program.\n";
result = func(X);
cout << "The result is " << result << ".\n";
}
   int func(int y){
   int answer;
     cout << "In the function.\n";
     answer = y;
     answer += X;
     int X = 20;
     cout << "In the middle of the function.\n";
     answer += X;
     cout << "The function is exiting.\n";
     return answer;
 }