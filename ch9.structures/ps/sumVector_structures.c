/*write a function sumVecector which returns the sum of two Vecectors
passed to it. The Vecectors must be 2-D*/
#include <stdio.h>
typedef struct vector
{
    int i;
    int j;
}Vec;

Vec sumVector(Vec Vec1, Vec Vec2)
{
    Vec Vec3 = {(Vec1.i + Vec2.i), (Vec1.j + Vec2.j)};
    return Vec3;
}

int main()
{
    Vec Vec1 = {3, 4};
    Vec Vec2 = {9, 7};
    Vec Vec3 = sumVector(Vec1, Vec2);

    printf("The sum is %di + %dj", Vec3.i, Vec3.j);

    return 0;
}

