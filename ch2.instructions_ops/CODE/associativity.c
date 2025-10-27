#include <stdio.h>
int main(){
    int a=10, b=7,c=14;
    printf("The value is %d\n",a/b*c%a +7);//left to right associativity

    return 0;
}