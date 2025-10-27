#include <stdio.h>

int sum(int *,int *);

int sum(int* a, int* b){
    *a=6; 
    return *a + *b;
}

int main(){
    int x=1,y=6;
    printf("The sum of 1 and 6 is = %d\n", sum(&x,&y));
    printf("The value of x is = %d\n",x);
    return 0;
}
/*the output shows that sum function has changed the value of x to 6*/
