#include<stdio.h>

int leap(int year) {
  int true=1;

  if (year%4!=0) true=0;
  else if (year%100==0 && year%400!=0) true=0;
  else true=1;
  return true;
}

int main(){

	int x;
	printf("Enter year :");
	scanf("%d",&x);
	printf("%d\n",leap(x));

return 0;
}
