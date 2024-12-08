#include<stdio.h>
int main(){
    int math;
    int science;
    int socal_science;
    int english;
    int maithili;
    int hindi;
    printf("enter the mark of math\n ");
    scanf("%d",&math);
    printf("enter the mark of science \n ");
    scanf("%d",&science);
    printf("enter the mark of socal_science \n ");
    scanf("%d",&socal_science);
    printf("enter the mark of maithili\n ");
    scanf("%d",&maithili);
    printf("enter the mark of hindi\n");
    scanf("%d",&hindi);
    int sum=0;
    sum=math+science+socal_science+maithili+hindi;
    printf("%d\n",sum);
    float  avarage=sum/5;
    printf("%.1f",avarage);
    return 0;
}