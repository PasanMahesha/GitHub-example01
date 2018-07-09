#include<stdio.h>
int leap(int);
int daysInMonth(int,int);

int main(){
int year=0,month=0;
  //Need to continue it till someone enter negative value
  // for year or month
{
  printf("Enter Year and Month:");
  scanf("%d %d",&year,&month);
  if(leap(year)) printf("%d is leap year.\n",year);
  else printf("%d is not leap year. \n",year);

  printf("%d days in the year %d.\n",daysInMonth(year,month));
 }
return 0; 
}
