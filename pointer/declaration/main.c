#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
int i=10,*ptr;
ptr=&i;

printf("\n value of i:%d",i);
printf("\n addrrss of i:%u",ptr);
printf("\n value of *ptr:%d",*ptr);
printf("\n address of ptr:%u",&ptr);

    return 0;
}
