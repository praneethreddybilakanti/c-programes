#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int x[]={2,4,6,8},k=1;
    printf("\n k value:%d",k);
    printf("\n k address:%d",&k);
    while(k<=4)
    {
        printf("\n%d",k[x-1]);
        printf("\n%d",x);
        k++;
    }


    return 0;
}
