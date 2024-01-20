#include<stdio.h>
#include<stdlib.h>
int modulus1()
{
    int a;
    int b=2;
    int c;
    printf("enter the value of A:");
    scanf("%d",&a);
    c=a%b;
    if (c==0)
    
    {
        printf("given valus is even");
    }
    else
    {
        printf("given value is odd");
    }
    return 0;
}
