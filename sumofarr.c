#include <stdio.h>

int main(){
  int arr[8]={2,4,6,8,10,12,14,16};
  int i, sum=0;
  for (i=0;i<=8;i++){
    sum+=arr[i];
  }
  printf("Sum is %d",sum);
  return 0;
}
