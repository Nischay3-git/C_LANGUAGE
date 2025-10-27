#include <stdio.h>
int main(){
    int x = 72;

    printf("The address of x is = %p",&x);
    //the ampersand(&) calls for the address where the value of x is stored
    int *j=&x;      //j is an integer pointer pointing at x 
    printf("\nThe address of x is = %p",j);
    //for int value
    printf("\nThe address in integer form is = %u",&x);


    printf("\n\nThe value at address j is = %d\n", *j);// you can use *(&x) instead of *j


    return 0;
}