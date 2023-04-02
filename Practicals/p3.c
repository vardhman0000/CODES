// WAP to calculate area and Circumference of a circle by radius given by user

#include<stdio.h>

int main(){
    float radius ;
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    printf("Enter Radius : ");   // 21.7
    scanf("%f",&radius);

    printf("Area of Circle is : %0.2f sq. units", 3.14*radius*radius);
    printf("\nCircumference of Circle is : %0.2f units", 2*3.14*radius);
}