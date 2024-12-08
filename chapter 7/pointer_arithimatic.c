#include<stdio.h>
int main(){
 int age=33;
 int *ptr=&age;
    printf("ptr %u\n",ptr);
    ptr++;
    printf("ptr %u\n",ptr);
    ptr--;
    printf("ptr %u",ptr);
}