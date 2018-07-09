#include <stdio.h>
int printb(int);

int main() {
    unsigned int a = 12, b = 15, c=0;
    c=a<<3;
    printf("Output %d & %d= %d\n",a,b,c);
    printf("%d\n",printb(a)); 
    printf("%d\n",printb(b));
    printf("%d -> %d\n",printb(c),c);
    return 0;
}

int printb(int n){
 if (n == 0) return 0;
 else return (n % 2) + 10 * printb(n / 2);
}
