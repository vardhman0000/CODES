#include<stdio.h>
#include<math.h>

int prime(int);
int armstrong(int) ;
int perfect(int) ;

int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int num ;
    printf("Enter Number : ");
    scanf("%d", &num);
    int a,b,c ;
    a = prime(num) ;
    b = armstrong(num) ;
    c = perfect(num) ;

    if(a == 1){
        printf("\nIt's a Prime Number !!") ;
    }
    else{
        printf("\nNot a Prime Number !!");
    }
    if(b == 1){
        printf("\nIt's an Armstrong Number !!") ;
    }
    else{
        printf("\nNot an Armstrong Number !!");
    }
    if(c == 1){
        printf("\nIt's a Perfect Number !!") ;
    }
    else{
        printf("\nNot a Perfect Number !!");
    }
}

int prime(int num){
    for(int i=2; i<=num/2; i++){
        if(num%i==0){     
            // Not Prime
            return 0 ;
        }
        else{
            //Prime
            return 1 ;
        }
    }
}

int armstrong(int num){
    int x=0, n1, rem=0, new_num, p ;
    float sum=0 ;
    new_num = num ;
    n1 = num ;
    while(n1>0){
        n1=n1/10 ;
        x=x+1 ;
    }
    for(int i = x; i>0; i--){
        rem = num%10 ;        
        sum = sum + pow(rem,x) ;
        num = num/10 ;
    }
    if((int)sum==new_num){
        return 1 ;
    }
    else if((int)sum!=new_num){
        return 0 ;
     }
}
int perfect(int num){
    int sum = 0 ;
    for (int i = 2; i <= num/2; i++){
        if (num%i==0){
            sum+=i ;
        }  
    }
    sum++ ;
    if (sum==num){
        return 1 ;
    }
    else{
        return 0 ;
    }
}
// int perfect(int num){
//     int sum=0, a, i ;
//     a = num ;
//     i = 2 ;
//     while(1){
//         if(num==1){
//             break ;
//         }
//         if(num%i==0){
//             sum+=i ;
//             num = num/i ;
//         }
//         else{
//             i++ ;
//         }
//     } 
//     sum++ ;
//     if(sum == a ){
//         return 1 ;
//         printf("\nPerfect Number !!");
//     }
//     else{
//         return 0 ;
//         printf("\nNot a Perfect Number !!");
//     }
// }