/*
   1 
  2 3
 4 5 6
7 8 9 10
*/

#include<stdio.h>
int main(){
    int num,digit,spaces,i ;
    printf("Enter Number : ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){     // For number of rows
        for(spaces=num-i; spaces<num; spaces--){   //For printing Spaces
            printf(" ");
        }
        for(digit=i; digit<=10; digit++){   //For printing digits
            printf("%d ",i);
        }
        printf("\n");
    }
    
}