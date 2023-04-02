#include<stdio.h>
int main(){
    int n, count ;
    printf("Enter Length of Array : ");
    scanf("%d", &n);

    int arr[n+1] ;

    for (int i = 1; i <= n; i++)
    {
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    printf("Array : ");
    for (int i = 1; i <= n; i++){
        printf("%d ", arr[i]);
    }
    int freq[n+1] ;
    for (int i = 1; i <= n; i++){
        count = 0 ;
        for (int j = 1; j <= n; j++){
            if(arr[i]==arr[j]){
                count++ ;
                freq[i] = count ;
            }
            else{
                freq[i] = count ;               
            }
        }
    }
    printf("\nFrequency Array : ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", freq[i] );
        // if(freq[i] = freq[i+1]){
        //     printf("%d ", freq[i] );
        // }
    }
}

//******************************************************************************************************
// #include<stdio.h>
// int main(){
//     int n, count=0 ;
//     printf("Enter Length of Array : ");
//     scanf("%d", &n);
//     int arr[n+1] ;
//     for (int i = 1; i <= n; i++)
//     {
//         printf("Enter Element : ");
//         scanf("%d", &arr[i]);
//     }
//     printf("Array : ");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     int arr2[n+1] ;
//     for(int i=1; i<=n; i++){
//         count=0 ;
//         for(int j=1; j<=n; j++){
//             //if(i!=j){
//                 if(arr[i]==arr[j]){
//                     count ++ ;
//                 }
//                 arr2[i] == count ;
//             //}
//         }
//     }
//     printf("\nFrequency Array : ");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr2[i]);
//     }
    
// }
