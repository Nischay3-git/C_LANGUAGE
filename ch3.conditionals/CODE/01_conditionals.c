#include <stdio.h>
int main(){
    int a;
    printf("Enter your age: ");
    scanf("%d",&a);

    if(a>=15 && a<=70){
        printf("You are eligible to play GTA V");    
    }
    else if (a<15 && a>0){
        printf("You are not eligible to play GTA V");        
    }
    else // else block is optional, not necessary
    printf("Wrong input");

    return 0;
}