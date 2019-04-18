#include<stdio.h>
	int mul(int a,int b);
	int main()
{
	int a,b,sum;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("multiplication:%d",mul(a,b));
}
	int mul(int a,int b)
{
	int c,d,sum;
	if(b==1)
	return(a);
	c=b-1;
	d=mul(a,c);
	sum=d+a;
	return(sum);
}

