

#include<stdio.h>
int main()
{
int n;
int f1=0,f2=1,f3;
printf("enter the nth term");
scanf("%d",&n);
if(n%2==0)
{
for(int i=0;i<=n;i++)
{
 f3=f1+f2;
printf("\n%d",f3);
f1=f2;
f2=f3;
}}
else
{
        f1=1;

for(int i=0;i<=n;i++)
{
 f3=f1+f2;
printf("\n %d",f3);
  f1=f2;f2=f3;
}}return 0;
}
