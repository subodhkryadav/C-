#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int age;
    int roll;
    char sec;
};
int main(){
    struct student s1,s2,s3;
    
    strcpy(s1.name,"subodh");
    s1.roll=44;
    s1.age=18;
    s1.sec='e';
    printf("\n");

    strcpy(s2.name,"madhav");
    s2.roll=3;
    s2.age=22;
    s2.sec='d';
    printf("\n");
    
    strcpy(s3.name,"suraj");
    s3.roll=33;
    s3.age=24;
    s3.sec='a';
    printf("\n");

    printf("for first sudent\n");
    printf("the name of the  student is: %s\n",s1.name);
    printf("the roll no of the  student is: %d\n",s1.roll);
    printf("the age of the  student is: %d\n",s1.age);
    printf("the sec of the  studnt is: %c\n",s1.sec);

    printf("\n");

    printf("for second sudent\n");
    printf("the name of the  student is: %s\n",s2.name);
    printf("the roll no of the  student is: %d\n",s2.roll);
    printf("the age of the  student is: %d\n",s2.age);
    printf("the sec of the  studnt is: %c\n",s2.sec);

         printf("\n");

    printf("for third sudent\n");
    printf("the name of the  student is: %s\n",s3.name);
    printf("the roll no of the  student is: %d\n",s3.roll);
    printf("the age of the  student is: %d\n",s3.age);
    printf("the sec of the  studnt is: %c\n",s3.sec);

}