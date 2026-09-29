#include<stdio.h>
int fact(int n){
    // int f=1;
    if(n==0) return 1;//base class.
    return n*fact(n-1);

}

int main(){
int n;
printf("enter a number.");
scanf("%d",&n);
int f=fact(n);
printf("%d",f);
return 0;

}


