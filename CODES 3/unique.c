#include<stdio.h>
int main(){
    int n;
    printf("Enter Length of Array : ");
    scanf("%d", &n);
    int a[n] ;
    
    // for(int i=0; i<n; i++){
    //     b[i]=a[i];
        
    //}

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                if(a[i]==a[j]){
                    printf("%d ", a[i]);
                }
            }
        }
    }
    
}