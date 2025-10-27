/*write a program to take input using %c and %s and confirm that 
the strings are equal*/
#include <stdio.h>
int main(){
    char arr1[6];
    
    // scanf("%s",arr1);

    for(int i =0;i<5;i++){
        scanf("%c",&arr1[i]);
        fflush(stdin);//removes the newline after each ENTER keystroke or space before %c
    }
    arr1[5]='\0';
    
    printf("%s",arr1);
  return 0;
}