// #include<stdio.h>
// int main(){
// 	int n,num;
// 	printf("enter Array size\n");
// 	scanf("%d",&n);
// 	int arr[n];
// 	int i;
// 	for(i=0;i<n;i++){
// 	printf("enter a number");
// 	scanf("%d",&arr[i]);
// 	}
// 	printf("enter index number");
// 	scanf("%d",&num);
//     for(int i=0;i<n;i++){
// 		if(i==num)
//       printf("%d",arr[i]);
// 	}
//     return 0;
// }

//****enter the index no from user and print the element of that index.{1,0,3} x=1. output=0;
#include<stdio.h>
int main(){
	int n,num;
	printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
	int index;
	printf("enter the idex to print  .");
	scanf("%d",&index);
	if(index>=0 && index<n){
		printf("element at endex %d: %d\n",index,arr[index]);
	}
		else{
			printf("invalid index.");
		}
		return 0;
		
	}