#include<stdio.h>

int main(){
  int rows,i,j,k;
  printf("Enter number of rows: \n");
  scanf("%d",&rows);

  //loop to print all rows
  for (i=0; i<rows; i++){
    //first print whitespaces
    for(j=0; j<2*(rows-i)-2; j++){
      printf(" ");
    }
    //now asterisk
    for(k=0; k<2*i+1; k++){
      printf("* ");
    }
    printf("\n");
  }
}
