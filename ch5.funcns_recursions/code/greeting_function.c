/*write a program with three functions that print :
1. "good morning",
2. "good afternoon",
3. "good evening",    in the given sequence
*/
#include <stdio.h>
void good_morning();
void good_afternoon();
void good_evening();

void good_morning()
{
    printf("good morning\n");
}
void good_afternoon()
{
    printf("good afternoon\n");
}
void good_evening()
{
    printf("good evening\n");
}

int main(){
    good_morning();
    good_afternoon();
    good_evening();
    return 0;
}
