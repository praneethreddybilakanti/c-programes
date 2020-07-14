#include <stdio.h>
#include <stdlib.h>

int main()
{
int intial,final,consumed;
float total;
printf("enter intial and final values\n");
scanf("%d%d",&intial,&final);
consumed=final-intial;
if(consumed>=200 && consumed<=500)
{


total=consumed*3.5;
}
else if(consumed>=100 && consumed<200)
{


total=consumed*2.5;
}
else if(consumed<=100)
{


total=consumed*1.5;
}
printf("bill  units %d is %f\t",consumed,total);

    return 0;
}
