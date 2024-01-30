#include<stdio.h>
#include<math.h>


void main(){
  float a,b,c,x,discrim,root1,root2,real,imag;
  printf("For equation ax^2 + bx + c =0, write down the values for a,b,c:\n");
  scanf("%f %f %f",&a,&b,&c);
  discrim=pow(b,2) - (4*a*c);
  switch (discrim>0){
    case 1:
      //discrim greater than 0
      //two real solutions
      root1=(-b + sqrt(discrim))/(2*a); 
      root2=(-b - sqrt(discrim))/(2*a);
      printf("The equation will have two real solutions. They are:\nRoot1 = %f and Root2 = %f",root1,root2);
      break;
    case 0:
      //discrim less than 0 or equal to 0
      switch (discrim==0){
        case 1:
        //discrim = 0
        //one real solution
        root1=root2=-b/(2*a);
        printf("The equation has only one real root. It is:\n%f",root1);
        break;
        case 0:
        //discrim negative
        //no real solution
        real = -b/(2*a);
        imag = sqrt(-discrim) / (2*a);
        printf("The equation has no real roots. Complex roots are:\nRoot1 = %f + %fi and Root2 = %f - %fi",real,imag,real,imag);
        break;
      }
  }
}
