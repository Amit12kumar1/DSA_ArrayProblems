#include<stdio.h>
int main(){
	int n,min,smin;
 printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
min=999999,smin=999999;
for (int i = 0; i < n; i++)
{
    if(arr[i]<min){
    smin=min;
    min=arr[i];
    }
    else if (arr[i]<smin&&arr[i]!=min){
        smin=arr[i];
    }
   

    }
     printf("%d",smin);
    return 0;
}