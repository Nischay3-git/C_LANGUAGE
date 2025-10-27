#include <stdio.h>
int main()
{
    int a,b,c;
    float avg;

    printf("Enter percentage in first subject: ");
    scanf("%d", &a);
    printf("Enter percentage in second subject: ");
    scanf("%d", &b);
    printf("Enter percentage in third subject: ");
    scanf("%d", &c);

    avg = (a+b+c)/3.0;
    if (avg>=40 && a>=33 && b>=33 && c>=33)
    {
        printf("You have passed the exam");
    }
    else
    {
        printf("You have failed the exam");
    }

    return 0;
}