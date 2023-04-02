//WAP using switch case to check whether a number is positive, negative or zero
#include<stdio.h>
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    
    switch(num>0){
        case 1 :
            printf("Positive Number!!");
            break;
        
        case 0 :
            switch(num==0){
                case 1 :
                    printf("Zero!!");
                    break;

                default : printf("Negative Number!!");
            }
    }
}