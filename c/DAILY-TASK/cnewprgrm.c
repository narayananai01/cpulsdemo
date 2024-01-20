#include<stdio.h>
#include<stdlib.h>

int cnewprgrm()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    if(a>=0)
   {
    printf("positive number");
   }
else
 {
    printf("negative number");
 }
    return 0;
}