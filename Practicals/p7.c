// WAP to find the greatest among three numbers using : ++ Conditional Operators ++ If-Else Statement
#include<stdio.h>
int main(){
    int a,b,c ;
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n") ;
    printf("Enter First Number : "); //12
    scanf("%d", &a);
    printf("Enter Second Number : "); //13
    scanf("%d", &b);
    printf("Enter Third Number : "); //14
    scanf("%d", &c);

    if(a>b && a>c){
        printf("%d is the greatest!!", a);
    }
    else if(b>a && b>c){
        printf("%d is the greatest!!", b);
    }
    else{
        printf("%d is the greatest!!", c);
    }
}

