#include<stdio.h>
void dowork(int a,int b,int *sum,int *mult,int *avg){
    *sum=a+b;
    *mult=a*b;
    *avg=(a+b)/2;
}
int main(){
    int a=4;
    int b=5;
    int sum,mult,avg;
    dowork(a,b,&sum,&mult,&avg);
    printf("sum=%d, product=%d ,avg=%d",sum,mult,avg);
    return 0;
}