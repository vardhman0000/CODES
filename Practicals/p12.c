#include<stdio.h>
int main(){
    printf("Name - Vanshita_2210992510\n");
    //printf("Roll No. - 2210992513\n\n");
    int n, a=0, b=1, c=0 ;
    printf("Enter no. of Terms : ");
    scanf("%d", &n);
    printf("Series : %d %d ", a,b);
    for(int i=2; i<n; i++){
        c = a+b ;
        a = b ;
        b = c ;
        printf("%d ", c);
    }
}