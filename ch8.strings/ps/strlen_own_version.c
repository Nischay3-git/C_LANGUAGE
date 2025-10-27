//write your own version of strlen from <string.h>
#include <stdio.h>

int strlen(char str[]){
  int i=0; // index number
  char c=str[i]; // character at index i
    while(c!='\0')
    {
        c = str[i];
        i++;
    }
  return (i-1);
}

int main(){
    char str[]="Sareena Chhetri";
    
    printf("%d",strlen(str));
    return 0;
}