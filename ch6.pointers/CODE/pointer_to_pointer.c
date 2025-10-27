#include <stdio.h>
int main(){
    int i=6;
    int* j=&i;

    //to point towards j,
    int** k= &j;

    printf("The value of i = %u\n", i);
    printf("The value of i = %u\n", *j);
    printf("The value of i = %u\n", *(&i));
    printf("The value of i = %u\n", **(&j));
    


    return 0;
}