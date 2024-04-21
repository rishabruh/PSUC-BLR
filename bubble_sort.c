#include<stdio.h>

int main(){
  int a[]={16,12,11,67},i=0,j=0,temp,n;
  n=sizeof(a)/sizeof(a[0]);
  for (i=0; i<n-1; i++){
    for(j=0; j<n-i-1; j++){
      if(a[j]>a[j+1]){
        //interchange
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}
