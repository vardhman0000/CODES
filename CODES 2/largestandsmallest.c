/* WAP to enter the numbers till the user wants and at the end the program should display the largest
and smallest numbers entered. */
#include<stdio.h>
int main(){
    int num, a=1, largest=0, smallest=99999 ;
    char choice ;

    do{
        printf("Enter Number : ");
        scanf("%d", &num);
        
        if(num==0){
            a=0;
        }
        else{
            if(num>largest){
                largest=num;
            }
            if(num<smallest){
                smallest=num;
            }
        }

        // printf("Do you want to enter more? (y/n) : ");
        // scanf(" %c",&choice);
    }while(a!=0);
    
    printf("\nSmallest Number is %d", smallest);
    printf("\nLargest Number is %d", largest);
}