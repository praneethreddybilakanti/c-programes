#include <stdio.h>
#include <stdlib.h>
void change(int*,int*);
int main()
{
    int a,b;
printf("\n enter 2 numbers\n");

scanf("%d%d",&a,&b);
printf("\n before swapping values:a: %d b=%d\n",a,b);
change(&a,&b);
    return 0;
}
 void change(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n after swapping a=%d b%d",*a,*b);
}
