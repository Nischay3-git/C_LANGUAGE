// 
#include <stdio.h>

float avg(int,int,int);
float avg(int a,int b ,int c){
    
    return (a+b+c)/3.0;
}

int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    printf("The average is %.2f",avg(x,y,z));
    return 0;
}