#include<stdio.h>

float area(float);
float circumference(float) ;

int main(){
    printf("Name - Vardhman Jain\n");
    printf("roll No. - 2210992513\n\n");
    float radius, a, b ;
    printf("Enter Radius : ");
    scanf("%f", &radius);
    a = area(radius) ;
    b = circumference(radius) ;
    printf("\nArea is %0.2f", a);
    printf("\nCircumference is %0.2f", b);

}

float area(float radius){
    return 3.14 * radius * radius ;
}
float circumference(float radius){
    return 2 * 3.14 * radius ;
}