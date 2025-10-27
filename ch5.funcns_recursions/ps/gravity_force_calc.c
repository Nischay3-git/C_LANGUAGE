//calculate attractive force oon an object by the earth (f=m x g)
 #include <stdio.h>
int force(int x){

    return x*(9.8);// g=9.8 m/s^2
}

 int main(){
    int mass;
    printf("Enter the mass of the object: ");
    scanf("%d",&mass);
    printf("The force of attraction is %d N\n",force(mass));
    return 0;
 }