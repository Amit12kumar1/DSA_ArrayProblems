#include<stdio.h>
int main(){
	int n;
 printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
    for(int i=0;i<n;i++){
        int num=arr[i];
        int sum=0;
        for(int j=1; j<num; j++){
            if(num%j==0){
                sum+=j;
            }
        }
        if(sum==num){
            printf("%d is a perfect number.\n",num);

        }
    }
return 0;
}