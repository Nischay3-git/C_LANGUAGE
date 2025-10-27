//calculate sum and avg of two numbers using pointers and functions and
//also print their addresses
#include <stdio.h>
int* sum(int* a, int* b){
    static int s;
    s = *a + *b;
    printf("Sum = %d", s);
    return &s;
}
float* avg(int* a, int* b){
    static float avg;
    avg = ((float)(*a) + (float)(*b)) / 2.0;
    printf("\nAverage = %.2f", avg);
    return &avg;
}

int main(){
    int c =5;
    int d=6;
    int* ptr1;
    float* ptr2;

    ptr1=sum(&c,&d);
    ptr2=avg(&c,&d);

    printf("\nThe address of sum is = %u\nThe address of average is = %u",ptr1,ptr2);

    return 0;
}