// WAP to check if the triangle is Equilateral of Isoceles
#include<stdio.h>
int main(){
    int s1,s2,s3 ;

    printf("Enter Sides of Triangle : ");
    scanf("%d%d%d", &s1,&s2,&s3);

    if(s1==s2 && s1==s3 && s2==s3){
        printf("EQILATERAL TRIANGLE !!");
    }
    else if( s1==s2 || s1==s3 || s2==s3 ){
        printf("ISOCELES TRIANGLE !!");
    }
}