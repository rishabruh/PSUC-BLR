#include <stdio.h>

int main(){
  int a[100],n,key,i,flag=0,pos;
  printf("Enter n and element to search:\n");
  scanf("%d %d",&n,&key);
  //enter elements into array
  for (i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for (i=1;i<n;i++){
    if (key==a[i]){
      flag=1;
      pos=i+1;
      break;
    }
  }
  if (flag==1){
    printf("Element found at index %d ",pos);
  }
  else {
    printf("Element not found in given array");
  }
  return 0;
}
