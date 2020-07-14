#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=10,b=30;
printf("\n before swapping:a=%d b=%d",a,b);
swap(a,b);
printf("\n after swapping:a=%d b=%d",a,b);

    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n swap %d %d",a,b);


}
