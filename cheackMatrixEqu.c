#include<stdio.h>
int main(){
 int i,j,r,c,count;
  printf("\nEnter No of Rows : ");
  scanf("%d",&r);
  printf("\nEnter No of Columns : ");
  scanf("%d",&c);
  printf("\nEnter A Matrix : ");
   int a[r][c],b[r][c];
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
    }
  }

  printf("\nEnter B Matrix : ");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       scanf("%d",&b[i][j]);
    }
  }
  count=1;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(a[i][j]!=b[i][j]){
       count=0;
       break;
    }
  }
  }
  if(count==1){
   printf("matrix are equle");
      }
      else{
        printf("not equ");
      }

  return 0;
}