#include<stdio.h>
void printNumber(int arr[],int size); ///arr[]=*arr
int main(){
    int arr[]={1,2,3,4,5};
    printNumber(arr,4);
    return 0;
}
void printNumber(int arr[],int size){ //arr[]=*arr
    for (int i=0;i<size;i++){
     printf("%d \t",arr[i]);
    }
    printf("\n");
}