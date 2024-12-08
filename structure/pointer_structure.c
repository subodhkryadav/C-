#include<stdio.h>
struct student {
    char name[8];
    int roll ;
    int age;
};
int main(){
struct student s1={"subodh",44,18};
printf("student roll no is %d\n ",s1.roll);


// using pointer to print the roll no of the s1 student
struct student (*ptr)=&s1;
printf("the roll number of the student is: %d\n",(*ptr).roll);
printf("the roll number of the student is: %d",(ptr)->roll);

}