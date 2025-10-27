#include <stdio.h>
int main(){
    int m=5;
    float n= 5.6;

    float d= (float)m;
    int c= (int)n;//demotes the value to an integer
    printf("The value of c is %d\nThe value of d is %f", c,d);

    float e= -5.6;
    int f= (int)e;//gives -5 as the value is truncated*
    printf("\nThe value of f is %d", f);
    return 0;
}
// truncated means that the decimal part is removed, not rounded.