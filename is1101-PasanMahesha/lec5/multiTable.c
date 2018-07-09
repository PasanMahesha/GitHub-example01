#include <stdio.h>
int main(){
  int n, i,j;
  printf("Enter an integer: ");
  scanf("%d",&n);

	for (i=1;i<=12;i++){
	j=n*i;
	printf("%d * %d = %d \n",n,i,j);
}
 //Print multification table here
return 0;
}
