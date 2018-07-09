#include<stdio.h>
long int factorial(int n);
int main(){
	int x;
	printf("Enter number :");
	scanf("%d",&x);
	printf("%ld",factorial(x));

}


long int factorial(int n) {
  if (n >= 1)  return n*factorial(n-1);
   else  return 1;
}
