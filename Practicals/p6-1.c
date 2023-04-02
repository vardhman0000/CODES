// WAP to swap two variables
// 1) By using temporary variable
// 2) Without using temporary variable

#include<stdio.h>
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int a,b,c ;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter Value of b : ");
    scanf("%d", &b);
    printf("Initial Values of a and b\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    c = a ;
    a = b ;
    b = c ;
    printf("Values of a and b after swapping\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

}