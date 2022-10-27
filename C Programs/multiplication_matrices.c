#include<stdio.h>
// function to read a matrix
void readmat(int A[][5],int *m,int *n)
{
    int i,j;
    printf("\nEnter order ");
    scanf("%d%d",m,n);
    printf("\nEnter the matrix\n");
    for(i=0;i<*m;i++)
    for(j=0;j<*n;j++)
    scanf("%d",&A[i][j]);
}
// function to multiply the given matrices
void multimat(int A[][5],int B[][5],int C[][5],int m,int n,int p,int q)
{
  int i,j,k;
  for(i=0;i<m;i++)
  for(j=0;j<q;j++)
  {
    C[i][j]=0;
    for(k=0;k<n;k++)
    C[i][j]=C[i][j]+(A[i][k]*B[k][j]);

  }
}
void main()
{
    int X[5][5],Y[5][5],Z[5][5],m,n,p,q,i,j;
    printf("\nEnter matrix X");
    readmat(X,&m,&n);
    printf("\nEnter matrix Y");
    readmat(Y,&p,&q);
    multimat(X,Y,Z,m,n,p,q);
    printf("\nResultant matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        printf("%d ",Z[i][j]);
       printf("\n"); 
    }
}

