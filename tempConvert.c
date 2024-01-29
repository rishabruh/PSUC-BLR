//to convert temperature

#include<stdio.h>

void main(){
  float f,c;
  printf("Enter the temperature in farenheit:\n");
  scanf("%f",&f);
  c=(f-32)*5/9;
  printf("Temperature in celsius is: %f",c);
}
