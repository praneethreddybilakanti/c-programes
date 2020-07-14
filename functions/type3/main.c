#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a=10,b=13,z;
    z=sum(a,b);
printf("\n sum is:%d",z);
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}
