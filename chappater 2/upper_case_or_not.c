#include<stdio.h>
int main(){
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>='A' && ch<='Z'){
  printf("upper character ");
} else if(ch>='a'&& ch<='z'){
    printf("lower character ");
}
else 
printf("invalid character");
    return 0;
}