#include<stdio.h>
int fibbonacchi(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1=fibbonacchi(n-1);
    int fibNm2=fibbonacchi(n-2);
    int fibN=fibNm1+fibNm2;
    return fibN;
}
int main(){
   printf("fibbonacchii %d ",fibbonacchi(7));
    return 0;
}