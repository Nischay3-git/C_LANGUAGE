//print the address and use it to print it value
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("The address of a is %u\n",&a);//use %p for hexadecimal address

    printf("The value of a is %d\n", *(&a));
}