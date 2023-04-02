// WAP to input sides of triangle and check whether triangle is Equilateral, Isoceles or Scalene
#include<stdio.h>
int main(){
    int s1,s2,s3 ;
    printf("Enter Sides of Triangle (in one line only): ");
    scanf("%d %d %d", &s1,&s2,&s3);

    if(s1==s2 && s2==s3 && s3==s1){
        printf("Equilateral Triangle!!");
    }
    else if(s1==s2 && s1!=s3 && s2!=s3 || s2==s3 && s2!=s1 && s3!=s1 || s3==s1 && s3!=s2 && s1!=s2){
        printf("Isoceles Triangle!!");
    }
    else if(s1!=s2 && s2!=s3 && s3!=s1){
        printf("Scalene Triangle!!");
    }
}