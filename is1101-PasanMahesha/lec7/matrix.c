#include <stdio.h>

#define rows 2
#define columns 3

void read(int (*)[columns]);
void print(int (*)[columns]);
void add(int (*)[columns],int (*)[columns],int (*)[columns]);

int main(){
 int m1[rows][columns];
 int m2[rows][columns];
 int m3[rows][columns];

 read(m1);
 read(m2);
 add(m1,m2,m3);
 printf("Answer :\n");
 print(m3);

 return 0;
}

void add(int (*m1)[columns],int (*m2)[columns],int (*m3)[columns]){
 for(int i=0;i<rows;i++)
  for(int j=0;j<columns;j++)
   m3[i][j]=m1[i][j]+m2[i][j];
}

void read(int (*m)[columns]){
 printf("Enter %d X %d matrix \n",rows,columns);
 for(int i=0; i<rows; ++i)
   for(int j=0; j<columns; ++j)
        scanf("%d", &m[i][j]);
}

void print(int (*m)[columns]){
 for(int i=0;i<rows;++i){
  for(int j=0;j<columns;++j){
   printf("%d ",m[i][j]);
  }
  printf("\n");
 }
}

