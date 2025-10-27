/*write a function slice() to slice a string such that the
original string should now bw the sliced string.Take m and n 
as the starting and ending position for slicing*/
#include <stdio.h>

char* slice(char strnew[],int m,int n)
{
    int i=0; // index number
    char *ptr1= &strnew[m];
    char *ptr2= &strnew[n];

    strnew = ptr1;
    strnew[n]= '\0';
    return strnew;
}
int main()
{
    int m,n;
    char str[101];
    printf("Enter the string : ");
    // fflush(stdin);
    fgets(str,sizeof(str),stdin);
    printf("Enter the starting and ending position for slicing: ");
    scanf("%d %d",&m,&n);

    printf("%s",slice(str,m,n));
  return 0;
}