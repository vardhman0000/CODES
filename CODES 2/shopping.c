// Shoping Center Program
#include<stdio.h>
int main(){
    int i, n, item, quantity, price ;
    printf("Enter number of Items : ");
    scanf("%d", &n);
    static int j=1;
    
    for(i=1; i<=n; i++){
        
        printf("\nEnter Item Code : ");
        scanf("%d", &item);
        
        printf("Enter Quantity : ");
        scanf("%d", &quantity);
        
        printf("Enter Price : ");
        scanf("%d", &price);
        
        while (j >0){
            printf("\t======= Shopping Center =======\n");
            printf("\nS No.\tItem Code\tQuantity\tPrice");
            j=0 ;
        
            // if(j==0){
            //     break ;
            // }
        }
        
        printf("\n  %d\t    %d\t\t   %d\t\t %d", i,item,quantity,price);

    }
    
    
}