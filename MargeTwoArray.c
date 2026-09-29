#include<stdio.h>
int main(){
int n,n1,arr3[n+n1],j=0;
printf("enter array size");
scanf("%d",&n);
int ar1[n];
for (int i = 0; i < n; i++){
    printf("enter number");
scanf("%d",&ar1[i]);
}
printf("enter array size");
scanf("%d",&n1);
int ar2[n1];
for (int i = 0; i < n1; i++){
    printf("enter number");
scanf("%d",&ar2[i]);
}
for (int i = 0; i < n; i++)
{
   arr3[j]=ar1[i];
   j++;
}
for (int i = 0; i < n1; i++)
{
   arr3[j]=ar2[i];
   j++;
}
printf("arr3 element");
for (int i = 0; i < n+n1; i++)
{
printf("%d",arr3[i]);
}
    return 0;
}