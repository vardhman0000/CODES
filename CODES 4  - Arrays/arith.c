#include<stdio.h>
int main(){
    int arr[]={10, 20 , 30, 45, 67, 56, 74};
    int *i, *j ;
    i=&arr[1];
    j=&arr[5];
    printf("%d %d\n", j-i, *j-*i);
}

// Addition of two pointers
// Multiplication of pointer with constant
// Division of pointer with constant