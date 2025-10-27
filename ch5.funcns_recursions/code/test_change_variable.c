//we'll check if the function works even after we change the passed variable or not
#include <stdio.h>
int change(int a);

int change(int a){
    a=85;                      //this function is a misnomer ->Misnaming
    printf("a is %d\n",a);
    return 0;
}
int main(){
    int b= 25;
    printf("b is %d\n",b);// value of b remains 22

    change(b);  // change(b) directs the control to the function definition
    
    int c=7;
    printf("c = %d\n",c);
}