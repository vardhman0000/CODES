
// WAP to find the volume of the Cylinder

#include<stdio.h>
int main(){
    float r,h ;
    printf("\nEnter Radius of cylinder : ") ;
    scanf("%0.2f",&r) ;
    printf("\nEnter Height of Cyclinder : ") ;
    scanf("%0.2f",&h) ;
    printf("\nVolume of cylinder is : %0.2f", 3.14*r*r*h) ;
    return 0 ;
}