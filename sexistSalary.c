#include<stdio.h>

void main(){
  char g;
  int yos,qual,sal;
  printf("Enter the gender (m/f), qualification (0=g, 1=pg), and years of service:\n");
  scanf("%c %d %d",&g,&qual,&yos);
  if (g=='m'){
    if (yos>=10){
      if (qual==0){}
      else if (qual==1){}
    }
    else if (yos<10){
      if (qual==0){}
      else if (qual==1){}
      

    }

  } 
  else if (g=='f'){
    if (yos>=10){
      if (qual==0){}
      else if (qual==1){}
    }
    else if (yos<10){
      if (qual==1){}
      else if (qual==0){}
    }

  }
}
