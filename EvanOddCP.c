#include<stdio.h>
int main(){
	int n,j=0;
	printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
       int evenc=0;
	for(int i=0;i<n;i++){
        if(arr[i]%2==0){
             evenc++;
            }   
        }
 int arre[evenc];
	for(int i=0;i<n;i++){
        if(arr[i]%2==0){
			arre[j]=arr[i];
			j++;
        }
	}
	printf("output of even araay\n");
	for (int i = 0; i < j; i++)
	{
	printf("%d ",arre[i]);
	}

int oddc=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
        oddc++;
        }  
    }
 int arro[oddc];
	for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
			arro[j]=arr[i];
			j++;
        }
	}
	printf("\noutput of odd araay\n");
	for (int i = 0; i < j; i++)
	{
	printf("%d ",arro[i]);
	}


printf("\nevencount=%d",evenc);
printf("\noddcount=%d",oddc);
	return 0;	
	
}
