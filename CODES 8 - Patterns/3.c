/*
     *
    **
   ***
  ****
 *****
******
*/

#include<stdio.h>
int main(){
     int n;
     printf("Enter a Limit : ");
     scanf("%d", &n);
     
     for(int i=1; i<=n; i++){
          for(int spaces = n-i; spaces>0; spaces--){
               printf(" ");
          }
          for(int stars = 1; stars<=i; stars++){
               printf("*");
          }
          printf("\n");
      }
}