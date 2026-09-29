# include<stdio.h>
int main (){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int arr[n][n];
    printf("array input \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("souting array row wise ......\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           for(int k=0;k<n;k++){
            if(arr[i][j]<arr[i][k]){
                int q=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=q;
            }
           }
            }
            
        }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}