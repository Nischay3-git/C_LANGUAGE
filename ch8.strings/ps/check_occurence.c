//wap to check if a given character is present in the program or not
#include <stdio.h>
int main(){
    int count = 0;
    char str[]= "Nischay";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='x')
        {
          count++;
          break;
        }
    }
    if(count==0){
        printf("Not present");
    }
    else
        printf("Present");

  return 0;
}