/*
WAP to evaluate each of the following equations
(i) V = u + at
(ii) S = ut+1/2at2 
(iii) T=2*a+√b+9c 
(iv) H=√b2+p2
*/

#include<stdio.h>
#include<math.h>
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    printf("(i) v = u + at");
    float v,u,a,t ;
    printf("\nEnter Initial Velocity (u) : ");
    scanf("%f",&u);
    printf("Enter Acceleration (a) : ");
    scanf("%f",&a);
    printf("Enter Time (t) : ");
    scanf("%f",&t);

    printf("v = %0.2f", u+a*t);


    printf("\n\n(ii) s = ut + 1/2 at^2");
    float u1, t1, a1 ;
    printf("\nEnter Initial Velocity (u) : ");
    scanf("%f",&u1);
    printf("Enter Acceleration (a) : ");
    scanf("%f",&a1);
    printf("Enter Time (t) : ");
    scanf("%f",&t1);

    printf("s = %0.2f",(u1*t1)+((a1*t1*t1)/2));



    printf("\n\n(iii) T = 2a + (b+ 9c)^1/2");
    float a3,b,c ;
    printf("\nEnter a : ");
    scanf("%f",&a3);
    printf("Enter b : ");
    scanf("%f",&b);
    printf("enter c : ");
    scanf("%f",&c);

    printf("T = %0.2f", (2*a3)+(sqrt(b)+(9*c)));



    printf("\n\n(iv) H = ((b)^2 + (p)^2)^1/2");
    float b2, p2 ;
    printf("\nEnter b : ");
    scanf("%f",&b2);
    printf("Enter p : ");
    scanf("%f",&p2);

    printf("H = %0.2f", sqrt((b2*b2)+(p2*p2)) );
}