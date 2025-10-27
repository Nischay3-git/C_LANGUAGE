#include <stdio.h>
void address(int* ptr)
{
    printf("The value of a is %d\n", ptr);
    printf("The value at a is %d\n", *ptr);
}
int main()
{
    int a=2;
    printf("The address of a is %d\n", &a);
    int* ptr=&a;
    address(ptr);
}

