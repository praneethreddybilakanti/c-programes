#include <stdio.h>
#include <stdlib.h>
int main()
{
int a=5;int b=2;int c=8;
printf("logical or:%d\n",a<b||c>a);
printf("logical and:%d\n",a>b&&b<c);
printf("logical equal:%d\n",a==b&&b==c);
    return 0;
}
