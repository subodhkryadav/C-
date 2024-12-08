#include<stdio.h>
int table(int n);
int main(){
    int n;
    printf("enter the table ");
    scanf("%d",&n);
    table(n);
}
int table (int n){
    for (int i=1;i<=10;i++)
    printf(": %d\n",n*i);
    }