#include<stdio.h>
int main(){
int n;
printf("enter the number ");
scanf("%d",&n);
int sum=0,i=1;
while(i<=n){
    printf("%d \n",i);
    sum=sum+i;
    i++;
}
printf("sum  %d",sum);
    return 0;
}