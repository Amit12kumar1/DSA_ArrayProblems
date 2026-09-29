#include<stdio.h>
int main(){
 int i,j,r,c,count,n;
  printf("\nEnter No of Rows : ");
  scanf("%d",&r);
  printf("\nEnter No of Columns : ");
  scanf("%d",&c);
  printf("\nEnter A Matrix : ");
   int a[r][c];
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
    }
  }
  printf("enter number search");
  scanf("%d",&n);
  count=0;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(a[i][j]==n){
        printf("\nelement %d row %d  coll %d\n",n,i,j);
       count=1;
       break;
    }
  }
  }
  

  return 0;
}