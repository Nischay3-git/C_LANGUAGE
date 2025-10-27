#include <stdio.h>
int main(){
    
    for(int i=0;i<15;i++)
    {
        printf("i is %d\n",i);
        if(i==6)
        {
            break;//terminates the for block
            // continue; //doesn't execute this specified iteration 
        }
        
    }
    return 0;
}