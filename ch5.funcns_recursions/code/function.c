//sum of two numbers
#include <stdio.h>
//function prototype
int sum(int,int);

//function definition
int sum(int x,int y){
    // printf("The sum is %d",x+y);
    return x+y;//the return datatype should match with the type mentione in the definition
}
int main(){
    int a=12,b=13;
    int c1=sum(a,b);
    printf("%d\n",c1);

    printf("\nThe program is halfway there\n");
    
    int c=6,d=84;
    int c2=sum(c,d);
    printf("%d\n",c2);

    printf("\nThe program is complete \n");
    return 0;
}
