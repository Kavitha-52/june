#include<stdio.h>
int sum(int a,int b);
int main()
{
int a,b;
printf("enter a,b values\n");
scanf("%d %d",&a,&b);
int (*fun)(int,int)=sum;
//un=sum;
printf("%d\n",fun(a,b));
}
int sum(int a,int b)
{
int c=a+b;
return c;
}


