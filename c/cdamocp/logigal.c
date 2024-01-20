#include<stdio.h>
int logigal()
{
    int a;
    a=102;
    if(a<100 && 50>a)
    {
     printf("The Logical AND Value\n");

    }

    else if((a==101) || (a==102))
    {
    printf("The Logical OR Value\n");
    }
    else if(!(a<100 && 50>a))
    {
    printf("The Logical NOT Value\n");
    }
    else
    {
    printf("No This Value\n");
    }

    return 0;
}

