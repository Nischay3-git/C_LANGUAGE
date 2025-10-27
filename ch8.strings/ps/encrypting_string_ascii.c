/*Write a program to encrypt a string by adding n to the 
ascii of each character*/
#include <stdio.h>
int main(){
    char arr[]="Hey my name is Nischay";

    int n;
    printf("Enter the number to shift/add for encryption: ");
    scanf("%d",&n);
    for(int i=0;arr[i]!='\0';i++){
        arr[i] += n; // use - operator for decryption 
    }
    printf("%s",arr);
  return 0;
}