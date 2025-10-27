#include <stdio.h>
int counter(int arr[],int n){
   int count =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            count++;
        }
    }
    printf("%d elements are positive integters in the array ",count);
}

int main(){
    int arr[]={3,5,-2,76,-7,-98};
    counter(arr,6);
  return 0;
}