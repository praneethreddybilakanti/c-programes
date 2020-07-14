#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch; int x;
    printf("enter a character\n");
    scanf("%c",&ch);
    x=(ch>=65&&ch<=90)?1:0;
    printf("value is:%d\n",x);
    printf("Hello world!\n");
    return 0;
}
