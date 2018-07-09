#include <stdio.h>
void countDown(int);

int main(){
 countDown(5);
 return 0;
}

void countDown(int n){
 printf("%d \n",n);
 if(n>1) countDown(n-1);
  else printf("Blast!!\n");
}
