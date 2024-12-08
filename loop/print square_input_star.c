#include<stdio.h>
int main(){
    int n,m;
    printf("enter the n: \n");
    scanf("%d",&n);
    printf("enter the m: \n");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){     //number of column
        for(int i=1;i<=m;i++){   //number of rows
            printf("*");
        }
        printf("\n");
    }

    return 0;
}