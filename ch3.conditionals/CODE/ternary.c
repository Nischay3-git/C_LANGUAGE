#include <stdio.h>
int main()
{
    // condition? expression-if-true: expression-if-false ;
    int a = 46;
    int b = 63;

    a > b ? printf("%d is greater", a) : printf("%d is greater", b);
    return 0;
}