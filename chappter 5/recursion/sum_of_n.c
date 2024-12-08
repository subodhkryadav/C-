#include<stdio.h>
int sum(int n){
if (n==1){
    return 1;
} 
    int sumNm1=sum(n-1);
    int sumn=sumNm1+n;
    return sumn;
}
int main(){
    printf("sum is %d ",sum(3) );
    return 0;
}
