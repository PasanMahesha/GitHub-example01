#include <stdio.h>

int power(int n1, int n2);

int main() {
    int base, powerRaised, result;

    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&powerRaised);

    result = power(base, powerRaised);
    printf("%d^%d = %d \n", base, powerRaised, result);
    return 0;
}

int power(int base, int powerRaised) {
//Implemet power function
	if(powerRaised==0){
		return 1;
	}else{
		return base*power(base,powerRaised-1);
	}
}
