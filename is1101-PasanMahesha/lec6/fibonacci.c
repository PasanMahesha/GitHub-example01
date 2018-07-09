#include <stdio.h>
int fibonacci(int);

int main(){
 int n=10;
 printf("Fabonacci %d => %d \n",n,fibonacci(n));
 return 0;
}

int fibonacci(int n){
 if (n==1) return 0;
 else if (n == 2) return 1;
 else return fibonacci(n-1)+fibonacci(n-2);
}

	
