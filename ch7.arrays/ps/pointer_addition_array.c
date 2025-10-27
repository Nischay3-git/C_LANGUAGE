#include <stdio.h>
int main()
{
    int arr[] = {1, 4, 3, 5};
    int *ptr = &arr[0]; // ptr points at the address
    printf("The value at first address %u is %d", ptr, *ptr);
    printf("\nThe value at address %u is %d", ptr + 2, *ptr);
    return 0;
}