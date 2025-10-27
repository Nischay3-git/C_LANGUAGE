#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};//semicolon is important
int main()
{
    struct employee e1 = {56,346.56,"Harry"};
    printf("%s\n%d\n%f",e1.name,e1.code,e1.salary);
  return 0;
}//structures,too, are stored in contiguous memory location