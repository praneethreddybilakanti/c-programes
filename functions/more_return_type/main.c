#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,add,sub;
printf("\n enter 2 numbers\n");
scanf("%d%d",&a,&b);
change(&a,&b,&add,&sub);
printf("\n addition is:%d",add);
printf("\n subition is:%d",sub);


    printf("Hello world!\n");
    return 0;
}
change(int *a,int *b,int *add,int *sub)
{
    *add=*a+*b;
    *sub=*a-*b;


}
