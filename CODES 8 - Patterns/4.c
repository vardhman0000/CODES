/*
******
*****
****
***
**
*
*/

#include<stdio.h>
int main(){
    int n ;
    printf("Enter a Limit : ");
    scanf("%d", &n);
    for(int i=n; i>0; i--){
        for(int j=i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
}

/*
#include<stdio.h>
int main(){
    int n = 7 ;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
}
*/