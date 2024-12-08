#include<stdio.h>
void evenOdd(int n);
int main(){
    int num;
    printf("enter the num ");
    scanf("%d",&num);
evenOdd(num);
}
void evenOdd(int n){
    if(n%2==0)
    printf("even");
    else 
    printf("odd");
}