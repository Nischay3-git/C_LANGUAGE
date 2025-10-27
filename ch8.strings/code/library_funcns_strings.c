#include <stdio.h>
#include <string.h>
int main(){
    char a[100]= "Nischay";
//to get length of a string excluding the \0 character
    printf("The string has %d characters\n",strlen(a));

//to copy the contents of second string to the first
    char b[100]="Harry";
    strcpy(b,a); //copies value of a in b 
    printf("%s\n%s",a,b);
    //buffer overflow can occur if b is small,b should be large enough to hold elements of a

//to concatenate two strings 
    char c[100]=" is a good boy";
    printf("\n%s",strcat(a, c)); 

//to compare two strings and return 0 if same,-ve if first string's mismatching
//character's ASCII is less than that of second and +ve accordingly 
char m[]="apple", n[]="ball"; 
    int x = strcmp(m,n);
    printf("\n%d",x);
}    