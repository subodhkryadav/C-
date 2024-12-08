#include<stdio.h>
int main(){
 float age=33.25;
 float *ptr=&age;
    printf("ptr %u\n",ptr);
    ptr++;
    printf("ptr %u\n",ptr);
    ptr--;
    printf("ptr %u",ptr);
}