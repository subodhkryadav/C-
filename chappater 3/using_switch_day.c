#include<stdio.h>
int main (){
int day; //day mans is 1=sanday,2-monday.....
printf("enter the day ");
scanf("%d",&day);
switch(day){
case 1: printf("sunday");
break;
case 2 : printf("monday");
break;
case 3 : printf("tuesday");
break;
case 4: printf("wednesday");
break;
case 5: printf("thusday");
break;
case 6: printf("friday");
break;
case 7: printf("saturday");
break;
default :printf("not a valid date");
}
    return 0;
}