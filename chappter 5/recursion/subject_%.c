#include<stdio.h>
int percent(int science,int math,int english){
    int allP=((science + math+ english)/3);
    return allP;
}
int main(){
int sc=98;
int ma=95;
int en=99;

printf("percentage is %d",percent(sc,ma,en));
return 0;
}