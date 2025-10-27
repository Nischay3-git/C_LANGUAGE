//make your own version of strcpy()
#include <stdio.h>
// int mystrlen(char str[]){
//   int i=0; // index number
//   char c=str[i]; // character at index i
//     while(c!='\0')
//     {
//         c = str[i];
//         i++;
//     }
//   return (i-1);
// }
void mystrcpy(char target[30],char arr[30]){
    int i=0;
    for( ;arr[i]!='\0';i++){
        target[i] = arr[i];
    }
    target[i]='\0';//adds null character to the last index i 
}
int main(){
    char arr[]="Harry";
    char target[30];
    mystrcpy(target,arr); 

    printf("%s %s",arr,target);
  return 0;
}
