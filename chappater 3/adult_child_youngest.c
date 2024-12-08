#include<stdio.h>
int main(){
int age;
printf("enter the age ");
scanf("%d",&age);
if(age>18)
printf("you are adult\n");
else if(age=18)
printf("you are youngest\n");
else 
printf("you are child");
    return 0;
}
