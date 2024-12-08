//wap to print the you are now adult 
#include<stdio.h>
int main(){
int age;
printf("enter the age ");
scanf("%d",&age);
if(age>=18){
printf("you are addult\n");
printf("you can vote \n");
printf("you can drive \n");
}
 else{
   printf("you are not addult\n");
 }
 printf("thank you");
    return 0;
}