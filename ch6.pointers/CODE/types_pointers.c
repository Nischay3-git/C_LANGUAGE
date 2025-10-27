#include <stdio.h>
int main(){
    char i='a';
    char* j=&i;//j is a character pointer

    float k=34.5;
    float* l= &k;

    printf("The address of i is %p\n",*(&i));
    printf("The address of J is %p\n",*j);  
    printf("The address of K is %p\n",*(&k));
    
    return 0;
}