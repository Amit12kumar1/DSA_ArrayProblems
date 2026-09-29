// // #include<stdio.h>
// // int main(){
// // 	int n,temp;
// //  	printf("enter Array size\n");
// // 	scanf("%d",&n);
// // 	int arr[n];
// // 	int i;
// // 	for(i=0;i<n;i++){
// // 	printf("enter a number");
// // 	scanf("%d",&arr[i]);
// // 	}
// // 	for(i=0;i<n/2;i++){
// //     temp=arr[i];
// // 	arr[i]=arr[n-i-1];
// // 	arr[n-i-1]=temp;
// // 	}
// // 		printf("reverse=");
// // 	for (int i = 0; i < n; i++)
// // 	{
// // 	printf("%d",arr[i]);
// // 	}
// // 	return 0;
// // }


// #include<stdio.h>
// int main(){
// 	int n,temp,d1,d2;
//  	printf("enter Array size\n");
// 	scanf("%d",&n);
// 	int arr[n];
// 	int i;
// 	for(i=0;i<n;i++){
// 	printf("enter a number");
// 	scanf("%d",&arr[i]);
// 	}
// 		printf("enter 1st index\n");
// 	scanf("%d",&d1);
// 		printf("enter 2 index\n");
// 	scanf("%d",&d2);
// 	arr[d1],arr[d2];
// 	for(i=d1;i<n/2;i++){
//     temp=arr[i];
// 	arr[i]=arr[d2];
// 	arr[d2]=temp; 
// 	d1++;  
// 	d2--;

// 	}
// 		printf("reverse=");
// 	for (int i = 0; i < n; i++)
// 	{
// 	printf("%d ",arr[i]);
// 	}
// 	return 0;
// }

#include<stdio.h>
int main(){
	int n, temp, d1, d2;
 	
    // Getting array size
    printf("Enter array size: ");
	scanf("%d", &n);
	
    // Declare the array
    int arr[n];
	
    // Input array elements
    for(int i = 0; i < n; i++){
        printf("Enter a number: ");
	    scanf("%d", &arr[i]);
	}
	
    // Input indices for reversing the section
    printf("Enter 1st index: ");
	scanf("%d", &d1);
	printf("Enter 2nd index: ");
	scanf("%d", &d2);

    // Reverse the array elements between d1 and d2
    while(d1 < d2){
        // Swap elements at d1 and d2
        temp = arr[d1];
        arr[d1] = arr[d2];
        arr[d2] = temp;
        
        // Move indices towards the center
        d1++;
        d2--;
    }

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
	    printf("%d ", arr[i]);
	}
    
    return 0;
}

