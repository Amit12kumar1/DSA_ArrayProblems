#include<stdio.h>
void getarray(int a[],int n){
    printf("enter element in array\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void optput(int a[],int n){
    printf("element in array");
    for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
}
int main(){
    int n;
     printf("size of array.");
    scanf("%d",&n);
    int a[n];
getarray( a, n);
optput(a, n);
getarray( a, n);
optput(a, n);
getarray( a, n);
optput(a, n);

    return 0;
}