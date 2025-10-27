//we can use typedef keyword to create an alias name for datatypes in C
//more commonly used with structures

#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    int salary;
    char name[20];
}Emp;
int main()
{
    // typedef int nischay; // nischay is now a datatype;int will remain unaffected
    // nischay a = 7;
    // printf("The value of a is %d\n", a);

    //typedef struct employee Emp; ->> use if we dont name Emp and typedef in the funcn
    Emp e1;//struct employee e1;
    Emp *ptr = &e1;
    e1.code = 4364;
    e1.salary = 3456566;
    strcpy(e1.name,"Nischay");

    printf("%s\n%d\n%d\n",e1.name,e1.code,e1.salary);
    printf("%s\n%d\n%d",ptr->name,ptr->code,ptr->salary);
  return 0;
}