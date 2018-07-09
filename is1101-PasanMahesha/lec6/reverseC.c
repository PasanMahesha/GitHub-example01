#include <stdio.h>

void reverse(char *n);

int main(){
 char n[] = "Enter the sentense";
 reverse(n);
 printf("\n");
 return 0;
}

void reverse(char *n){
 if(*n)
 {
	reverse(n+1);
	printf("%c",*n);
 }
}
