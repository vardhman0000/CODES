// #include<stdio.h>
// int n ;
// int arr_sum(int *);
// int main(){
//     printf("Enter Length of Array : ");
//     scanf("%d", &n);
//     int arr[n+1] ;
//     int *sumarr ;
//     printf("Enter Elements : ");
//     for(int i=1; i<=n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("\nArray : ");
//     for(int i=1; i<=n; i++){
//         printf("%d ", arr[i]);
//     }
//     sumarr = &arr[0] ;
//     int a = arr_sum(sumarr) ;
//     printf("\nSum is %d", a);

// }
// int arr_sum(int *sumarr){
//     int i, sum ;
//     for(i=1; i<=n; i++){
//         sum = sum + (*sumarr+i) ;
//     }
//     return sum ;
// }
////////////////////////////////////////////////////////////
#include<stdio.h>
int n ;
int arr_sum(int arr[], int n);
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int l ;
    printf("Enter Length of Array : ");
    scanf("%d", &l);
    int arr[l+1] ;
    int *sumarr ;
    for(int i=1; i<=l; i++){
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    printf("\nArray : ");
    for(int i=1; i<=l; i++){
        printf("%d ", arr[i]);
    }
    int a = arr_sum(arr, l) ;
    printf("\nSum is %d", a);

}
int arr_sum(int arr[], int l){
    int i, sum=0 ;
    for(i=1; i<=l; i++){
        sum+=arr[i] ;
    }
    return sum ;
} 