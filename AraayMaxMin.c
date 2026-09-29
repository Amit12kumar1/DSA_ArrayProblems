#include<stdio.h>
int main(){
	int n, max,min;
	printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
    min=arr[0];
    max=arr[0];
for (int i = 0; i <n; i++)
{
  if(min>arr[i])
  min=arr[i];
  if (max<arr[i])
  max=arr[i];
}
printf("min array is=%d",min);
printf("max array is=%d",max);

    return 0;
}