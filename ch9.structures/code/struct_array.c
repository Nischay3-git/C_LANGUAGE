#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    int salary;
    char name[20];
};
int main(){
    char n[]="Nischay";
    struct employee facebook[100]; // array of structures
    facebook[0].code = 100;
    facebook[1].salary = 4588451;
    strcpy(facebook[2].name , n);

    printf("%s",facebook[2].name);
  return 0;
}