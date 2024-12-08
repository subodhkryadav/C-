#include<stdio.h>
int main(){
    int n;
    printf("enter the n ");
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i=i+1){
        if(i%2!=0){
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("\n");
    printf("%d",sum);
    return 0;
}