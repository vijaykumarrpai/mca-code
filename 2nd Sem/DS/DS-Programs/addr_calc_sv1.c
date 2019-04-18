#include<stdio.h>
#include<string.h>
#define MAX 5
int main(void)
{
  int offset,address,r,c,addr;
  printf("claculation of address using row major method\n");
 printf("enter the base address of the array\t");
 scanf("%d",&addr);
 printf("enter the row and col whose address you want to calculate\t");
 scanf("%d%d", &r,&c);
 if((r<MAX)&&(c<MAX))
 {
    printf("calculation of address using row major method for a int array\n");
   offset=r*MAX+c;
  address=offset*(sizeof(int))+addr;
  printf("the address of element at %d row and %d col is %d\n",r,c,address);
  printf("calculation of address using row major method for a character array\n");
  offset=r*MAX+c;
  address=offset*(sizeof(char))+addr;
  printf("the address of element at %d row and  %d col %d\n",r,c,address);
 printf("calculation of address using row major method for a float array\n");
   offset=r*MAX+c;
  address=offset*(sizeof(float))+addr;
  printf("the address of element at %d row and %d col is %d\n",r,c,address);
  printf("calculation of address using row major method for a double array\n");
   offset=r*MAX+c;
 address=offset*(sizeof(double))+addr;
 printf("the address of element at %d row and %d col is %d\n", r,c,address);
}
else
printf("invalid row and col value\n");
printf("calculation of address using col major method\n");
  printf("enter the base address of the array\t");
 scanf("%d",&addr);
 printf("enter the row and col whose address you want to calculate\t");
 scanf("%d%d",&r,&c);
 if((r<MAX)&&(c<MAX))
 {
   printf("calculation of address using col major method for an int array\n");
   offset=c*MAX+r;
   address=offset*(sizeof(int))+(int)addr;
   printf("the address of element at %d row and %d col is %d\n",r,c,address);
  printf("calculation of address using col major method for a character array\n");
  offset=c*MAX+r;
  address=offset*(sizeof(char))+addr;
  printf("the address of element at %d row and %d col is %d\n",r,c,address);
  printf("calculation of address using col major method for a float array\n");
  offset=c*MAX+r;
  address=offset*(sizeof(float))+addr;
  printf("the address of element at %d row and %d col is %d\n",r,c,address);
  printf("calculation of address using col major method for a double array\n");
  offset=c*MAX+r;
  address=offset*(sizeof(double))+addr;
  printf("the address of element at %d row and %d col is %d\n",r,c,address);
}
else
printf("invalid row and col vsalue\n");
return 0;
}


