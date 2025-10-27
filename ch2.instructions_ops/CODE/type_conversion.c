#include <stdio.h>
int main(){
    int a = 9, b = 2;
    float c= a/b; 
    float d= 9/2;
    float e= (float)a/b; //Explicit type conversion
    printf("Value of c is %f\nValue of d is %f\nValue of e is %f\n", c, d, e);

    //check this out
    int x=3.5; //Implicit type conversion
    printf("The value of x is %d\n",x); //x will be 3, as it truncates the decimal part
    
    //but 
    float y=3;
    printf("The value of y is %f\n",y);
    return 0;
} 