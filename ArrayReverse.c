#include<stdio.h>
int main(){
	int n,tenp;
	printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
		}
			
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("reverse");
		for (int i = n-1; i>=0; i--){
			printf("%d ", arr[i]);
		}

    return 0;
}

