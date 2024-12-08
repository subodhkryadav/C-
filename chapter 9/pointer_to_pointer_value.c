#include<stdio.h>
int main(){
int a=6;
int *ptr=&a;
int **pptr=&ptr;
printf("a= %d",**pptr);

}