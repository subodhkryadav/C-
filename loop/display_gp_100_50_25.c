#include<stdio.h>
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
     float a=100;
    for (int i=1;i<=n;i++){
        printf("%.1f ",a);
        a=a/2;
    }
}