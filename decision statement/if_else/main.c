#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
printf(" enter any number :\n");
scanf("%d",&num);
if(num<10)
{

    printf("the given number is :%d less than 10.\n",num);
}
else
    printf("the number is :%d is greater than 10.\n",num);
    return 0;
}
