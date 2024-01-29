#include <stdio.h>

void main(){
  int sp,cp,i;
  float disc,prof,profPerc,newsp;
  for (i=0;i<5;i++){
    printf("Enter selling price and cost price for product %d:\n",(i+1));
    scanf("%d %d",& sp,&cp);
    prof=sp-cp;
    profPerc=(prof/cp)*100;
    if (profPerc>80){
      disc=0.18*sp;
      newsp=sp-disc;
      printf("18 percent discount applied, item costs %f\n",newsp);
    }
    else if (profPerc>=56 && profPerc<=80){
        disc=0.14*sp;
        newsp=sp-disc;
        printf("14 percent discount applied, item costs %f\n",newsp);
      }
    
    else if (profPerc>=36 && profPerc<=55){
        disc=0.12*sp;
        newsp=sp-disc;
        printf("12 percent discount applied, item costs %f\n",newsp);
    }
      
    else if (profPerc>=20 && profPerc<=35){
        disc=0.08*sp;
        newsp=sp-disc;
        printf("8 percent discount applied, item costs %f\n",newsp);
      }

    else{ 
        disc=0;
        newsp=sp-disc;
        printf("0 percent discount applied, item costs %f\n",newsp);
    }
  }
}
