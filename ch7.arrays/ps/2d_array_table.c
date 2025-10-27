//make a 3x10 array of multiplication tables of 2,7,9
#include <stdio.h>
int main(){
    int a[3][10];
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int mul[]={x,y,z};
    for (int i = 0; i < 3; i++)//index in i
    {
        for (int j = 0; j < 10; j++)//index in j
        {
            a[i][j]= mul[i]* (j+1); //elements in the array
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of a[%d][%d] is %d\n",i,j,a[i][j]);
        }
        printf("\n");
    }
  return 0;
}