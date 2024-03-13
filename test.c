#include <stdio.h>

void main(){
  int a=10,b=5,c=1;
  if (a>b>c)
    printf("I am in class G");
  else
   printf("I am at home\n"); 
  if (a>b && b>c)
    printf("I am in class\n");
  else
   printf("I am at home");
}
