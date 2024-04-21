#include <stdio.h>

int main(){
  int a=10,b=2,bita,bitb;
  printf("a<<b = %d, bits: %d",a<<b); 
  bita=showbits(a)
  bitb=showbit(b);
  printf("%d << %d",bita,bitb);
  return 0;
}
