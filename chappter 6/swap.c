#include<stdio.h>
int swap(int a,int b){
    int t=a;
        a=b;
        b=t;
    printf("a= %d b= %d",a,b);
}
int main(){
    int a=4;
    int b=5;
    swap(a,b);
    return 0;
}