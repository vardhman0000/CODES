// WAP to find wheather a given year is leap year or not

#include<stdio.h>
int main(){
    int year ;
    printf("Enter Year : ");
    scanf("%d",&year);

    if (year%100==0){ // checks for century year
        if (year % 400 == 0){
            printf("LEAP YEAR !!!");
        }
        else if (year % 400 !=0){
            printf("NOT LEAP YEAR !!!");
        }
    }
    
    else if (year % 100 != 0){
        if (year % 4 == 0){
            printf("LEAP YEAR !!!");
        }
        else if (year % 4 !=0){
            printf("NOT LEAP YEAR !!!");
        }
    }
}