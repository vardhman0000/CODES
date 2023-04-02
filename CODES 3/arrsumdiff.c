//WAP to scan an array of numbers and find average and difference from average of each number

#include<stdio.h>
int main(){
    int n, sum = 0 ;
    printf("Enter Number of Elements : ");
    scanf("%d", &n);
    int arr[n] ;
    for(int i=0; i<n; i++){
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        sum=sum+arr[i] ;
    }
    printf("SUM : %d\n", sum);
    printf("Average is : %0.2f\n", (float)sum/n);

    for(int i=0; i<n; i++){
        printf("Difference from average of element %d : %0.2f\n", arr[i], (float)(sum/n-arr[i]));
    }

}