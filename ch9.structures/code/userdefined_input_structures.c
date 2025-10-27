/*store details of three employees from user defined input using structures*/
#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    int salary;
    char name[20];
};
int main()
{
    struct employee e1,e2,e3;
    printf("Enter the value of code: ");
    scanf("%d",&e1.code);
    printf("Enter the salary: ");
    scanf("%lld",&e1.salary);
    printf("Enter the employee name: ");
    fflush(stdin);
    fgets(e1.name,sizeof(e1.name),stdin);
    printf("Name: %sCode: %d\nSalary: %d\n\n",e1.name,e1.code,e1.salary);
    // fgets() reads the entire line including the newline character ('\n') that the user enters when they press Enter
    //so we don't use \n right below printing between name and code 
    printf("Enter the value of code: ");
    scanf("%d",&e2.code);
    printf("Enter the salary: ");
    scanf("%lld",&e2.salary);
    printf("Enter the employee name: ");
    fflush(stdin);
    fgets(e2.name,sizeof(e2.name),stdin);
    printf("Name: %sCode: %d\nSalary: %d\n\n",e2.name,e2.code,e2.salary);

    printf("Enter the value of code: ");
    scanf("%d",&e3.code);
    printf("Enter the salary: ");
    scanf("%lld",&e3.salary);
    printf("Enter the employee name: ");
    fflush(stdin);
    fgets(e3.name,sizeof(e3.name),stdin);
    printf("Name: %sCode: %d\nSalary: %d\n\n",e3.name,e3.code,e3.salary);
  return 0;
}