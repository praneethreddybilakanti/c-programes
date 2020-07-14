#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,r,l;
int a[10][10],b[10][10],c[10][10];
printf("enter the row and column size:\n");
scanf("%d%d",&r,&l);
printf("enter the values for matrix a:\n");
for(i=0;i<r;i++)
{
    for(j=0;j<l;j++)
    {

        scanf("%d",&a[i][j]);
    }
    printf("\n");
}
printf("enter the values for matrix b:\n");
for(i=0;i<r;i++)
{
    for(j=0;j<l;j++)
    {

        scanf("%d",&b[i][j]);
    }
    printf("\n");
}
printf("\n additons:\n");

for(i=0;i<r;i++)
{

    for(j=0;j<l;j++)
    {

        c[i][j]=a[i][j]+b[i][j];
        printf("%d\t ",c[i][j]);
    }
    printf("\n");

}

printf("\n subtraction:\n");

for(i=0;i<r;i++)
{

    for(j=0;j<l;j++)
    {

        c[i][j]=a[i][j]-b[i][j];
        printf("%d\t ",c[i][j]);
    }
    printf("\n");

}

printf("\n multpiction:\n");

for(i=0;i<r;i++)
{

    for(j=0;j<l;j++)
    {

        c[i][j]=a[i][j]*b[i][j];
        printf("%d\t ",c[i][j]);
    }
    printf("\n");

}
    return 0;
}
