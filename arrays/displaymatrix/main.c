#include <stdio.h>
#include <stdlib.h>

int main()
{
int col,row,i,j,a[10][10];
printf("enter the column and rows to matrix:\n");
scanf("%d%d",&col,&row);
printf("\n enter the elements in  a matrix:\n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {

        scanf("%d",&a[i][j]);
    }
}
printf("\n entered the elements:\n");
for(i=0;i<row;i++)
{

    for(j=0;j<col;j++)
    {

        printf("%d\t",a[i][j]);

    }
    printf("\n");
}


    return 0;
}
