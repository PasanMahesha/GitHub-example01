#include <stdio.h>

#define profit(revenue,cost) (revenue-cost)

#define revenue(price,n) (price*n)

#define cost(n) (500+3*n)

#define attendees(price) ((15-price)/5*20+120)

int main(){
 int price=15;
 int n=attendees(price);
 printf("Ticket Price = %d => profit = %d\n",price,profit(revenue(price,n),cost(n)));
 return 0;
}
