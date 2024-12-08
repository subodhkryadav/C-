#include<stdio.h>
int main(){
int n;
printf("enter the num ");
scanf("%d",&n);
printf("%d",n%2==0);
{
    printf("even");
}
printf("%d",n%2 !=0);
{ 
    printf("odd");
    }
    return 0;
}