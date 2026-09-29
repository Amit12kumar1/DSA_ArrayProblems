// #include <stdio.h>    
//      int main(){  
//    int n,n1,k=1;
// 	printf("enter Array size\n");
// 	scanf("%d",&n);
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 	printf("enter a number");
// 	scanf("%d",&arr[i]);
// 	}
//     printf("enter second array size");
//     scanf("%d",&n1);
// 	int arro[n1];
// 	for(int j=0;j<n1;j++){
// 	printf("enter a number");
// 	scanf("%d",&arro[j]);
// 	}
//       int arrp[n+n1]; 
//     for(int i = 0; i <n; i++) {  
         
//         for(int j =0; j < n1; j++) {    
//             if(arr[i] == arr[j]) {
//                 (arrp[k]=arr[j]);
//                 k++;
       
                
//               }  
//         }    
//     } 
//     for(int i=0;i<n+n1;i++){
//         printf("%d",arrp[k]);
//     }
//     return 0;
//      }

/* prime number and reverse than.*/
// #include <stdio.h>

// int main() {
//     int start, end;

//     printf("Enter the range (start end): ");
//     scanf("%d %d", &start, &end);

//     printf("Prime numbers in the range %d to %d (with reverse order):\n", start, end);

//     for (int i = start; i <= end; i++) {
//         // Check if i is a prime number
//         int isPrime = 1;
//         if (i <= 1) {
//             isPrime = 0; // Not prime
//         } else {
//             for (int j = 2; j <= i / 2; j++) {
//                 if (i % j == 0) {
//                     isPrime = 0; // Not prime
//                     break;
//                 }
//             }
//         }

//         // Print i and its reverse if it's prime
//         if (isPrime) {
//             int num = i;
//             int reversed = 0;
//             while (num > 0) {
//                 reversed = reversed * 10 + num % 10;
//                 num /= 10;
//             }
//             printf("%d (Reverse: %d)\n", i, reversed);
//         }
//     }

//     return 0;
// }


/* */
// #include<stdio.h>
// int main(){
// int n,i,j,x=1;
// printf("enter a number.");
// scanf("%d",&n);
// for ( i = 1; i <=n; i++){
//     for ( j=1;j<=i;j++)
//     {
//       printf("%d ",x*x);
//       x++;
//     }
//     printf("\n");
// }




//     return 0;
// }
/*   1 2 2
    2 3 3 
   3 4 4  */

// #include<stdio.h>
// int main(){
// int n,i,j,k,x=2;
// printf("enter a number.");
// scanf("%d",&n);
// for ( i = 1; i <=n; i++){
//     for ( j=n-1;j>=i;j--)
//     {
//       printf(" ");
//     }
//       for(k=1;k<=n;k++){
//         if(k==1){
//         printf("%d",k+j);
//         }
//         else{
//             printf("%d",x);
//         }
//       }
//     x++;
//     printf("\n");
// }
//     return 0;
// }

// #include  <stdio.h> 
// int main() {
//     int n = 6; 
// char a='a',b='A';
//     for (int i = 1; i  <= n; i++) {
//         for (int j = 1; j<=n; j++) {
//             if(i==1||i==n){
//             printf("%d",j);
//         }
//     else if (i%2==0)
// {
//     printf("%c",a);
//     a++;
// }
//   else if( i%2!=0){
//     printf("%c",b);
//     b++;
//  }
//         }
//         printf("\n");
    
//     }
//     return 0;
// }

/*  1 2 2
    2 3 3 
    3 4 4
    */
   #include<stdio.h>
int main(){
int n,i,j,k,x=2;
printf("enter a number.");
scanf("%d",&n);
for ( i = 1; i <=n; i++){
      for(k=1;k<=n;k++){
        if(k==1){
        printf("%d",i);
        }
        else{
            printf("%d",x);
        }
      }
     
    x++;
    printf("\n");
}
    return 0;
}
  

