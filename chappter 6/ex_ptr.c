#include<stdio.h>
int main(){
    int age=22; 
    int *ptr=&age;
    int new=*ptr;
    printf("new is %d",new);
}