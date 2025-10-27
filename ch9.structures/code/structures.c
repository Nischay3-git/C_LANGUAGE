/*Structures are a collection of variables of different datatypes
They can hold dissimilar datatypes.
they keep things organised, make data management easy*/
#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    int salary;
    char name[20];
};//semicolon is important
int main()
{
    struct employee e1,e2;
    e1.code = 4511;
    e1.salary = 567890;
    strcpy(e1.name,"Nischay");//we can assign directly only during declaration

    printf("%s\n%d\n%d",e1.name,e1.code,e1.salary);
  return 0;
}