#include <stdio.h>

int addNumbers(int,int);

int main(){
 int a,b,c;
 printf("Enter Numbers :");
 scanf("%d %d",&a,&b);
 c=addNumbers(a,b);
 printf("%d + %d = %d \n",a,b,c);
 return 0;
}

int addNumbers(int x, int y){
 return x+y;
}

