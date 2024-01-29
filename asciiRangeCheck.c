#include <ctype.h>
#include<stdio.h>

void main(){
  char inp;
  printf("Enter character to be checked:\n");
  scanf("%s",&inp);
  if (isalpha(inp)==1)
    if (islower(inp)==1)
      printf("Range of ASCII");
    else
      printf("Range of ASICC uppercase");
  else if (isdigit(inp)==1)

}
