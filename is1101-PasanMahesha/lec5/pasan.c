#include <stdio.h>

int main(){

char input[64];
printf("Enter name:\n");
fgets(input,64,stdin);

puts(input);
return 0;
}
