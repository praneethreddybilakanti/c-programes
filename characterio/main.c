#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{

    char ch[20];
    int x=0;
    printf("\n enter a string");
    while((ch[x]=getchar())!='\n')
        x++;
    ch[x]='\0';
    printf("enterd string");
    printf("\n%s",ch);
    return 0;
}
