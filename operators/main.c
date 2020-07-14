#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    printf("%age",age);
    (age>18)? printf("eligible for voter id"): printf("not eligble");

    return 0;
}
