#include <stdio.h>

// int elementout(arr){
//   int i=0,j=0;
//   for (i=0;i<4;i++){
//     for (j=0;j<4;j++){
//       printf("%d",arr[i][j]);
//     }
//   }
// }

int main(){
  int a[100][100], prinp[100],temp,i,j;
  printf("Enter 4x4 matrix elements:\n");
  //enter elements into array
  for (i=0;i<4;i++){
    for (j=0;j<4;j++){
      printf("a%d%d: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("Printing original array:\n");
  for (i=0;i<4;i++){
    for (j=0;j<4;j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  //taking principal diagonal
  printf("The principal diagonal is:\n");
  for (i=0;i<4;i++){
    for (j=0;j<4;j++){
      if (i==j){
        printf("%d\t",a[i][j]);
      }
      else{
          continue;
      }
    }
  }
}
