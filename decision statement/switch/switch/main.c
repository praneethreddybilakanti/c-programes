#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {


    int a,b,c,ch;
    printf("============================\n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("0.exit\n");
    printf("chose an option a number\n");
    scanf("%d",&ch);


if(ch<=4 && ch>=0)
{
    printf("enter a 2 numbers\n");
scanf("%d%d",&a,&b);
}
    switch(ch)
    {
    case 1:
        c=a+b;
        printf("addition : %d\n",c);
        break;

    case 2:
        c=a-b;
        printf("subtraction :%d\n",c);
        break;
    case 3:
        c=a*b;
        printf("multiplication :%d\n",c);
        break;
    case 0:
        printf("\n terminated by your choice");
        exit(0);
        break;

    default:
        printf("invalid choice");
        }

    }
    return 0;
}

