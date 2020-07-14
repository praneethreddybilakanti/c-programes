#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
int even[5],odd[5],a=0,b=0,sume=0,sumo=0;
for(i=0;i<=10;i++)
{
    if(i%2==0)
    {

   //     printf("\n even number:%d",i);
    even[a++]=i;
    }
    else
    {
     //   printf("\n odd numbers are: ");
        odd[b++]=i;
 //printf("odd:%d",odd[b]);
    }
    }
printf("\n \t even \t\t   odd");
for(i=0;i<5;i++)
{

    printf("\n \t even: %d \t odd: %d ",even[i],odd[i]);

sumo=sumo+odd[i];
sume=sume+even[i];
}
printf("\n =======================================================");
printf("\n addition:%7d \t %4d",sumo,sume);

    return 0;
}
