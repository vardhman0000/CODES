#include<stdio.h>
int main(){
    int num ;
    printf("Enter Limit : ");
    scanf("%d", &num);
    while(num>0){
        if (num==3){
            num--;
            continue;
        }
        else{
            printf("%d : OK!!\n", num);
            num--;
        }
    }
}