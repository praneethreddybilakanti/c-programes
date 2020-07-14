#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("col1   \t\t col2   \t \t col3\n ");
    printf("==     \t  ===   \t  ====\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
        printf("%d [%5d]",arr[i][j],&arr[i][j]);//
                printf("\t");

    }
printf("\n");
    }
        printf("\r");


    return 0;
}
