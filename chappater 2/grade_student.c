#include<stdio.h>
int main(){
int mark;
printf("enter the mark ");
scanf("%d",&mark);
if(mark>=0 && mark<30){
   printf("grade is C ");}
else if  (mark>=30 && mark< 70)
   printf("grade is B ");
else if (mark>=70 && mark<90)
   printf("grade is A");
else if( mark>=90 && mark<= 100)
   printf("grade is A+");
else 
printf("invalid mark");
    return 0;
}