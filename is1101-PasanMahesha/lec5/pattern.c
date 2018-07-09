#include <stdio.h>

void pattern(int);

int main(){
 pattern(4);
}

void pattern(int n){
//Implement it
 for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
 
}
