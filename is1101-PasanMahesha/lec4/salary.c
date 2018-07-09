#include <stdio.h>
float takehome(int x, int y);
float income(int x, int y);
float normal(int x);
float ot(int y);
float tax(float i);

int main(){
	int w=40, o=20;
	float t=0;
	t=takehome(40,20);
	printf("Takehome %f\n",t);

	return 0;
}

float takehome(int x, int y)
{
	float i,t;
	i=income(x,y);
	t=tax(i);
	return i-t;
}

float income(int x, int y)
{
	return normal(x)+ot(y);
}

float normal(int x)
{
	return x*150;
}

float ot(int y)
{
	return y*75;
}

float tax(float i)
{
	return i*0.1;
}

