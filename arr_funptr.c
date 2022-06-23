#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int main()
{
int a,b;
printf("enter a,b values\n");
scanf("%d %d",&a,&b);
int (*fun[3])(int,int);
fun[0]=add;
fun[1]=sub;
fun[2]=mul;
for(int i=0;i<3;i++)
{
printf("%d\n",fun[i](a,b));
}
}
int add(int a,int b)
{
int c;
 c=a+b;
return c;

}

int sub(int a,int b)
{
int c;
 c=a-b;
return c;
}

int mul(int a,int b)
{
int c;
 c=a*b;
return c;
}

