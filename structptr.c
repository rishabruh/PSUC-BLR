#include<stdio.h>

struct invent{
  char name[30];
  int number;
  float price;
};

int main(){
  struct invent prod[3], *ptr;
  printf("Enter 3 (0, 1 and 2) sets of Name, Number and Price:\n");

  for(ptr=prod; ptr<prod+3; ptr++){
    scanf("%s %d %f",ptr->name, &ptr->number, &ptr->price);
    printf("--------\n");
  }
  ptr=prod;
  while(ptr<prod+3){
    printf("%s %d %f\n",ptr->name, ptr->number, ptr->price);
    ptr++;
  }
  return 0;
}
