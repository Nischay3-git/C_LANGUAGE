// a function that can call itself in a C program
// factorial is a good example of recursion
// factorial(n)= factorial(n-1) x n
#include <stdio.h>
int factorial(int);

int factorial(int n)
{
    if (n == 1 || n == 0)//Base condition -> ensures that the recursion has an ending point
        return 1; // factorial(0) and factorial(1) are equal to 1

    return n * factorial(n - 1);
}

int main()
{

    int a = 7;  // factorial(7)=5040
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}