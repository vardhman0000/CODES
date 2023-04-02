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
        printf("\nENTERED I LOOP AT %d\n", i);
        count = 0 ;
        printf("COUNT IS 0 HERE\n");
        for (int j = 1; j <= n; j++){
            printf("ENTERED J LOOP AT %d\n", j);
            if(arr[i]==arr[j]){
                printf("RECEIVED EQUAL VALUES !!!\n");
                count++ ;
                printf("COUNT  --  %d\n",count);
                freq[i] = count ;
                printf("FREQUENCY -- %d AT I = %d\n", freq[i], i);
            }
            else{
                printf("RECEIVED UNEQUAL VALUES!!!\n");
                freq[i] = count  ;
                printf("FREQ -- %d AT I = %d\n", freq[i], i);                
            }
        }
        
    }
    //count=0 ;
    printf("\nFrequency Array : ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", freq[i] );
    }
    
}