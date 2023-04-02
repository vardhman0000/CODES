/*

******
*    *
*    *
*    *
*    *
*    *
*    *
******

*/

#include<stdio.h>
int main(){
    int i ;
    for(i=1; i<9; i++){
        if(i==1 || i==8){
            printf("******\n");
        }
        else{
            printf("*    *\n");
        }
    }
}