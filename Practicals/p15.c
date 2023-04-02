#include<stdio.h>
#include<math.h>
// global variables
int n, count, num ;

//prototypes
int prime_func(int n);
int armstrong(int num) ;

//main function
int main(){
    int n, a ;
    printf("Enter Number : ");
    scanf("%d", &n);
    a = prime_func(n);
    if(count==0){
        printf("Prime Number !!");
    }
    else{
        printf("Not a Prime Number !!");
    }

/////////////////////////////////////////////////////////////////

    printf("\n---------- ARMSTONG NUMBER ----------\n");
    int num;
    float b ;
    printf("Enter Number : ");
    scanf("%d", &num);
    b = armstrong(num) ;
    int new_num = num ;
    if((int)b==new_num){
        printf("Armstrong Number !!");
    }
    else{
        printf("Not an Armstrong Number !!");
    }

/////////////////////////////////////////////////////////////////

    printf('\n---------- Perfect Number ----------\n');
    int sum ;
    printf("Enter Number : ");
    scanf("%d", &num);
    int i = 2 ;
    while(num>0){
        if(num%i==0){
            sum+=i ;
            num = num/i ;
        }
        else{
            i++ ;
        }
    }
    if(sum == num ){
        printf("\nPerfect Number !!");
    }
    else{
        printf("\nNot a Perfect Number !!");
    }
}

//function

int prime_func(int n){
    count = 0 ;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            count = 1 ;
        }
    }
    return count ;
}

int armstrong(int num){
    int n, x=0, rem=0;
    float sum=0 ;
    n=num ;
    while(n>0){
        n=n/10;
        x+=1;  // x contains length 
    }
    
    for(int i = x; i>0; i--){
        rem = num%10 ;
        sum = sum + pow(rem,x) ;
        num = num/10 ;
    }
    return sum ;
}

int perfect(int num){}