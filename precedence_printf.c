#include <stdio.h>
int main(){
    int a=4;
    printf("%d %d %d \n", a,++a,a++);
    return 0;
}
//this gives 6 6 4 as output because when same variable is printed in printf()
//then the precedence i from right to left