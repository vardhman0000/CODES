// #include<stdio.h>
// int main(){
//     int k,first;
//     printf("enter the starting number of the range \n");
//     scanf("%d",&k);
//     int second;
//     printf("enter the last number of the range \n");
//     scanf("%d",&second);
//     // int rem;
//     int sum = 0;
//     printf("%d",k);
//     for(first=k;first<=second;first++){
//         for(int i=2;i<first;i++){
//             if(first%i==0){
//                sum+=i;
//             }
//             else{
//                 continue;
//             }
//         }
//         sum++ ;
//         if(sum == first){
//             printf("%d is a perfect number",sum);
//         }
//         else {
//             continue;
//     }

// }
// }



//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int perfect(int);
int main(){
    int a, b, num, x ;
    printf("Enter Initial Value : ");
    scanf("%d", &a);
    printf("Enter Ending Limit : ");
    scanf("%d", &b);
    for(int i=a; i<=b; i++){
        num = i ;
        for(int j=1; j<=b; j++){
            x = perfect(num);
        }
        if(x == num){
            printf("\n%d is Perfect Number !!", num);
        }
    }
    
}
int perfect(int num){
    int sum = 0 ;
    for (int i = 2; i <= num/2; i++){
        if (num%i==0){
            sum+=i ;
        }  
    }
    return ++sum ;
}