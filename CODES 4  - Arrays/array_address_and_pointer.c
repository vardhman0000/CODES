#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr1 = arr+1 ;
    int *ptr2 = arr+3;
    int temp = *ptr1 ;
    *ptr1 = *ptr2 ;
    *ptr2 = temp ;
    printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
}
