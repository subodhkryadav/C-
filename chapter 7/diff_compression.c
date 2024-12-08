#include<stdio.h>
int main(){
    int age=33;
    int age1=34;
    int *ptr=&age;
    int *ptr1=&age1;
    printf("%u,%udifferece=%u\n",ptr,ptr1,ptr-ptr1);
    ptr1=&age;
    printf("compressin= %u",ptr==ptr1);
}