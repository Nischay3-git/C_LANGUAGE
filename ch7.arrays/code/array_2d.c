#include <stdio.h>
int main(){
    int a[2][3];
    for(int i =0; i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value of a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0; i<2;i++){
        for(int j=0;j<3;j++){
            printf("\nThe value of a[%d][%d] is %d",i,j, a[i][j]);
        }
    }
    return 0;
} 