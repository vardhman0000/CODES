#include<stdio.h>
int main(){
    int n, del ;
    printf("Enter Length of Array :");
    scanf("%d", &n);
    int arr[n] ;
    for(int i=1; i<=n; i++){
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }
    printf("Array : ");
    for (int i = 1; i <= n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nPosition of Element to be deleted : ");
    scanf("%d", &del);

    int arr2[n] ;
    for (int i = 1; i <= n; i++)
    {
        if (i==del)
        {
            continue ;
        }
        else
        {
            arr2[i]=arr[i] ;
        }
        
    }
    printf("Updated Array : ");
    for (int i = 1; i <= n; i++)
    {
        if(i==del){
            continue ;
        }
        else{
            printf("%d ", arr2[i]);
        }
    }
    
    
}