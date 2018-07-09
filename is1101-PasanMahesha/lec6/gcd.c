#include <stdio.h>

int gcd(int,int);

int main(){
int a,b;
printf("Enter two numbers :");
scanf("%d %d",&a,&b);

printf("GCD of %d and %d is %d \n.",a,b,gcd(a,b));
return 0;
}

int gcd(int x,int y){
//implemment GCD function
    if (y != 0)
       return gcd(y, y%x);
    else 
       return x;

}
