#include<stdio.h>
float convert(float celcious){
    float foran=celcious*(9.0/5.0)+32;
    return foran;
}
int main(){
    float foran=convert(37);
    printf("foranhite is  %f",foran);
    return 0;
}