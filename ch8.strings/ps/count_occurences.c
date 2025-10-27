//wap to count the occurences of a given character in a string
#include <stdio.h>
int main(){
    int count = 0;
    char str[]= "uidhvbioewafuashnshcjxhfinvhfsabhjkscznhfisfsssfcfc";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='c')
          count++;
    }
    printf("%d",count);
  return 0;
}