#include<stdio.h>
int main(){
int f1,f2,f3,n,j=0;
int arro[4];
while(1){
    printf("enter a number");
scanf("%d",&n);
f1=0;
f2=1;
 f3=f1+f2;
while(f3<n){
    f1=f2;
    f2=f3;
    f3=f1+f2;
}
if(f3==n||n==0){
arro[j]=n;
//printf("enter number is fabonacci\n");
j++;
if(arro[j]<j){
    break;
}
}
}
printf("\noutput of odd araay\n");
	for (int i = 0; i < 4; i++){
			printf("%d ",arro[i]);
    }
   return 0;
}