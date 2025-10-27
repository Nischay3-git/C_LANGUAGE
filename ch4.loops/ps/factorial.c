#include <stdio.h>
int main(){
    int n,fact=1;
    scanf("%d",&n);
    //USING FOR LOOP
    // for(int i=n;i>=1;i--)
    // {
    //     fact*=i;    
    // }

    //USING WHILE LOOP
    int i=n;
    while(i>=1)
    {
        fact*=i;  
        i--;  
    }
    printf("The factorial is %d",fact);
    return 0;
}