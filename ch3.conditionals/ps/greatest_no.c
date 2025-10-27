#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the number: ");
    scanf("%d", &b);
    printf("Enter the number: ");
    scanf("%d", &c);
    printf("Enter the number: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest number among the four", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greatest number among the four", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("%d is the greatest number among the four", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("%d is the greatest number among the four", d);
    }
    return 0;
}
