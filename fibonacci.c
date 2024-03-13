#include <stdio.h>
#include <math.h>

void main(){
  int n,num=0,prevnum=0,sum,i;
  scanf("%d",&n); 
  for (i=1;i<=n;i++){
    sum=num+prevnum;
    printf("%d",sum);
    num=prevnum;
    prevnum=sum;
  }
}
