#include <stdio.h>
int main()
{
    char c;
    int n;
    printf("Enter your marks: ");
    scanf("%d", &n);

    if (n <= 100 && n > 90)
    {
        c = 'A';
        printf("Your grade is %c", c);
    }
    else if (n <= 90 && n > 80)
    {
        c = 'B';
        printf("Your grade is %c", c);
    }
    else if (n <= 80 && n > 70)
    {
        c = 'C';
        printf("Your grade is %c", c);
    }
    else if (n > 100)
    {
        printf("WRONG INPUT");
    }
    else
    {
        c = 'F';
        printf("You have failed the test");
    }
    return 0;
}