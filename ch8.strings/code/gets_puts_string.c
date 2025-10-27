//gets() function can take multi-word keywords
//puts() function prints string and ends with a newline charater
#include <stdio.h>
int main(){
    char st[30];
    gets(st);
    printf("You entered : %s\n",st);
    
    puts(st);
    printf("Hey");
  return 0;
}
/*
fgets() is preferred over gets() because there are risks of
buffer overflow in gets()
*/