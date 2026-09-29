#include<stdio.h>
int main(){
    int n1,n2,sum=0;
printf("enter array");
scanf("%d",&n1);
scanf("%d",&n2);
int arr[n1][n2];
printf("enter array value\n");
for (int i = 0; i < n1; i++)
{
  for (int j = 0; j < n2; j++)
  {
   scanf("%d",&arr[i][j]);
  }
  
}
for (int i = 0; i < n1; i++)
{
  for (int j = 0; j < n2; j++)
  {
   //printf("%d ",arr[i][j]);//element print.
    sum=sum+(arr[i][j]);//sum of all element.

  }
//printf(" \n");//matrix.
}
printf("%d",sum);
return 0;
}