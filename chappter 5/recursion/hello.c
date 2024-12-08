#include<stdio.h>
void Hello(int n);
int main(){
Hello(5);
}
void Hello(int n){
    if(n==0){
     return;
    }
printf("hello world\n");
Hello(n-1);
}