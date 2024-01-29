//to find the perimeter of a triangle


#include<stdio.h>

void main(){
  int s1,s2,s3,perimeter;
  printf("Enter the sides of the triangle:\n");
  scanf("%d %d %d",&s1,&s2,&s3);
  perimeter=s1+s2+s3;
  printf("The perimeter of the triangle is: %d", perimeter);
}
