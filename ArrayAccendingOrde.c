#include<stdio.h>
int main(){
	int arr[4];
	int i,j;
	int temp;
		printf("enter a array.");
		for(i=0;i<4;i++){
	scanf("%d",&arr[i]);
}
	for(i=0;i<4;i++){
		for(j=i+1; j<4;j++){
			if(arr[i]>arr[j]){
			
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
	for(i=0; i<4; i++){
		printf("%d ",arr[i]);
	
	}
	
	return 0;	
	
}