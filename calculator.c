#include<stdio.h>

void main(){
  int n1,n2,ch;
  printf("Enter two numebers:\n");
  scanf("%d %d",&n1,&n2);
  printf("Enter operation (0=add,1=sub,2=mult,3=div,4=rem):\n");
  scanf("%d",&ch);
  switch(ch){
    case 0:
      printf("Sum = %d",n1+n2);
      break;
    case 1:
      printf("diff = %d",n1-n2);
      break;
    case 2:
      printf("prod = %d",n1*n2);
      break;
    case 3:
      printf("div = %d",n1/n2);
      break;
    case 4:
      printf("modulo = %d",n1%n2);
      break;
  }


}
