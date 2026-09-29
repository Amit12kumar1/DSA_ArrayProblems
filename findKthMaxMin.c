#include<stdio.h>
int main(){
int n,num;
printf("enter array size");
scanf("%d",&n);
int arr[n];
printf("enter number");
for (int i = 0; i <n; i++){
scanf("%d",&arr[i]);
}
printf("enter k th number.");
scanf("%d",&num);
for(int i=1;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("%d th  is min %d ",num,arr[num-1]);
printf("\n%d is max %d ",num,arr[n-num]);
return 0;
}