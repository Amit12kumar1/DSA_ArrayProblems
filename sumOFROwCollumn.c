#include<stdio.h>
int main(){
    int n1,n2;
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
 int sum=0;
  for (int j = 0; j < n2; j++)
  {
    //sum=sum+arr[i][j];//row sum.
   sum=sum+arr[j][i];

  }

printf("sum of colum %d\n",sum);
//printf("sum of rows %d\n",sum);//row sum.
}
return 0;
}