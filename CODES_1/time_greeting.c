/*
6.00  - 11.59  -- Morning   -- AM

12.00 - 3.59   -- Afternoon --\
4.00  - 6.59   -- Evening   --|-- PM
7.00  - 8.00   -- Night     --/

*/

#include<stdio.h>
int main(){
    int meradian,hour,min ;
    
    printf("1. AM\n2. PM\n");
    printf("Enter your choice : ");
    scanf("%d",&meradian);

    if(meradian == 1){
        printf("OK! you chose AM\n");
    }
    else{
        printf("OK! you chose PM\n");
    }
    
    printf("Enter Hour : ");
    scanf("%d",&hour);
    printf("Enter Minutes : ");
    scanf("%d",&min);

    if(meradian==1){
        printf("Your Time is %d : %d AM\n",hour,min);
    }
    else{
        printf("Your Time is %d : %d PM\n",hour,min);
    }

    switch(meradian){
        case 1:                           //Morning
            if(hour>=6 && hour<=11){
                if(min>0 && min<60){
                    printf("Good Morning!!\n");
                }
            }
            break;
        case 2:                          //Afternoon, Evening, Night
            if(hour>=12 && hour<=15 && min>0 && min<60){
                printf("Good Afternoon!!\n");
            }
            else if(hour>=4 && hour <=6){
                if(min>0 && min<60){
                    printf("Good Evening!!\n");
                }
            }
            else if(hour>=7 && hour <=8){
                if(min>0 && min<60){
                    printf("Good Night!!\n");
                }
            }
            else{
                printf("INVALID!!\n");
            }
    }
}