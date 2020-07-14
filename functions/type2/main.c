#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a=10,b=13;
    sum(a,b);

    return 0;
}
void sum(int a,int b)
{
    int sum=a+b;
    printf("sum is%d",sum);
}
