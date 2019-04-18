#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int size, *ptr, i;
  printf("\nHow many elements:");
  scanf("%d",&size);
  printf("%d is stored at %u",*ptr,ptr);


ptr = (int*) malloc(size *sizeof(int));
  if(ptr==NULL)
  {
    printf("Sorry memory is not allocated\n");
    exit(0);
  }

  for(i=0;i<size;i++)
  {
    scanf("%d",ptr+i);
  }

  for(i=0;i<size;i++)
  {
    printf("%d\t",*(ptr+i));
  }
  free(ptr);
}
