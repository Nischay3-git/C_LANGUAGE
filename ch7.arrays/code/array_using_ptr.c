#include <stdio.h>
int main(){
    int marks[]={12,234,45,645};
    int * ptr = &marks[0];//ptr points at the address of marks[0]
    //for the address of FIRST ELEMENT, int* ptr=marks; is also valid in C

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n",i,marks[i]);
        //OR
        printf("The marks at index %d is %d\n",i,*ptr); //value at ptr
        ptr++; // comment this line out and see the output
    }
    return 0;
}