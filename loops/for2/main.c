#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n;
    double x=0,y=0;
    printf("Hello world!\n");

    printf("enter n number\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        x=x+(1/pow(i,2));
        y=y+(1/pow(i,3));

    }
    printf("value of x=%4lf\n",x);
    printf("value of y=%4lf",y);
    return 0;
}
