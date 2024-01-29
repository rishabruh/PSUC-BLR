#include<stdio.h>

void main(){
  int jage,sage,zage;
  printf("Enter the ages of John, Sid and Zohaib:\n");
  scanf("%d %d %d",&jage, &sage, &zage);
  if (jage>sage && jage>zage)
    printf("John is the oldest.");
  else if (sage>jage && sage>zage)
    printf("Sid is the oldest.");
  else
   printf("Zohaib is the oldest.");
}
