#include<stdio.h>
int main(){
    int n;
    printf("enter the n ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum %d ",sum);
    float  avarage=sum/n;
    printf("\n");
    printf("Avarage= %f",avarage);
    return 0;
}