#include<stdio.h>
void printAdress(int n);
int main (){
    int n=4;

    printf("%u\n",&n);
    printAdress(n);
    return 0;
}
void printAdress(int n){
    printf("%u\n",&n);
}