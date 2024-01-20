#include<stdio.h>
#include<stdlib.h>
int main()
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




#include<stdio.h>
#include<stdlib.h>

int main()
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