 #include <stdio.h>
  int main() {
    int n,k;
printf("enter Array size\n");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
	printf("enter a number");
	scanf("%d",&arr[i]);
	}
    printf("enter searching array");
    scanf("%d",&k);

    int count=0;
       for(int i=0;i<n;i++) {
        if (k == arr[i]){ 
            count++;
           printf("endex number is %d\n",i);
        }
       }
    if (count>0) {
        printf("The number %d is present in the array.\n count is %d",k,count);
    } 
    else {
        printf("The number %d is not present in the array.",k,count);
    }
       
  return 0;
  }
 