#include<stdio.h>
int percent(int sci,int sc,int math,int hindi,int maithili){
    int per=((sci+sc+math+hindi+maithili)/5);
    return per ;
}
int main(){
int science,math,hindi,socalsc,maithilli;
printf("enter the num of science \n");
scanf("%d",&science);
printf("enter the num of socalsc \n");
scanf("%d",&socalsc);
printf("enter the num of math \n");
scanf("%d",&math);
printf("enter the num of s hindi\n");
scanf("%d",& hindi);
printf("enter the num of maithilli \n");
scanf("%d",&maithilli);
printf("percentage is %d",percent(science,math,hindi,socalsc,maithilli));
return 0;
}