// F=C*(9/5)+32
#include <stdio.h>

float temp(float x){

    return x*(9/5.0)+32;
}

int main(){
    float c,f;
    scanf("%f",&c);
    printf("Fahrenheit = %.2f\n",temp(c));
    return 0;
}