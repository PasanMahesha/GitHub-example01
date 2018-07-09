#include <stdio.h>
#define MAX 5

void read(int *);
void print(int *);
int sum(int *);
double avg(int *);

int main(){
int marks[MAX];
read(marks);
printf("Sum = %d Average = %.2f\n",sum(marks),avg(marks));

//print(marks);
return 0;
}

void read(int *p){
 printf("Enter your makrs  :");
 for(int i=0;i<MAX; i++)
  scanf("%d",p+i);
}

void print(int *p){
 for(int i=0;i<MAX;i++)
  printf("%d \n",p[i]);
}

int sum(int *p){
 int sum=0;
 for(int i=0;i<MAX;i++) sum+=p[i];
 return sum;
}
double avg(int *p){
 return sum(p)/MAX;
}
