#include<stdio.h>
#define SIZE 10
int saddle(int matrix[][SIZE], int n);

int main()
{
  int matrix[SIZE][SIZE], n, i, j;

  printf("Enter matrix size: \n");
  scanf("%d", &n);

  printf("Enter matrix elements: \n");

  for (i = 0; i < n; i++) 
  {
    for (j = 0; j < n; j++) 
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  int saddle_point = saddle(matrix, n);

  if(saddle_point)
  {
     printf("Value of Saddle Point: %d\n ", saddle_point);
  }
  else
  {
    printf("Saddle point doesn't exist\n");
  }
}

int saddle(int matrix[][SIZE], int n)
{
    int i , j;
    for(i = 0; i < n; i++)
    {
        int row_min = matrix[i][0], index = 0;
        for (j = 1; j < n; j++)
        {
            if (row_min > matrix[i][j])
            {
                row_min = matrix[i][j];
                index = j;
            }
        }

        int k;
        for (k = 0; k < n; k++)
            if (row_min < matrix[k][index])
                break;

        if (k == n) 
        {
           return row_min;
        }
    }

    return 0;
}
