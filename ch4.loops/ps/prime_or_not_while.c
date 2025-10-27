#include <stdio.h>
int main()
{
    int n,not_prime=0;
    scanf("%d",&n);
    if(n==1||n==0)
    printf("%d is not prime",n);
    else
    {  int i=2;
    //    while(i<n)
    //    {
    //        if(n%i==0 && i!=2)
    //         {   not_prime=1;  
    //             break;
    //         }
    //     i++;
    //     }
        //DO WHILE
        do{
           if(n%i==0 && i!=2)
            {   not_prime=1;  
                break;
            }
        i++;
        }while(i<n);

    if(not_prime)//true=1
        printf("%d is not prime",n);
    else
        printf("%d is prime",n);
    return 0;
    }
}  