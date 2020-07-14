#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x[]={2,4,6,8},k=0;
    printf("\n ementes no   element  \t \t address");

    while(k<4)
    {
       printf("\n x[%d]\t\t %d \t\t %u",k,*(x+k),(x+k));

        k++;
    }
    return 0;
}
