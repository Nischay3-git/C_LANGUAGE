#include <stdio.h>
int main()
{
    float amt, tp=0.0 ;
    printf("Enter your monthly income: ");
    scanf("%f", &amt);
       
    if (amt > 250000 && amt <= 500000)
    {
        tp = 0.05 * (amt - 250000);
    }
    else if (amt > 500000 && amt <= 1000000)
    {
        tp = 0.2 * (amt - 500000) + 0.05 * (500000 - 250000);
    }
    else if (amt > 1000000)
    {
        tp = (0.3 * (amt - 1000000)) + (0.2 * (1000000 - 500000)) + (0.05 * (500000 - 250000));
    }
    else if (amt >= 0.0 && amt <= 250000)
    {
        tp = 0;
        printf("No tax payable.\nThe final income is: %f", amt);
    }
    printf("the total tax payable is : %.2f", tp);
    return 0;
}
