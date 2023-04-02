#include<stdio.h>

int swap_1(int , int );
int swap_2(int *, int *);

int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int a, b ;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    swap_1(a,b) ;
    
    int *x, *y, temp=0, c, d;
    printf("\n\nEnter First Number : ");
    scanf("%d", &c) ;
    printf("Enter Second Number : ");
    scanf("%d", &d) ;
    x = &c ;
    y = &d ;
    
    swap_2(x,y);
    
    printf("\nC - %d", *x);
    printf("\nD - %d", *y);
    
}

int swap_1(int a, int b){    // Call by value
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;
    printf("\nA = %d", a);
    printf("\nB = %d", b);
}

int swap_2(int *x, int *y){             // Call by Reference
    int temp = *x ;
    *x = *y ;
    *y = temp ;  
}
