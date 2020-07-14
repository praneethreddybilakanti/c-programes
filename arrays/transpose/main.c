#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,col1,row1,col2,row2,a[10][10],b[10][10];
    printf("enter rows and columns for matrix:\t ");
    scanf("%d%d",&row1,&col1);
printf("enter an elements to an array:\n");
for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
    {
        scanf("%d",&a[i][j]);

    }
    printf("\n");

}
 row2=col1;
 col2=row1;

for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
    {
b[j][i]=a[i][j];

       // scanf("%d",b[j][i]);


    }

}
printf("transpose matrix is:\n");
for(i=0;i<row2;i++)
{

    for(j=0;j<col2;j++)
    {
        printf("%d",b[i][j]);



    }
    printf("\n");

}


    return 0;
}
