#include <stdio.h>
int main(){
//POINTER ARITHMETIC USING INTEGER POINTER
    int a=5;
    int *ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("The address of a now is %u\n\n",ptr);
    //the increment operator increases the value of ptr by 
    //the number of bytes that the integer type takes in your architecture

//NOW USING CHARACTER POINTER
    char b='h';
    char* pntr=&b;
    printf("The address of a is %u\n",&b);
    printf("The address of a is %u\n",pntr);
    pntr++;
    printf("The address of a now is %u",pntr);
}