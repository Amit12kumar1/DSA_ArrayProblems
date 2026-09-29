#include<stdio.h>
int main(){
	int arr[5];
	int i;
	int sum=0;
	for(i=0;i<5;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+arr[i];}
	printf("sum of array is.%d ",sum);

	
	return 0;	
	
}
