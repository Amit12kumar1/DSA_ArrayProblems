# include<stdio.h>
int main(){
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    int arr[n][n];
    printf("input array ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(arr[j][i]>arr[j+1][i]){
                    int q=arr[j][i];
                    arr[j][i]=arr[j+1][i];
                    arr[j+1][i]=q;
                }
        }
    }
    printf("souting array column wise\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}