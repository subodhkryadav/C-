// keep taking number as input from user enters an odd number
#include<stdio.h>
int main(){
int n;
do {
   printf("enter the number ");
   scanf("%d",&n);
    printf("%d\n",n);
    if(n%2!=0)
    break;
} while (1);
  printf("this is odd"); 
    return 0;
}