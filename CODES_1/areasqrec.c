
// WAP to find the area of square and rectangle

#include<stdio.h>
int main(){ 

    int a,l,b,side ;
    printf("1. Area of Rectangle\n2. Area of Square \nEnter your Choice : ") ;
    scanf("%d",&a) ;

    if (a==1){
        printf("Enter Length of Rectangle : ") ;
        scanf("%d",&l) ;
        printf("Enter Breadth of Rectangle : ") ;
        scanf("%d",&b) ;
        printf("Area of Rectangle is : %d",l*b) ;
    }
    else if (a==2){
        printf("Enter Side of Square : ") ;
        scanf("%d",&side) ;
        printf("Area of Square is : %d",side*side) ;
    }
return 0;
}

