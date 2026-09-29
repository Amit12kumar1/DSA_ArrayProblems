#include<stdio.h>
int main(){
	int n,j=0,k=0;
 printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
      
int oddc=0,evec=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
        oddc++;
        } 
		else{
			evec++;
		} 
    }
 int arro[oddc],arre[evec];
	for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
			arro[j]=arr[i];
			j++;
				
        }
			else{
			arre[k]=arr[i];	
				k++;
			}
		}
printf("\noutput of odd araay\n");
	for (int i = 0; i < j; i++){
			printf("%d ",arro[i]);
	}
	printf("\noutput of even araay\n");
	for (int i = 0; i < k; i++){
			printf("%d ",arre[i]);
	}
	return 0;	
}
