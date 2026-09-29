#include<stdio.h>
int main(){
	int n,n1,j=0,k=0;
	      
int oddc=0,evec=0;
	int arro[oddc],arre[evec];
 printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
	printf("enter second Array size\n");
	scanf("%d",&n1);
	int arr1[n1];
	for(int i=0;i<n1;i++){
	printf("enter a number");
	scanf("%d",&arr1[i]);
	}

    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
        oddc++;
        } 
		else{
			evec++;
		} 
    
	for(int i=0;i<n1;i++){
        if(arr1[i]%2!=0){
        oddc++;
        } 
		else{
			evec++;
		} 
    }
	}
 //int arro[oddc],arre[evec];
	for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
			arro[j]=arr[i];
			j++;
				
        }
			else{
			arre[k]=arr[i];	
				k++;
			}
		
		
	for(int i=0;i<n1;i++){
        if(arr1[i]%2!=0){
			arro[j]=arr[i];
			j++;
				
        }
			else{
			arre[k]=arr[i];	
				k++;
			}
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
