#include<stdio.h>

void main(){
    int m1,m2,m3,m4,m5,total;
    float per;
    printf("Enter the subject marks in 5 subjects:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    per=total/5;
    if (per>=85)
        printf("Distinguished");
    else if (per>=60 && per<85)
        printf("First Division");
    else if (per>=50 && per<60)
        printf("Second Division");
    else if (per>=35 && per<50)
        printf("Passed");
    else
    printf("You failed L bozo +cope +seethe +mald");
}