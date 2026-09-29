#include <stdio.h>    
     int main(){  
   int n,i,j;
	printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
    printf("enter a number");
	for(int i=0;i<n;i++){
	
	scanf("%d",&arr[i]);
	}
   
    for( i = 0; i <n; i++) {  
        if(arr[i]!=-1){
            int count=1; 
        for( j = i + 1; j < n; j++) {    
            if(arr[i] == arr[j]) {
            count++;
          arr[j]=-1;
              
              }  
        }
          if(count>1){      
            printf("element %d times %d\n",arr[i],count);   
             }
         }
     }
   
    return 0;    
} 