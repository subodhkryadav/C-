#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++){
        printf("number--> %d\n",i);
        sum=sum+i;
    }
    printf("sum= %d",sum);
}