// WAP to display the n terms of Harmonic series and their sum 
// 1 + 1/2 + 1/3 + 1/4 ... 1/n terms

#include<stdio.h>
int main(){
    float series=0,i,num;
    printf("Enter Number : ");
    scanf("%f",&num);
    for(i=1; i<=num; i++){
        series = (series) + (1/i) ;
        if(i==1){
            printf("1 + ");
        } else{
            printf("1/%d + ",(int)i);
        }
    }
    printf("\nSum of Series upto %0.0f terms : %f", num,series);
}