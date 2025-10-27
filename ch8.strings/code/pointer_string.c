#include <stdio.h>
int main(){
    char name[20] = "Nischay"; // fixed. can't be reinitialized
    char *ptr = "Nischay"; // can be reinitialized
    
    puts(name); // output = nischay
    puts(ptr);  // output = nischay

    //name = "abcde"; // <== this causes error
    ptr = "abcde";
    
    printf("\n%s", name); // output = nischay
    printf("\n%s", ptr);  // output = abcde
  return 0;
}