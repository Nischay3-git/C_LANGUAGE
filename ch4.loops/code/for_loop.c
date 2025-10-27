#include <stdio.h>
int main(){
    int i;
    for(i=5;i;i--)//keeps running until it encounters  0(false)
    {             //so it means that it doesnot give negative or zero output HERE
        printf("%d\n",i);
    }
    return 0;
}