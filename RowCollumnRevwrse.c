#include<stdio.h>
int main(){
    int n1,n2,temp;
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

  for (int j = 0; j < n2/2; j++)
  {
    temp=arr[j][i];
    arr[j][i]=arr[n2-1-j][i];
    arr[n2-1-j][i]=temp;

  }
  }
  printf("\nreverse array\n");
  for (int i = 0; i < n1; i++)
{

  for (int j = 0; j < n2; j++)
  {
    printf("%d",arr[i][j]);
  }
printf("\n");


}
return 0;
}