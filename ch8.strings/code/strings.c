//strings are 1D character arrays terminated by a null character \0
//the null character represents teh termination of a string
#include <stdio.h>
int main(){
    char s[]= {'a','e','i','o','u','\0'};
    char st[]="aeiou";

    for(int i=0;i<=5;i++){
        printf("%c\n",s[i]);
        
    }
    for(int i=0;i<=5;i++){
        printf("%c\n",st[i]);
        
    }
    char str[]="Nischay";
    printf("%s",str);

  return 0;
}