#include <stdio.h>
#include <math.h>

void main(){
    int p,n;
    float r;
    double A,ci;
    printf("Enter Principal, n and rate of interest: ");
    scanf("%d %d %f",&p,&n,&r);
    A=p*pow(1+(r/100),n);
    ci=A-p;
    printf("The compound interest is %.52f\n", ci);
}