#include<stdio.h>
int main(){
    int *ptr;
    int x;
//condition 1st
    ptr=&x;
    *ptr=0;
    printf("x= %d\n",x);
    printf("*ptr= %d\n",*ptr);
 //condition 2nd
    *ptr+=5;
    printf("x= %d\n",x);
    printf("*ptr= %d\n",*ptr);
//condition 3rd
    (*ptr)++;
    printf("x= %d\n",x);
    printf("*ptr= %d\n",*ptr);
}