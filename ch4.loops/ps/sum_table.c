//sum of the resultants of multiplication table
#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        sum+=(n*i);
    }
    printf("The sum is: %d",sum);
    return 0;
}