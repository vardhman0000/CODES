// WAP to calculate the sum of first n natural numbers 
#include<stdio.h>
int main(){
    int num,count,sum=0 ;

    printf("Enter a Positive integer : ");
    scanf("%d",&num);
    
    for(count=1 ; count <= num ; ++count){
        sum += count ;
    }
    printf("%d",sum);
}