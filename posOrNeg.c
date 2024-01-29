#include <stdio.h>

void main(){
  int a;
  printf("Enter a number 'a'\n");
  scanf("%d", &a);
  (a>0) ? (printf("Number is positive\n")) : (printf("Number is negative\n"));
  (a%2==0) ? (printf("Number is even\n")) : (printf("Number is odd\n")); 
}
