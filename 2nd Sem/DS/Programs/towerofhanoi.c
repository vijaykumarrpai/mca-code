#include<stdio.h>
void Tower_Hanoi(int,char,char,char);
int main(void)
{
  int n;
  printf("Enter the number of disks:");
  scanf("%d",&n);
  Tower_Hanoi(n,'A','C','B');
  return 0;
} /*end main*/

void Tower_Hanoi(int n, char frompeg, char topeg, char auxpeg)
{
  /*If only one disk, make the move and return.*/
  if(n==1)
  {
    printf("%s %c %s %c\n", "Move disk 1 from peg", frompeg, "to peg", topeg);
    return;
  } /*end if*/
    /*Move top n-1 disks from A to B using C as auxiliary*/
Tower_Hanoi(n-1, frompeg, auxpeg, topeg);
/*Move remaining disk from A to C*/
printf("%s %d %s %c %s %c\n", "Move disk", n, "from peg", frompeg, "to peg", topeg);
/*Move n-1 disk from B to C using A as auxiliary*/
Tower_Hanoi(n-1, auxpeg, topeg, frompeg);
}
/*end Tower_Hanoi*/


