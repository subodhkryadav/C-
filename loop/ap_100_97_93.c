#include<stdio.h>
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int a=100;
    for (int i=1;i<=n;i++){
        printf("%d ",a);
        a=a-3;
    }
}