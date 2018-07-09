#include <stdio.h>

double rate(double);
double interest(double);

double rate(double amount){
if (amount<=10000) return.04;
else if (amount<=100000) return .05;
else if (amount<=1000000) return .1;
else return .15;
}

double interest(double amount){
//Implement this function
}
