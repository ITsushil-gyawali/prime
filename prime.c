#include<stdio.h>
main(void)
{int num,i,count=0;
printf("enter a number to check: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==2)
{
printf("the given number %d is prime number\n",num);
}
else
{
printf("the given num %d is not prime no",num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
printf("%d\n",i);
}
}
}
}
