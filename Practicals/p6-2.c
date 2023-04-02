#include<stdio.h>
int main(){
    int a,b ;
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    printf("Enter Value of A : ");
    scanf("%d", &a);
    printf("Enter Value of B : ");
    scanf("%d", &b);
    a=b-a ;
    b=b-a ;
    a=a+b ;

    printf("Values of Variables after Swapping :- \n");
    printf("A : %d\n", a);
    printf("B : %d\n", b);

}
