// WAP to read 10 numbers from keyboard and print sum and average

#include<stdio.h>
int main(){
    int i, sum = 0, average = 0 , a;
    for(i=1 ; i<=10 ; i++){
        printf("Enter Number : ");
        scanf("%d",&a);
        sum += a ;
    }
    printf("Sum is %d\n",sum);
    printf("Average is %d",sum/10);
}