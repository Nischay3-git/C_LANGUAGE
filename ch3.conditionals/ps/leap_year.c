#include <stdio.h>
int main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d", &y);
//century years are leap year only when they can be divided by 400
    if (y%4==0 && y%100!=0 || y%400==0)
    {
        printf("LEAP YEAR");
    }

    else
    {
        printf("Not leap year");
    }
    return 0;
}