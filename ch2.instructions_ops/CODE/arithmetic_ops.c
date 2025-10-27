#include <stdio.h>
int main(){
    int a=5,b=3,c;
    c= a+b;
    printf("Sum of %d and %d is %d\n",a,b,c);
    //FOR REMAINDER
    printf("Remainder when %d is divided by %d is %d\n",a,b,a%b);
    return 0;
}

/* THIS DOESNOT WORK FOR EXPONENTIATION
    int d= a^b;  //This will not compute a raised to the power of b
   we have to include <math.h> and use pow(a,b) for exponentiation
   or use a loop to compute it manually.

*/