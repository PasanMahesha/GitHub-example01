# include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    double firstNumber,secondNumber,answer;

    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);

    switch(operator){
	 case '+':
		answer=firstNumber + secondNumber;
		break;
         case '-':
		answer=firstNumber - secondNumber;
		break;
         case '*':
		answer=firstNumber * secondNumber;
		break;
	 case '/':
		answer=firstNumber / secondNumber;
		break;
         default:
              printf("Error! operator is not correct. \n");
	      exit(1);
      }
     printf("%.2f %c %.2f = %.2f \n",firstNumber,operator,secondNumber,answer);
 return 0;
}
