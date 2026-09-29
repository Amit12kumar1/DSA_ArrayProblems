// // #include<stdio.h>
// // int main(){
// //     	//int a = sizeof(arr) / sizeof(arr[0]);
// // 	int n;
// // 	printf("enter Array size\n");
// // 	scanf("%d",&n);
// // 	int arr[n];
	
// // 	for(int i=0;i<n;i++){
// // 	printf("enter a number");
// // 	scanf("%d",&arr[i]);
// // 	}
// //       int e[0];
// //   int evenc=0;
// // 	for(int i=0;i<n;i++){
// //         if(arr[i]%2==0){
// // printf("even=%d ", arr[i]);
        
// //         evenc++;
// //         }
        
// //     }
// //     int oddc=0;
// //     for(int i=0;i<n;i++){
// //         if(arr[i]%2==1){

// //          printf("odd=%d \n", arr[i]);
// //         oddc++;

// //         }  
// //     }

// // printf("evencount=%d\n",evenc);
// // printf("oddcount=%d",oddc);
// // 	return 0;	
	
// // }

// #include<stdio.h>
// int main(){
//     int n ;
//     int j=0,k=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
    
// int even=0, odd=0;

// for(int i=0;i<n;i++){
//       if(arr[i]%2==0){
//  even++;
//       }

//     }
//     for(int i=0;i<n;i++){
//       if(arr[i]%2!=0){
//  odd++;
//       }
   
//     }
    
//     int eaar[even],oaar[odd];
//     for(int i=0;i<n;i++){
//       if(arr[i]%2==0){
//         eaar[j]=arr[i];
//         j++;
//       }
//     }
//      for(int i=0;i<n;i++){
//       if(arr[i]%2!=0){
//         oaar[k]=arr[i];
//         k++;
//       }
//     }
    
//    printf("even array");
//    for (int i=0;i<even;i++){
// printf("%d",eaar[i]);
//     }
//     printf("\nodd array");
//    for (int i=0;i<odd;i++){
    
//       printf("%d",oaar[i]);
//     }
//     return 0;
// }




// #include <stdio.h>
// int main() {
//     int n1, n2;

//     printf("Enter the number of elements in the first array: ");
//     scanf("%d", &n1);

//     int arr1[n1];
//     printf("Enter the elements of the first array:\n");
//     for (int i = 0; i < n1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter the number of elements in the second array: ");
//     scanf("%d", &n2);

//     int arr2[n2];
//     printf("Enter the elements of the second array:\n");
//     for (int i = 0; i < n2; i++) {
//         scanf("%d", &arr2[i]);
//     }
//     int evenCount = 0, oddCount = 0;
//     for (int i = 0; i < n1; i++) {
//         if (i % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }
//     for (int i = 0; i < n2; i++) {
//         if (i % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }
//     int even[evenCount], odd[oddCount];
//     int j = 0, k = 0;
//     for (int i = 0; i < n1; i++) {
//         if (i % 2 == 0) {
//             even[j] = arr1[i];
//             j++; 
//         } else {
//             odd[k] = arr1[i];
//             k++;  
//         }
//     }

//     for (int i = 0; i < n2; i++) {
//         if (i % 2 == 0) {
//             even[j] = arr2[i];
//             j++; 
//         } else {
//             odd[k] = arr2[i];
//             k++;   
//         }
//     }
//     printf("odd indexed elements: ");
//     for (int i = 0; i < j; i++) {
//         printf("%d ", even[i]);
//     }
//     printf("even indexed elements: ");
//     for (int i = 0; i < k; i++) {
//         printf("%d ", odd[i]);
//     }

//     return 0;
// }


#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n1; i++) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    for (int i = 0; i < n2; i++) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    int even[evenCount], odd[oddCount];
    int j = 0, k = 0;
    for (int i = 0; i < n1; i++) {
        if (i % 2 == 0) {
            even[j] = arr1[i];
            j++;  // Increment j after assignment
        } else {
            odd[k] = arr1[i];
            k++;   // Increment k after assignment
        }
    }
    for (int i = 0; i < n2; i++) {
        if (i % 2 == 0) {
            even[j] = arr2[i];
            j++;  // Increment j after assignment
        } else {
            odd[k] = arr2[i];
            k++;   // Increment k after assignment
        }
    }
    
    for (int i = 0; i < j; i++) {
        printf("%d ",even[i]);
    }
    printf("\n");
    for (int i = 0; i < k; i++) {
        printf("%d ",odd[i]);
    }
  

    return 0;
}

