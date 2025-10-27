#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a; //temp = 3
    *a=*b;   // *a = 5
    *b=temp; // *b = 3
    
}
int main(){
    int a=3,b=5;
    swap(&a,&b);
    printf("The value of a is %d and the value of b is %d",a,b);
}
