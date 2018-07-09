#include <stdio.h>

int main(int ac,char *ag[]){
 printf("Number of parameters = %d \n",ac);
 for(int i=0;i<ac;i++) puts(ag[i]);
 return 0;
}
