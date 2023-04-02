/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

// #include<stdio.h>
// int main(){
//     int n=7;
//     // printf("Enter a Limit : ");
//     // scanf("%d", &n);

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==(n/2)+1 && j==(n/2)+1){  // For Printing 1
//                 printf("%d",(n/2)-2);
//             }
//             if(i==(n/2) && j==(n/2) || i==(n/2) && j==(n/2)+1 || i==(n/2) && j==(n/2)+2 || i==(n/2)+1 && j==(n/2) || i==(n/2)+1 && j==(n/2)+2/**/ || i==(n/2)+2 && j==(n/2) || i==(n/2)+2 && j==(n/2)+1 || i==(n/2)+2 && j==(n/2)+2){
//                 printf("%d",(n/2)-1);
//             }
//             if(i==(n/2)-1 && j==(n/2)-1 || i==(n/2)-1 && j==(n/2)){
//                 printf("%d",(n/2)) ;
//             }
//             else{
//                 printf(" ");
//             }


            
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    int n ;
    printf("Enter a Limit : ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n; j++){
                if(i==(n/2)+1 && j==(n/2)+1){
                    printf("1");
                }
                else if(i<n-1 && j<n-1 && i>2 && j>2){
                    printf("2");
                }
                else if(i<n && j<n && i!= 1 && j!=1){
                    printf("3");
                }
                else{
                    printf("4");
                }
        }
        printf("\n");
    }
}