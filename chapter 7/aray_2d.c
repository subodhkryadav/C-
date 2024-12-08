#include<stdio.h>
int main(){
    int marks[2][3];
    //first student marks stored
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=77;

    //second student mark stored 
    marks[1][0]=90;
    marks[1][1]=89;
    marks[1][2]=77;
    //print the sencond student  second subject marks
    printf("marks is =%d",marks[1][1]);
}