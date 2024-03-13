#include <stdio.h>

void main(){
  int a[100],k,n,i,m[5]={1,2,3,4,5};
  printf("Enter size of array and k\n");
  scanf("%d %d",&n,&k);
  printf("Enter array of elements:\n");
  for (i=0;i<n;i++){
    printf("loop 1 ");
    scanf("%d ",&a[i]);
  }
  for (i=0;i<n;i++){
    printf("%d ",k*m[i]);
  }
  
}
