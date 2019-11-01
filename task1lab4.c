#include <stdio.h>

int main(){
    int a[5];
    int i, min, max,imin, imax, imaxRev, iminRev;

    for (i = 0; i < 10; ++i)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("a[%d] = {%d, %d, %d, %d, %d, %d, %d, %d, %d ,%d}\n", i, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);

    max=a[0];
    min=a[0];

    for (i = 0; i < 10; ++i)
    {
        if (a[i] > max)
        {
            max=a[i];
            imax=i;
        }
    }

    for ( i = 0; i < 10; ++i)
    {
        if (a[i] < min)
        {
            min=a[i];
            imin=i;
        }
    }

    imaxRev=imin;
    iminRev=imax;
    a[imaxRev]=max;
    a[iminRev]=min;
    printf("Reversed max & min, a[%d] = {%d, %d, %d, %d, %d, %d, %d, %d, %d ,%d}\n", i, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);

}