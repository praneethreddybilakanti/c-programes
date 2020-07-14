#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,d,*ap,*bp;
printf("\n enter 2 numbers:\n");
scanf("%d%d",&a,&b);
ap=&a;bp=&b;
printf("\n addition a+*bp:%d\n",a+*bp);
printf("\n addition b+*ap:%d\n",b+*ap);
printf("\n addition *bp+*ap:%d\n",*bp+*ap);

    return 0;
}
