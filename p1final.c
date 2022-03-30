#include <stdio.h>
#include <math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the 4 values\n");
  scanf("%f %f %f %f",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *distance)
{
  *distance= sqrt(pow((x2-x1),2) +pow((y2-y1),2));
}
void output(float x1,float y1,float x2,float y2,float distance)
{
  printf("distance btw the points %f%f and %f%f is %f\n",x1,y1,x2,y2,distance);
}
int main()
{
  float a,b,c,d,distance;
  input(&a,&b,&c,&d);
 find_distance(a,b,c,d,&distance);
  output(a,b,c,d,distance);
  return 0;
}
