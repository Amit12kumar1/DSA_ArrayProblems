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
		if(arr[i]%2!=0)
		sum=sum+arr[i];}
        

			printf("sum of odd number=%d",sum);
	
	//printf("%d\n ",arr[i]);

	
	return 0;	
	
}
