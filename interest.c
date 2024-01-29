//TO find simple interest and compound interest

#include <stdio.h>
#include <math.h>

void main(){
  float p,t,r,n,si,ci,A;
  printf("Enter p, t, r and n:\n");
  scanf("%f %f %f %f",&p,&t,&r,&n);
  si=(p*t*r)/100;
  A=p*pow(1+(r/100),n);
  ci=A-p;
  printf("Simple interest is %f\nCompound interest is %f\n",si,ci);
}
