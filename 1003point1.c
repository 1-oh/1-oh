#include<stdio.h>
#include<string.h>

void swap(int *a,int *b){
   int p;
   p=*a;
   *a=*b;
   *b=p;
}

int main(){
   int m,n;
   printf("input m,n\n");
   scanf("%d,%d",&m,&n);
   swap(&m,&n);
   printf("m=%d,n=%d\n",m,n);
}