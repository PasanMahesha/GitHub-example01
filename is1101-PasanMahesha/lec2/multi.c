#include <stdio.h>
int main() {
	
 float firstNumber, secondNumber, answer;

  printf("Enter two numbers: ");
  // Two integers entered by user is stored using scanf() function
  scanf("%f %f",&firstNumber,&secondNumber);
  // multiply two numbers in stored in variable answer
  answer=firstNumber*secondNumber;
 // Displays the answer
  printf("Answer = %.2f \n",answer);
  return 0;

}
