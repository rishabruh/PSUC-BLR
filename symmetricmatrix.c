#include<stdio.h>

int main(){
  int matrix[3][3]={{1,2,3},{2,4,5},{3,5,6}};
  int symmetric=1;
  for (int i=0;i<3; i++){ //loop through rows
    for (int j=0; j<3; j++){//loop thru cols
      if (matrix[i][j]!=matrix[j][i]){
        symmetric=0;
        break;
      }
    } 
    if (symmetric==0)//checking to skip rest of loop
      break;
  }
  if (symmetric)
    printf("Matrix is symmetric");
  else {
    printf("Matrix is not symmetric");
  }
}
