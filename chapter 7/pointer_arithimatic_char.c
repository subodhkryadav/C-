#include<stdio.h>
int main(){
 char age='*';
 char *ptr=&age;
    printf("ptr %u\n",ptr);
    ptr++;
    printf("ptr %u\n",ptr);
    ptr--;
    printf("ptr %u",ptr);
}