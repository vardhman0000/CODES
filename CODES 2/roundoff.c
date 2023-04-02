#include<stdio.h>
int main(){
    double num ;   // float takes 9999.. by default affter 4th place
    printf("Enter Num : ");
    scanf("%lf", &num);

    printf("\n%0.2lf", num);
    printf("\n%0.4lf", num);
    printf("\n%lf", num);
}