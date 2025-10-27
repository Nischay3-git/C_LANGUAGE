/*as the number of conditions increases, the number of identations 
 increases. Here, logical operators come to the rescue.
*/
#include <stdio.h>
int main(){
    int a=1,b=1;
    printf("The value of a and b is :%d\n",a&&b);
    printf("The value of a or b is :%d\n",a||b);
    printf("The value of not(a) is :%d\n\n",!a);
    
    int c=1,d=0;
    printf("The value of c and d is :%d\n",c&&d);
    printf("The value of c or d is :%d\n",c||d);
    printf("The value of not(c) is :%d\n\n",!c);
    
    int e=0,f=0;
    printf("The value of e and f is :%d\n",e&&f);
    printf("The value of e or f is :%d\n",e||f);
    printf("The value of not(a) is :%d\n\n",!e);

    return 0;
}