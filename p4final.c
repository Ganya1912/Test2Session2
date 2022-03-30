#include<stdio.h>
int input()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int a=0,b=1,sum=0;
if(n==0||n==1)
{
  printf("%d",n);
  return n;
}
  else
{
  sum=a+b;
  for(int i=2;i<n+1;i++)
  {
    a=b;
    b=sum;
    sum=a+b;
  }
  return a;
}
}
  
 void out_put(int n,int fibo)
{
  printf("the %dth number of fibonacci sequence is %d\n",n,fibo);
}
int main()
{ 
   int x,y;
  x=input();
  y=find_fibo(x);
  out_put(x,y);
  return 0;
}
  