#include  <stdio.h>
int main()
{
  int matA[2][2], matB[3][2], matR[2][4];
  int i,j,k;
  printf("Enter elements of the first matrix of order 2 x 3 \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&matA[i][j]);
    }
  }
  printf("Enter elements of the second matrix of order 3 x 4 \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&matB[i][j]);
    }
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      matR[i][j]=0;
      for(k=0;k<3;k++)
      {
        matR[i][j]=matR[i][j]+matA[i][k]*matB[k][j];
      }
    }
  }
  
  printf("\nMatrix multiplication is \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%d\t",matR[i][j]);
    }
    printf("\n");
  }
  return 0;
}