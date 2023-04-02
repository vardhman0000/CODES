#include<stdio.h>

int main(){
    
    float bsalary ;
    float a,b,c;
    
    printf("Enter Your Basic Salary :- ") ;
    scanf("%f", &bsalary);
    
    printf("\nBasic Salary is :- %0.2f", bsalary) ;
    
    printf("\nDA is :- %0.2f", bsalary * 0.4) ;
    
    printf("\nHRA is :- %0.2f", bsalary * 0.2) ;
    
    printf("\nYour Gross Salary is :- %0.2f\n", bsalary +(bsalary*0.4) + (bsalary*0.2)) ;
    


   //printf("\nEnter Basic Salary :- ") ;
   //scanf("%f",&a) ;

   b = (bsalary*40)/100 ;
   c = (bsalary*20)/100 ;
   printf("\nGross Salary is :- %0.2f",bsalary+b+c);
    return 0 ;
}

/*
int main(){
float a,b,c;
   
   printf("\nEnter Basic Salary :- ") ;
   scanf("%f",&a) ;

   b = (a*40)/100 ;
   c = (a*20)/100 ;
   printf("\nGross Salary is :- %0.2f",a+b+c);
   
   return 0 ;
}
*/