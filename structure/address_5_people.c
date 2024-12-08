#include<stdio.h>
#include<string.h>
struct people{
    char name[10];
    int house_no;
    int block;
    char city[20];
    char state[20];
};
int main(){
    struct people man1,man2,man3,man4,man5;
    printf("for man1\n");
    printf("enter the name: ");
    scanf("%s",&man1.name);
    printf("enter the nouse no: ");
    scanf("%d",&man1.house_no);
    printf("enter the bloock: ");
    scanf("%d",&man1.block);
    printf("enter the city: ");
    scanf("%s",&man1.city);
    printf("enter the state: ");
    scanf("%s",&man1.state);

    printf("for man2\n");

    printf("enter the name: ");
    scanf("%s",&man2.name);
    printf("enter the nouse no: ");
    scanf("%d",&man2.house_no);
    printf("enter the bloock: ");
    scanf("%d",&man2.block);
    printf("enter the city: ");
    scanf("%s",&man2.city);
    printf("enter the state: ");
    scanf("%s",&man2.state);


    printf("for man3\n");

    printf("enter the name: ");
    scanf("%s",&man3.name);
    printf("enter the nouse no: ");
    scanf("%d",&man3.house_no);
    printf("enter the bloock: ");
    scanf("%d",&man3.block);
    printf("enter the city: ");
    scanf("%s",&man3.city);
    printf("enter the state: ");
    scanf("%s",&man3.state);

    printf("for man4\n");

    printf("enter the name: ");
    scanf("%s",&man4.name);
    printf("enter the nouse no: ");
    scanf("%d",&man4.house_no);
    printf("enter the bloock: ");
    scanf("%d",&man4.block);
    printf("enter the city: ");
    scanf("%s",&man4.city);
    printf("enter the state: ");
    scanf("%s",&man4.state);


    printf("for man5\n");

    printf("enter the name: ");
    scanf("%s",&man5.name);
    printf("enter the nouse no: ");
    scanf("%d",&man5.house_no);
    printf("enter the bloock: ");
    scanf("%d",&man5.block);
    printf("enter the city: ");
    scanf("%s",&man5.city);
    printf("enter the state: ");
    scanf("%s",&man5.state);

    printf("\n");

    printf("for man1\n");
    printf("name: %s\n",man1.name);
    printf("house_no: %d\n",man1.house_no);
    printf("block: %d\n",man1.block);
    printf("city : %s\n",man1.city);
    printf("state: %s\n",man1.state);

    printf("\n");

    printf("for man2\n");
    printf("name: %s\n",man2.name);
    printf("house_no: %d\n",man2.house_no);
    printf("block: %d\n",man2.block);
    printf("city : %s\n",man2.city);
    printf("state: %s\n",man2.state);

    printf("\n");

    printf("for man3\n");
    printf("name: %s\n",man3.name);
    printf("house_no: %d\n",man3.house_no);
    printf("block: %d\n",man3.block);
    printf("city : %s\n",man3.city);
    printf("state: %s\n",man3.state);

    printf("\n");

    printf("for man4\n");
    printf("name: %s\n",man4.name);
    printf("house_no: %d\n",man4.house_no);
    printf("block: %d\n",man4.block);
    printf("city : %s\n",man4.city);
    printf("state: %s\n",man4.state);

    printf("\n");

    printf("for man5\n");
    printf("name: %s\n",man5.name);
    printf("house_no: %d\n",man5.house_no);
    printf("block: %d\n",man5.block);
    printf("city : %s\n",man5.city);
    printf("state: %s\n",man5.state);

    return 0;
}
