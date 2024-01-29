//To compute newton's eq1

#include <stdio.h>

void main(){
  float v,u,a,t;
  printf("Enter u, a and t:\n");
  scanf("%f %f %f",&u,&a,&t);
  v=u+a*t;
  printf("v is %f",v);
}
