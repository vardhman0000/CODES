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
     int n = 6 ;
     printf("Enter a Limit : ");
     scanf("%d", &n);
     for(int i=n; i>0; i--){
          for(int space=i-1; space<n; space++){
               printf(" ") ;
          }
          for(int star=i; star>0; star--){
               printf("*");
          }
          printf("\n");
     }
}