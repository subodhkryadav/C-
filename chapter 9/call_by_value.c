#include<stdio.h>
void square(int n){
    n=n*n;
    printf("square = %d\n",n);
}
int main(){
int num;
printf("enter the num ");
scanf("%d",&num);
square(num);
printf("number = %d\n",num);
return 0;
}