#include<stdio.h>
int main(){
    int n=5 ;
    int arr[n] ;
    printf("Enter Elements : ");
    for(int i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    int  insert, ele_ins, index1, arr3[n+2] ;
            printf("Enter Index to insert element : ");
            scanf("%d", &insert);
            printf("Enter element to Insert : ");
            scanf("%d", &ele_ins);
            for(int i=1; i<=n+2; i++){
                if(i<insert){
                    arr3[i] = arr[i] ;
                }
                else if(i==insert){
                    arr3[insert] = ele_ins ;
                }
                else{
                    arr3[i] = arr[i-1] ;
                }
            }
            printf("Array : ");
            for(int i=1; i<=n+1; i++){
                printf("%d ", arr3[i]);
            }
}