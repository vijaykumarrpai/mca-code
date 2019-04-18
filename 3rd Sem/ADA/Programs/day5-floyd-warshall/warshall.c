#include<stdio.h>
#define MAX 20
int main()
{
          int i,j,k,n;
          int w_adj[MAX][MAX],adj[MAX][MAX],path[MAX][MAX];
          printf("WARSHALL'S ALGORITHM\n");
          printf("\nEnter number of vertices : ");
          scanf("%d",&n);
          printf("\nEnter weighted adjacency matrix :\n");
          for(i=0;i<n;i++)
             for(j=0;j<n;j++)
                   scanf("%d",&w_adj[i][j]);

          printf("\nThe weighted adjacency matrix is :\n");
          display(w_adj,n);
          for(i=0;i<n;i++)
             for(j=0;j<n;j++)
                   if(w_adj[i][j]==0)
                             adj[i][j]=0;
                   else
                             adj[i][j]=1;

          printf("\nThe adjacency matrix is :\n");
          display(adj,n);

          for(i=0;i<n;i++)
             for(j=0;j<n;j++)
                   path[i][j]=adj[i][j];

          for(k=0;k<n;k++)
          {
                    printf("\nP%d is :\n",k);
                   display(path,n);
                   for(i=0;i<n;i++)
                     for(j=0;j<n;j++)
                         path[i][j]=( path[i][j] || ( path[i][k] && path[k][j] ) );
          }
          printf("Path matrix P%d of the given graph is :\n",k);
          display(path,n);
          }

display(int matrix[MAX][MAX],int n)
{
          int i,j;
          for(i=0;i<n;i++)
          {
                   for(j=0;j<n;j++)
                             printf("%3d",matrix[i][j]);
                   printf("\n");
          }

}