#include<stdio.h>
int main(){
    int a=33;
    int *ptr=&a;
    printf("%p\n",&a); //address of a.
    printf("%u",&a);
}