/*write a program to print the following pattern (for n lines)
*
***
*****

*/
#include <stdio.h>

int main()
{
    int n = 3;
    for (int i = 0; i <= 2; i++){
        // This code runs from 1-3
        // when i=0 --> print 1 star
        // when i=1 --> print 3 star
        // when i=2 --> print 5 star
        // we'll use (2i+1) as no_of_stars cuz it is a odd series

        // this for loop prints 2i+1 stars for each value of i
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("Senu");
        }
        printf("\n");
    }
    return 0;
}