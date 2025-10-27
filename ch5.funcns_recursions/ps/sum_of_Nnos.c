#include <stdio.h>
int sum(int n){
    if(n==1)
    return 1;
    //sum(n) =1+2+3+...+(n-1)+n
    //sum(n) = sum(n-1)+n 
    return n+sum(n-1) ;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("The sum is %d",sum(x));
    return 0;
}