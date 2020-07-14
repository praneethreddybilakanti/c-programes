#include <stdio.h>
#include <stdlib.h>

int main()
{static char s[10];
    printf("enter a string:!\n");
scanf("%s",s);
  printf("reverse string \n");

    for(int i=10;i>=0;i--)
    {

        printf("%c ",s[i]);

    }return 0;
}
