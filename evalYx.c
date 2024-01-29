#include<stdio.h>
#include<math.h>

void main(){
  int x,m,c;
  float y;
  printf("Give the values for x,m and c:\n");
  scanf("%d %d %d",&x, &m, &c);
  if (x>0){
    y=m*x+c;
    printf("y=mx+c = %f",y);
  }
  else if (x<0){
    y=1+pow(x,2);
    printf("y=1+x^2 = %f",y);
  }
  else {
    y=1;
    printf("y=1");
  }

}
