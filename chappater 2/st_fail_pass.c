#include<stdio.h>
int main(){
int mark;
printf("enter the mark ");
scanf("%d",&mark);
if (mark>30 && mark<=100)
    printf("student is passed");
     if(mark<=30 && mark>=0)
        printf("student is fail");
       else 
       printf("invalid mark");
     
    return 0;
}