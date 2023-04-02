// #include<stdio.h>
// int main(){
//     int num, sum = 0 ;
//     printf("Enter Number : ");
//     scanf("%d", &num);
//     int x = num ;
//     int i = 2 ;
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
//     if(sum == x ){
//         printf("\nPerfect Number !!");
//     }
//     else{
//         printf("\nNot a Perfect Number !!");
//     }
// }



#include<stdio.h>
int main(){
    int num, sum=0 ;
    printf("Enter Number : ");
    scanf("%d", &num);
    for(int i=1; i<=num/2; i++){
        if(num%i==0){
            sum = sum + i ;
        }
    }
    // sum++ ;
    if(sum == num){
        printf("It's a Perfect Number !!");
    }
    else{
        printf("Not a Perfect Number !!");
    }
}