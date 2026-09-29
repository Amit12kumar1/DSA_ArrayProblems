// #include<stdio.h>
// int main(){
//     int n1,n2;
//  int i,j;
// printf("enter array");
// scanf("%d",&n1);
// scanf("%d",&n2);
// int arr[n1][n2];
// printf("enter array value\n");
// for (i = 0; i < n1; i++)
// {
//   for ( j = 0; j < n2; j++)
//   {
//    scanf("%d",&arr[i][j]);
//   }
  
// }
// int arr1[n1][n2];
// printf("enter array value\n");
// for ( i = 0; i < n1; i++)
// {
//   for ( j = 0; j < n2; j++)
//   {
//    scanf("%d",&arr1[i][j]);
//   }
  
// }
// int sum[i][j];
// for ( i = 0; i < n1; i++)
// {
//   for ( j = 0; j < n2; j++)
//   {
//     sum[i][j]= arr1[i][j]+arr[i][j];
//      }
//   }
// printf("sum of matrix\n");
// for ( i = 0; i < n1; i++)
// {
//   for ( j = 0; j < n2; j++)
//   {
// printf("%d ", sum[i][j]);  
//    }
//    printf("\n");
//   }


// return 0;
// }

//*********two matrix multiply************
#include<stdio.h>
int main(){
    int n1,n2;
 int i,j;
printf("enter array");
scanf("%d",&n1);
scanf("%d",&n2);
int arr[n1][n2];
printf("enter array value\n");
for (i = 0; i < n1; i++)
{
  for ( j = 0; j < n2; j++)
  {
   scanf("%d",&arr[i][j]);
  }
  
}
int arr1[n1][n2];
printf("enter array value\n");
for ( i = 0; i < n1; i++)
{
  for ( j = 0; j < n2; j++)
  {
   scanf("%d",&arr1[i][j]);
  }
  
}
int mul[i][j];
for ( i = 0; i < n1; i++)
{
  for ( j = 0; j < n2; j++)
  {
    mul[i][j]= arr1[i][j]*arr[i][j];
     }
  }
printf("multi of matrix\n");
for ( i = 0; i < n1; i++)
{
  for ( j = 0; j < n2; j++)
  {
printf("%d ", mul[i][j]);  
   }
   printf("\n");
  }


return 0;
}