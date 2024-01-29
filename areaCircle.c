//To find the area of a circle
#include <stdio.h>

void main(){
  float radius, area;
  printf("Enter the radius of the circle:\n");
  scanf("%f",&radius); //take input from user
  area=3.14*radius*radius;
  printf("The area of the circle is %f",area);
}
