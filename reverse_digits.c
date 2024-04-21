#include<stdio.h>

int main(){
  int number, rev=0, right_digit;
  number=123;
  
  while (number!=0){
    right_digit=number%10;
    rev=rev*10+right_digit;
    number=number/10;
  }
  printf("%d",rev);
}
