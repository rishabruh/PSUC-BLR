#include<stdio.h>
#include <math.h>

int main(){
  float Q, x, series=0;
  int i, j, limit, fac, k;
  printf("Enter value of x for sin series and limit upto which it should be expanded:\n");
  scanf("%f %d",&x,&limit);
  Q=x; //storing for later
  x=x*(3.14/180); //convert to rads
  
  for (i=1, j=1; i<=limit; i++, j=j+2){
    fac=1; //find factorial of the number
    for (k=1; k<=j; k++){
      fac=fac*i;
    }
    if (i%2!=0){ //check sign for every even term
      series=series+pow(x,j)/fac;
    }
    else{
      series=series-pow(x,j)/fac;
    }
  }
  printf("Sin(%0.1f): %f",Q,series);
}
