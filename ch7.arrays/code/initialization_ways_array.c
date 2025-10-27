#include <stdio.h>
int main(){
    //if we have a small array, then we can manually type it
    int cgpa[3]={7,8,7};
    for (int i = 0; i < 3; i++)
    {
        printf("The CGPA at index %d is %d\n",i,cgpa[i]);   
    }
    //we can also neglect the limit
    float x[]={64,335,5463.5};
    for (int i = 0; i < 3; i++)
    {
        printf("The number at index %d is %.1f\n",i,x[i]);   
    }
    return 0;
}