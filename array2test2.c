#include<stdio.h>
int main(){
    int n,n1,sum;
 int i,j,mul[10][10];
printf("enter array");
scanf("%d",&n);
printf("enter array");
scanf("%d",&n1);
int arr[10][10];
int arr1[10][10];
printf("enter array value\n");
for (i = 0; i < n; i++)
{
  for ( j = 0; j < n1; j++)
  {
   scanf("%d",&arr[i][j]);
  }
  
}

printf("enter array value\n");
for ( i = 0; i < n; i++)
{
  for ( j = 0; j < n1; j++)
  {
   scanf("%d",&arr1[i][j]);
  }
  
}


for ( i = 0; i < n; i++)
{
   
  for ( j = 0; j < n1; j++)
  {
    sum=0;
    for(int k=0;k<n1;k++){
    sum+=(arr1[i][k]*arr[k][j]);
      mul[i][j]=sum;
     }
  }
}
printf("multi of matrix\n");
for ( i = 0; i < n; i++)
{
  for ( j = 0; j < n1; j++)
  {

printf("%d",mul[i][j]);  
   }
   printf("\n");
  }


return 0;
}