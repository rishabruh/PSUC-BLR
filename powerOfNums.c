//To find the power of a number with other numbers using pow() function

#include<stdio.h>
#include <math.h>

void main(){
  float num,m,sq,cu,powm,pown;
  printf("Enter the number and m:\n");
  scanf("%f %f", &num,&m);
  sq=pow(num,2);
  cu=pow(num,3);
  powm=pow(num,m);
  pown=pow(num,num);
  printf("Squared: %f\nCubed: %f\nPower of m: %f\nPower of number itself: %f", sq,cu,powm,pown);
}
