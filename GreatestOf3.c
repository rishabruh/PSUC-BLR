#include<stdio.h>

void main()
{
    int tim,cook,jim;
    printf("Enter the ages of Tim, Cook and Jim:\n");
    scanf("%d %d %d",&tim,&cook,&jim);
    if (tim<cook && tim<jim)
        printf("Tim is the youngest.");
    else if (cook<tim && cook<jim)
        printf("Cook is the youngest");
    else
        printf("Jim is the youngest");
}