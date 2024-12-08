#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("enter the num a ");
    scanf("%d",&a);
    printf("enter the num b ");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("sum is : %d",s);
}
int sum(int a,int b){
return  a+b;
}