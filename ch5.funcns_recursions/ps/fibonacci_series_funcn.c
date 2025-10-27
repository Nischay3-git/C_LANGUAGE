// 0,1,1,2,3,5,8,13,21,34....
//  fibonacci(n)= fibonacci(n-1)+fibonacci(n-2)
#include <stdio.h>
int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int m;
    scanf("%d", &m);

    printf("The %dth term of the Fibonacci series is: %d\n", m, fibo(m));
    return 0;
}