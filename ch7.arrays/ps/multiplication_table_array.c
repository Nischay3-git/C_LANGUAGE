// array of store multiplication table of n
#include <stdio.h>
int main()
{
    int a[11], n;
    printf("Enter the number whose table is required ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        a[i] = n * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, a[i]);
    }
    return 0;
}