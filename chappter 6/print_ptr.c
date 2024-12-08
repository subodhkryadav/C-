#include<stdio.h>
int main(){
int a=99;
int *ptr=&a;
printf("%u\n",&a);
printf("%u\n",ptr);
printf("%u\n",*ptr);
printf("%u",&ptr);

}