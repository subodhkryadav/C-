#include<stdio.h>
void priceCalcluate(float value);
int main(){
    float value=110.00;
priceCalcluate(value);
return 0;

}
void priceCalcluate(float value){
value=value+(0.18*value);
printf("price : %f",value);
}
