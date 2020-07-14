#include <stdio.h>
#include <stdlib.h>

int main()
{
char ch[20];
printf("enter a string:\n");
for(int i=0;i<=20;i++)
{


ch[i]=getc(stdin);

}
printf("printed:\n");
for(int i=0;i<=20;i++)
{


putc(ch[i],stdout);
}

    return 0;
}
