#include <stdio.h>
#include <stdlib.h>

int main()
{
char ch[20];
int c=0;
printf("enter a name");
scanf("%s",ch);
printf("enterd values");
while(ch[c]!='\0')
{

    putchar(ch[c]);
c++;
}

    return 0;
}
