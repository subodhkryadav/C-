#include<stdio.h>
int main(){
    float price[3];
    printf("enter three price \n");
    scanf("%f\n",&price[0]);
    scanf("%f\n",&price[1]);
    scanf(" %f",&price[2]);
    printf("final price of first item= %f\n",price[0]+(0.18*price[0]));
    printf("final price of second item = %f\n",price[1]+(0.18*price[1]));
    printf("final price of third item= %f\n",price[2]+(0.18*price[2]));

}