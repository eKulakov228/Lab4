#include <stdio.h>

int main(){
    int i, count, quantity=0;
    float a[i];
    float mid,sum=0;

    printf("Enter number of elements : ");
    scanf("%d", &count);

    for( i = 0; i < count; i++)
    {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }

    printf("a[%d] = { ", i);
    for( i = 0; i < count; i++)
    {
        printf("%.1f, ", a[i]);
    }

    printf("}\n");

    for( i = 0; i < count; i++)
    {
        sum=a[i]+sum;
    }

    mid=sum/i;
    printf("Middle value of massive a[%d] is %.1f \n", i, mid);

    for( i = 0; i < count; i++)
    {
        if(a[i] > mid)
        {
            quantity++;
        }
        
    }
    
    printf("Answer : %d \n", quantity);
    return 0;
    
}