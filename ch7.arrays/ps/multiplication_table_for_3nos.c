//take three numbers and print their multiplication tables in a 3x10 array
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers whose table is required")
    scanf("%d %d %d",&a,&b,&c);
    int arr[3][10];
    int mul[]={a,b,c};
    for (int i = 0; i < 3; i++) //index of element in mul array
    {
        for (int j = 0; j < 10; j++) 
        {
            arr[i][j] = mul[i]*(j+1);
        }  
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++) 
        {
            printf("%d\n",arr[i][j]);
        }  
        printf("\n");
    }
    return 0;
}
