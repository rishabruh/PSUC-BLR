#include <stdio.h>

void main(){
  int arr[10]={6,18,48,1,324,366,8,4,7,2};
  int min=arr[0], max=arr[0],i,pos;
  for (i=0;i<10;i++){
    if (arr[i]<min){
      min=arr[i];
      pos=i;
    }
  }
  printf("%d at %d",min,pos);
}
