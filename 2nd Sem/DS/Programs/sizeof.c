#include<stdio.h>
int main()
{
char a;
signed char b;
unsigned char c;
short int d;
signed short int e;
unsigned short int f;
signed int g;
unsigned int h;
long int i;
signed long int j;
unsigned long int k;
float l;
double m;
long double n;

printf("Size of char : %ld bytes\n", sizeof(a));
printf("Size of signed char : %ld bytes\n", sizeof(b));
printf("Size of unsigned char : %ld bytes\n", sizeof(c));
printf("Size of short int : %ld bytes\n", sizeof(d));
printf("Size of signed short int : %ld bytes\n", sizeof(e));
printf("Size of unsigned short int : %ld bytes\n", sizeof(f));
printf("Size of signed int : %ld bytes\n", sizeof(g));
printf("Size of unsigned int : %ld bytes\n", sizeof(h));
printf("Size of long int : %ld bytes\n", sizeof(i));
printf("Size of signed long int : %ld bytes\n", sizeof(j));
printf("Size of unsigned long int : %ld bytes\n", sizeof(k));
printf("Size of float : %ld bytes\n", sizeof(l));
printf("Size of double : %ld bytes\n", sizeof(m));
printf("Size of long double : %ld bytes\n", sizeof(n));
return 0;
}
