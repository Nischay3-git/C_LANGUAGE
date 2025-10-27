#include <stdio.h>
int main(){

    int r=5;
    int height=10;
    float v= 3.14*r*r*height;
    float a= 2*3.14*r*r + 2*3.14*r*height;

    printf("The volume of the cylinder is %f cubic cm\n", v);
    printf("The area of the cylinder is %f square cm", a);
    return 0;
}