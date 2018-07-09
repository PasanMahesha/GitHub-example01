#include <stdio.h>
double interest(double);

int main(){
 double amount=0;
 printf("Enter amount : ");
 scanf("%lf",&amount);
 printf("Interest Earned = %.2lf \n",interest(amount));
}

double interest(double amount){
double x;

  if(amount<=1000){
	x=amount*0.04;
 }else if(amount<=100000){
	x=amount*0.05;
 }else if(amount<=1000000){
	x=amount*0.1;
 }else{
	x=amount*0.15;
 }
return x;

}
