//WAP to display multipliction table vertially from 1 to n

#include<stdio.h>
int main(){
    int i,j,num ;
    printf("Enter a Number : ");
    scanf("%d",&num);

    for(i=1 ; i<=num ; i++){
        for(j=1 ; j<=10 ; j++){
            printf("%d X %d = %d\n", i,j,i*j);
        }
        printf("\n");
    }
}