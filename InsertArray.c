// #include<stdio.h>
// int main(){
// 	int n,p,x;
//  printf("enter Array size\n");
// 	scanf("%d",&n);
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 	printf("enter a number");
// 	scanf("%d",&arr[i]);
// 	}
//     printf("enter value insart\n");
// scanf("%d",&x);
// printf("enter position\n");
// scanf("%d",&p);
// for (int i = n; i >p; i--)
// {
//   arr[i]=arr[i-1];
//   arr[i-1]=x;
// }
// for (int i = 0; i <=n; i++)
// {
//     printf("%d",arr[i]);
// }

//  return 0;
// }

#include<stdio.h>
typedef int x;
int main () {
	x a = 11;
	typedef int y;
	y z = 10;
	printf("%d %d", a, z);
	return 0;
}