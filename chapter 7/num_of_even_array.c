#include<stdio.h>
int countodd(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if (arr[i]%2==0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[]={2,4,5,6,7};
    
    printf(" number of odd is %d",countodd(arr,5));
    
}