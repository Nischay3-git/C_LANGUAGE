//the do-while loop is a while loop that executes atleast once 
//it executes the code and checks the condition (vice versa of while loop)
#include <stdio.h>
int main()
{ int i = 0;
    do{
        printf("the value of i is %d\n",i);
        i++;
    }while(i<5);
//but
    int a=5;
    do
    {
    
        printf("\n\nThe value of a is %d\n",a);
        i++;
    } while (a<4);
    
    return 0;
}