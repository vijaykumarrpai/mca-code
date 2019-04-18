#include<iostream>
using namespace std;
void func3() {
int fun3variable = 25;
cout << fun3variable << endl;
}
void func2() {
int fun2variable = 20;
cout << fun2variable << endl;
func3();
}
void func1() {
int fun1variable = 15;
cout << fun1variable << endl;
func2();
}
int main() {
int mainvariable = 10;
cout << mainvariable << endl;
func1();
return 0;
}