// WAP using while loop to print the sum of first n natural numbers.
#include<stdio.h>
int main(){
    int n, sum=0 ;
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    printf("Enter Limit : ");
    scanf("%d", &n);

    while(n>0){
        sum = sum + n ;
        n-- ;
    }
    printf("SUM - %d", sum);
}