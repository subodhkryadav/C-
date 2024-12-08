 #include<stdio.h>
 int sum(int a,int b);
int main(){
    int a,b;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("%d",sum);
}
int sum(int a,int b){
    return a+b;
}
