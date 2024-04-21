#include<stdio.h>
#include<math.h>

int main(){
  int matrix[3][3]={{1,2,3,},{4,5,6},{7,8,9}};
  int trace=0;
  double norm=0.0;
  for (int i=0; i<3; i++){
    trace+=matrix[i][i]; //trace is the sum of diagonal elements
    for(int j=0; j<3;j++){
      norm+=pow(matrix[i][j],2);// norm is (sqrt(summation(element^2)))
    }
  }
  norm=sqrt(norm);
  printf("Trace %d\n",trace);
  printf("Norm %2f\n",norm);
}
