// WAP that prints all the palindrome numbers lying in a range.
#include<stdio.h>
#include<math.h>
int main(){
    int u,l, total=0 ;
    printf("Enter Starting and Ending Range : ");
    scanf("%d %d", &l, &u);
    for(int n1=l; n1<=u; n1++){
        int num = n1, n=n1, count=0 ;
        while(n>0){
            n=n/10 ;
            count++ ;
        }
        float sum=0 ;
        int p=count-1, ctr;
        for(int i=0; i<count; i++){
        float rem = num%10 ;
        num = num/10 ;
        sum += rem * pow(10,p) ;
        p--;            
        }
        if((int)sum==n1){
            total++;
            printf("%d ", n1);
        }
    }
    printf("\nTotal %d Palindrome Numbers b/w %d and %d", total, l, u);
}

// #include<stdio.h>
// int main(){
//     int start;
//     int last;
//     scanf("%d",&start);
//     scanf("%d",&last);
//     for(int i = start;i<=last;i++){
//         int temp = i;
//         int temp2 = i;
//         int rev,rem=0;
//         while(temp>0){
//             rev= temp%10;
//             rem = rem*10 + rev;
//             temp=temp/10;
//         }
//         int k  = rem;
//         if(k == temp2){
//             printf("%d ",temp2);
//         }
//         else{
//             continue;
//         }
//     }
// }