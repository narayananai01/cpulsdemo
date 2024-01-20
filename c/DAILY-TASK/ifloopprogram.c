#include<stdio.h>
int ifloopprogram1()
{
    int a;
    printf("select number 2 or 3\t");
    scanf("%d",&a);
    if (a==2)
    {
        int a1,b1,op;
        printf("\n enter valus a1\t");
        scanf("%d",&a1);
        printf("\n enter valus b1\t");
        scanf("%d",&b1);
        printf("\n select operator ");
        scanf("%d",&op);
        switch(op){
            case 1:
            printf("\n added valus of a1 and b1 is %d\n",a1+b1);
            break;
            case 2:
            printf("\n subtract valus of a1 and b1 is %d\n",a1-b1);
            break;
            case 3:
            printf("\n multiply valus of al and b1 is %d\n",a1*b1);
            break;
            case 4:
            printf("\n increment  of a1 is %d\n",a1++);
             printf("\n increment  of b1 is %d\n",b1++);
            break;
            case 5:
            printf("\n dicrement of a1 is %d\n",a1--);
            printf("\n dicrement of b1 is %d\n",b1--);
            break;
        }

    }
    else{
                int a1,b1,op,c1,d1,f1;
        printf("\n enter valus a1\t");
        scanf("%d",&a1);
        printf("\n enter valus b1\t");
        scanf("%d",&b1);
        printf("\n enter valus c1\t");
        scanf("%d",&c1);
        printf("\n select operator\t");
        scanf("%d",&op);
        switch(op){
            case 1:
            printf("\n added valus of a1 and b1 and c1 is  %d",a1+b1+c1);
            break;
            case 2:
            printf("\n subtract valus of a1 and b1 and c1 is %d",a1-b1-c1);
            break;
            case 3:
            printf("\n multiply valus of al and b1 and c1 is %d",a1*b1*c1);
            break;
            case 4:
            printf("\n increment  of a1 is %d\n",a1++);
             printf("\n increment  of b1 is %d\n",b1++);
             printf("\n increment  of c1 is %d\n",c1++);

            break;
            case 5:
            printf("\n dicrement of a1 is %d\n",a1--);
            printf("\n dicrement of b1 is %d\n",b1--);
            printf("\n dicrement of c1 is %d\n",c1--);
            break;
            case 6:
            printf("\n structure of a1,b1,c1,d1,f1 is %d\n",a1+b1*c1+d1-f1);
            break;
    }
    
    return 0;
}
