#include<stdio.h>
int main(){
    int n,p;
    printf("enter array size");
    scanf("%d",&n);
    int aar[n];
      printf("enter number");
    for (int i = 0; i <n; i++){
      
        scanf("%d",&aar[i]);
    }
    printf("enter delete position");
    scanf("%d",&p);
  
        for(int i=p;i<n;i++){
        (aar[i]=aar[i+1]);
        }
      n--;
    
for (int i = 0; i < n; i++)
    printf("%d",aar[i]);
    

return 0;
}   
