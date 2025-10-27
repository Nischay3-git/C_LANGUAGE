
// number is divisible by 97 or not?
#include <stdio.h>
int main(){
    int n;
    printf("\n");// prompt user for input
    printf("Enter a number:\n");
    fflush(stdout);
    scanf("%d", &n);
    if (n % 97 == 0)
    {
        printf("Number is divisible by 97\n");
    }
    else
    {
        printf("Number is not divisible by 97\n");
    }
    return 0;
}