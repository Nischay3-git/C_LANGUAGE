//change the value of a variable to ten times 
#include <stdio.h>

int change(int *); //function prototype
int change(int *a){ // function definition
    *a = *a * 10 ; 
    return *a;
}
int main(){
    int b=45;
    printf("The initial value is %d\n",b);
    printf("%d is the new value ", change(&b));
    
    return 0;
}

//without pointers
// #include <stdio.h>

// int change(int ); //function prototype
// int change(int a){ // function definition
//     a = a * 10 ; 
//     return a;
// }
// int main(){
//     int b=45;
//     printf("The initial value is %d\n",b);
//     printf("%d is the new value ", change(b));
    
//     return 0;
// }