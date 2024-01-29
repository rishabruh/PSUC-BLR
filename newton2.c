//To compute newton's eq 2

#include<stdio.h>

void main(){
  float u,t,a=10,s;
  printf("Enter u, t and a\n");
  scanf("%f %f %f",&u,&a,&t);
  s=(u*t)+((a*t*t)/2);
  printf("s = %f",s);
}
