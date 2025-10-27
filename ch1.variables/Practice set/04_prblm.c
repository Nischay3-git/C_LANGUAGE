#include <stdio.h>
int main(){

    int p=1000,r=4,t=8;
    float si;
    si = (p*r*t)/100;
    printf("The simple interesr is %f\n", si);
    printf("The amount is %f\n", p+si);
    return 0;
}