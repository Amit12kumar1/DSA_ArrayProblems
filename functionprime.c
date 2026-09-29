#include<stdio.h>
void primenumber(int a,int b){
    int count,i;
while(a<=b){
      count=0;
    i=2;
   while(i<a){
        if(a%i==0){
count++;
break;
        }
        i++;
    }
   
    if(count==0 && a!=1){
        printf(" %d ", a);
    }
    a++;
}
}
int main(){
    int a,b;
printf("enter a starting number");
scanf("%d",&a);
printf("enter a last number");
scanf("%d",&b);
primenumber(a,b);
}


