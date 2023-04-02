#include<stdio.h>
int main(){
    int n;
    printf("Enter a Limit : ");
    scanf("%d", &n);
    int a = n+(n-1) ;

    for(int i=1; i<=a; i++){
        //printf("\nI - %d", i);
        for(int j=1; j<=a; j++){
            //printf("\nJ - %d", j);
            // if(i<n && j<n && i!= 1 && j!=1){
            //     printf("*");
            //     //printf("%d", n-1);
            //}
            if(i==n && j==n){
                    printf("%d", n-(n-1));
                }
            else if(i<a-1 && j<a-1 && i>2 && j>2){
                    printf("%d", n-(n-2));
                }
            else if(i<a && j<a && i!= 1 && j!=1){
                    printf("%d", n-(n-3));
                }
            else{
                    printf("%d", n-(n-4));
                }
            // else{
            //     printf("%d", n);
            // }
            
        }
        printf("\n");
    }
}



// #include<stdio.h>
// int main(){
//     int n =3 ;
//     // printf("Enter a Limit : ");
//     // scanf("%d", &n);
//     int a = n*2-1 ;
//     printf("A - %d\n", a);

//     for(int i=1; i<=a; i++){
//         //printf("I - %d", i);
//         for(int j=1; j<=a; j++){
//             //printf("\nJ - %d\n\n", j);
//             // if(i != 1 && i != a){
//             //     //printf("@@\n");
//             //     if(j != 1 && j != a){
//             //         //printf("#############");
//             //         printf(" ") ;
//             //     }
//             // }
//             if(i!=1 && i!=a){
//             while(j>1 && j<n){
//                 printf(" ");
//             }}
//             printf("*");
//             //printf("%d", n);
//         }
//         printf("\n");
//     }
// }