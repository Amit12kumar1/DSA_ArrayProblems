#include<stdio.h>
int main(){
	int n,max,smax;
 printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
max=0,smax=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]>max){
    smax=max;
    max=arr[i];
    }
    else if (arr[i]>smax&&arr[i]!=max){
        smax=arr[i];
    }
   

    }
     printf("%d",smax);
    return 0;
}

