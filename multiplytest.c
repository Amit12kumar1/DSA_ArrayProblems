#include<stdio.h>
int main()
{
 int i,j,r,c,t,k,r1,c1;
  printf("\nEnter No of Rows : ");
  scanf("%d",&r);
  printf("\nEnter No of Columns : ");
  scanf("%d",&c);
 printf("\n second Enter No of Rows : ");
  scanf("%d",&r1);
  printf("\n second Enter No of Columns : ");
  scanf("%d",&c1);
  printf("\nEnter A Matrix : ");
   int a[r][c],b[r1][c1],m[r][c];
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
    }
  }

  printf("\nEnter B Matrix : ");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
       scanf("%d",&b[i][j]);
    }
  }

  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      t=0;
      for(k=0;k<c1;k++)
      {
         t+=(a[i][k]*b[k][j]);
      }
      m[i][j]=t;

    }
  }
  
  printf("\nResult Matrix : \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       printf(" %d",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}