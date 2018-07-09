#include <stdio.h>

int main()
{
	int n, remainder, reversedNumber=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n!=0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    printf("Reversed Number = %d\n", reversedNumber);

    return 0;

}

