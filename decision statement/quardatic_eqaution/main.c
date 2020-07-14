#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2;
printf("enter a values for a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
int root;
root=b*b-4*a*c;
if(b*b>4*a*c)
{

    x1=-b+sqrt(root)/2*a;
    x2=-b-sqrt(root)/2*a;
    printf("roots are x1=%f x2=%f",x1,x2);
}

else
    printf("imaginary roots");

    return 0;
}
