///********factorial************

// #include<stdio.h>
// int fact(int n);

// int main(){
// int n,x;
// scanf("%d",&n);
// x=fact(n);
// printf("factorial is. %d",x);
//     return 0;
// }
// int fact(int n){
//     int i,f=1;
//     for(i=1;i<=n;i++){
//         f=f*i;
//     }
// return f;
// }

//***********evenOdd*******

#include<stdio.h>
void even(int n ,int n2){
    for(int i=n;i<=n2;i++){
        if(i%2==0){
    printf("even number %d\n",i);
}
else{
    printf("odd %d\n",i);
}

    }

}

int main(){
int n,n1;
printf("enter a number");
scanf("%d %d",&n,&n1);
even(n,n1);
    return 0;
}
