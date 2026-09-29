#include<stdio.h>
// function - declare and define a function
// var declaration - datatype varname; int a;
// fun declaration - datatype[returnType] functionName();
// fun declaration - datatype[returnType] functionName(int a, int b);
// fun declaration - void functionName(int a, int b);
// fun declaration - void functionName();

// infinite recursion
//void f(){
//    printf("recursion");
//    f();
//}
// finite recursion
void f(int n){
    // base case
    if(n == 0){
        return;
    }
    n--;
    f(n);
    printf("%d recursion\n", n);
}
int main(){
    
 f(5);
    return 0;
}

// recursion
