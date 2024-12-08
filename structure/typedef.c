#include<stdio.h>
#include<string.h>
 typedef struct informationOFstudent{
    char name[10];
    int roll;
    int age;
    char sec;
}ios;
int main(){
    ios sky;
    strcpy(sky.name,"subodh");
    sky.roll=44;
    sky.age=18;
    sky.sec='E';

    printf("the name of the student is: %s\n",sky.name);
    printf("the roll of the student is: %d\n",sky.roll);
    printf("the age  of the student is: %d\n",sky.age);
    printf("the sec of the student is: %c\n",sky.sec);
    return 0;
}