#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]) {
  if(argc<3) return 1;

  int sum=atoi(argv[1])+atoi(argv[2]);
  printf ("The value entered is %s and %s.\n",argv[1],argv[2]);
  printf("Sum = %d\n",sum);

  return 0;
}
