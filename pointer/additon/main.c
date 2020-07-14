#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,d,*ap,*bp;
printf("\n enter 2 numbers:\n");
scanf("%d%d",&a,&b);
ap=&a;bp=&b;
c=a+b;
d=*ap+*bp;
printf("\n addition variables:%d\n",c);
printf("\n addition pointers:%d\n",d);

    return 0;
}
