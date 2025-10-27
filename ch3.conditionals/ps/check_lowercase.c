// For all 128 ascii values
// https://en.cppreference.com/w/c/language/ascii.html
#include <stdio.h>
int main()
{   char ch;  
    printf("Enter a character: ");
    scanf("%c", &ch);

    // printf("The character is : %c",c); ^-^this gives character
    // printf("The value of character is :%d\n",ch);  ^-^this gives ASCII value

    // lowercase=> 97-122
    if (ch >= 97 && ch <= 122)
        printf("Yes, the character is in lowercase");
    else
        printf("No, the character is not in lowercase");
    return 0;
}