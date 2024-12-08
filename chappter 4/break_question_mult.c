// keep taking number as input from user enters a number which is multiplyied by 7
#include<stdio.h>
int main(){
int n;
do
{
    printf("enter the number ");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n%7==0)
    break;
} while (1);
printf("number is divisable by 7");
    return 0;
}