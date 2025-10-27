#include <stdio.h>
int main(){
    int a=5;
    printf("a here is %d\n",a);
    a=a+5;
    printf("a here is %d\n",a++);//post increment operator , here gives 10 and increments
    printf("a here is %d\n",++a);//pre increment opereator , here gives 12 after increment
    printf("a here is %d\n",a--);//post decrement operator , here gives 10 and decrements
    printf("a here is %d\n",--a);//pre decrement opereator , here gives 12 after decrementing
    return 0;
}