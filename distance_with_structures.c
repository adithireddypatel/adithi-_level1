//WAP to find the distance between two points using structures and 4 functions#include<stdio.h>
#include<math.h> 
struct points {
    int x1,x2,y1,y2;
};

 void main() {
   float dist, s1,s2;
   struct points p;
   printf("enter value of x1 and y1:");
   scanf("%d %d",&p.x1, &p.y1);
   printf(" enter value of x2,&p.y2:");
   scanf("%d %d",&p.x2,&p.y2);
   s1 = p.x1 - p.x2;
   s2 = p.y1 - p.y2;
   dist = sqrt(s1 *s1 + s2*s2);
  
 printf("Total Distance between the two points=%f\n",dist);
 }


