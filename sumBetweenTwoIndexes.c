#include<stdio.h>
int main(){
	int n,st,ed;
 printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
    printf("enter first indexes\n");
    scanf("%d",&st);
    printf("enter last element \n");
    scanf("%d",&ed);
    int sum=0;
    for(int i=st;i<=ed;i++){
        sum+=arr[i];
    }
    printf("sum of element between index %d and %d is %d\n",st,ed,sum);
    return 0;
}