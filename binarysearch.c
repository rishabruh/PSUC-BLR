#include<stdio.h>

int main(){
  int arr[15]={6,13,14,25,33,43,51,53,64,72,84,93,95,96,97}, hi=14,lo=0,found,mid,key=33;
  do{
    mid=(lo+hi)/2;
    if (key<arr[mid])
      hi=mid-1;
    else if(key>arr[mid])
      lo=mid+1;
  } while (key!=arr[mid] && lo<=hi);
  if (key==arr[mid])
    printf("Element found at position %d", mid+1);
  else
    printf("Key not found");
}
