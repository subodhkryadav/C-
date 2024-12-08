#include<stdio.h>
int main (){
    int a=3;
    int *ptr=&a;
    printf("a= %d\n",a);
    printf("*ptr= %d\n",*ptr);
    printf("*(&a)= %d",*(&a));
}