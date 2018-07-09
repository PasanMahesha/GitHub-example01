#include<stdio.h>
int leap(int);

int daysInMonth(int year,int n){
 int days=0;
 switch(n){
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
	days=31;
	break;
   case 2:
	if (leap(year))
		days=29;
	else
		days=28;
	break; 
   case 4:
   case 6:
   case 9:
   case 11:
	days=30;
	break;
    }
 return days;
}


int main(){
   int y,m;
   printf("Enter year:\n");
   scanf("%d",&y);
   printf("Enter month:\n");
   scanf("%d",&m);
   printf("%d days in year %d month %d \n",daysInMonth(y,m),y,m);
   return 0;

}

int leap(int year) {
  int true=1;

  if (year%4!=0) true=0;
  else if (year%100==0 && year%400!=0) true=0;
  else true=1;
  return true;

}
