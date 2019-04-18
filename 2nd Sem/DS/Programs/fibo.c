#include<stdio.h>
int fibo(int n);
int main()
{
	int n;
	printf("Enter number:\n");
	scanf("%d",&n);
	printf("Fibonacci series of %d is:%d",n,fibo(n));
}
int fibo(int n)
{
	int x,y;
	if(n<=1)
	return(n);
	x=fibo(n-1);
	y=fibo(n-2);
	return(x+y);
}
