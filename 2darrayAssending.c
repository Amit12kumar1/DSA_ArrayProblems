# include<stdio.h>
int main (){
    int r,c;
    printf("enter the rows and column \n");
    scanf("%d %d",&r,&c);
    int arr[c][r];
    printf("input the array \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            for(int k=0;k<c;k++){
                for(int m=0;m<r;m++){
                    if(arr[i][j]<arr[k][m]){
                        int q=arr[i][j];
                        arr[i][j]=arr[k][m];
                        arr[k][m]=q;
                    }
                }
            }
        }
    }
    printf("desending order arrar \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}