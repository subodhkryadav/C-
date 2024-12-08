#include<stdio.h>
int main(){
int n,m;
printf("enter the numebr n ");
scanf("%d",&n);
printf("enter the numebr m ");
scanf("%d",&m);
for(int i=1;i<=n;i++){    //this denoted the row of the line of pattern
    for(int i=1;i<=m;i++){   //this for denoted the column of the line of code
        printf("*");
    }
    printf("\n");
}

    return 0;
}