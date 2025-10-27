#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    int salary;
    char name[20];
};
void display(struct employee abc){
    printf("%s\n%d\n%d",abc.name,abc.code,abc.salary);
}
int main(){
    struct employee e1;
    e1.code = 4364;
    e1.salary = 3456566;
    strcpy(e1.name,"Nischay");
    
    display(e1);
  return 0;
}