#include <stdio.h>

void main() {
    int p,t;
    float r;
    double si;
    printf("Enter Principal, Time (in years), rate of interest: ");
    scanf("%d %d %f", &p,&t,&r);
    si=(p*t*r)/100;
    printf("Simple interest is %2f\n", si);
}

