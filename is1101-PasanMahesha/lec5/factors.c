#include <stdio.h>
int main() {
  int number, i;
  printf("Enter a positive integer: ");
  scanf("%d",&number);

	
  printf("Factors of %d are: ", number,i);
	for(i=1;i<=number;i++){
		if(number%i==0){
			printf("%d",i);
		printf("\n");
		}
  //Implement facters here

}
  

  return 0;
}
