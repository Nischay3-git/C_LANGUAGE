#include <stdio.h>
struct employee{
    int code;
    int salary;
    char name[20];
};
int main(){
    struct employee e1;
    struct employee *ptr;//type pointer to structure
    e1.code=99;
    ptr = &e1;
    // printf("%d", (*ptr).code);// we could use arrow -> operator 
    printf("%d", ptr->code);


  return 0;
}