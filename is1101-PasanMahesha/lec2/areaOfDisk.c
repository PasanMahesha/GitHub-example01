#include <stdio.h>
//Define a constant

int main(){
 const float  pi=3.14;
 float r=0, area=0;
 printf("Enter radii : ");
//Read r
 scanf("%f",&r);
//Calculate the area
 area=pi*r*r;
//Print it
 printf("R= %f Area = %.2f \n",r,area);
 return 0;
}
