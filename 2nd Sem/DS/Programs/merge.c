#include<stdio.h>
void merge(int a[], int low, int high, int mid)
{
  int i = low, j = mid+1, k=low, c[100];

  while(i<=mid && j<=high)
  {
    if(a[i] < a[j])
    c[k++] = a[i++];
    else
    c[k++] = a[j++];
  }

  while(i<=mid)
  c[k++] = a[i++];

  while(j<=high)
  c[k++] = a[j++];

  for(i = low; i < k; i++)
  a[i] = c[i];
}

void mergesort(int a[], int l, int h)
{
  int mid;
  if(l<h)
  {
    mid = (l+h)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,l,h,mid);
  }
  return;
}

int main()
{
  int n,i,a[50],k;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter array elements here:\n");

  for(k=0; k<n; k++)
  scanf("%d", &a[k]);
  mergesort(a,0,n-1);
  printf("Sorted Array is : ");

  for(k=0; k<n; k++)
  printf("%d\t", a[k]);
  printf("\n\n");
  return 0;
}
