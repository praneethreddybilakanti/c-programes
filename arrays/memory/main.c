#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[5]={1,2,3,4,5};
printf("\n elements are");
for(int i=0;i<5;i++)
    printf("\n%d",arr[i]);
printf("\n addresses of the arrays are:\n");
for(int i=0; i<5;i++)
{

    printf("\n %d address are :%u",arr[i], &arr[i]);
}

    return 0;
}
