//WAP to find the distance between two point using 4 functions.#include<stdio.h>
#include<math.h>
void distance(float x1,float y1,float x2,float y2)
{
  float dist;
  dist=(sqrt((pow((x2-x1),2)+pow((y2-y1),2))));
  printf(" distance between (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,dist);
}

int input x()
{
  float x;
  print(" Enter x value:");
  scanf("%f",&x);
  return x;
}
int input Y()
{
  float y;
  printf(" Enter  y value:");
  scanf("%f",&y);
  return y;
}
int main()
{
  float x1,y1,x2.y2;
  x1=inputX();
  y1=inoutY();
  x2=inputX();
  y2=inputY();
  distance(x1,y1,x2,y2);
  return 0;
}

