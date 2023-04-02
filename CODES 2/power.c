#include<stdio.h>
#include<math.h>
// int main(){
//     int power ;
//     power=pow(4,2) ;
//     printf("%d",power);
// }

// 

//WAP to print odd n umbers upto user entered limit

// 


// #include<stdio.h>
// int main(){
//     int limit, i=1, a=1 ;
//     printf("Enter Limit : ");
//     scanf("%d", &limit);

//     while(i<=limit){
//         if(a%2 !=0){
//             printf("NUM - %d", a);
//             a++ ;
//         }
//         i++ ;
//     }
// }

#include <stdio.h>

// int main() {
//   int n, i = 1;
  
//   printf("Enter the number of terms: ");
//   scanf("%d", &n);
  
//   while (n > 0) {
//     printf("%d\n", i);
//     i += 2;
//     n--;
//   }
// }
//   return 0;
// }

// #include<stdio.h>
// void main(){
//     float age, ageinsec;
//     int value ;
//     printf("Enter Age : ");
//     value=scanf("%f",&age);
//     if(value==0){
//         printf("\\nYour Age is Not Valid");
//     }
//     ageinsec = 365*24*60*60*age;
//     printf("YOu lived %f", ageinsec);
// }

#include<stdio.h>
// void main(){
//     int x=5;
//     if (x<1)
//     printf("Hello");
    // if(x==5)
    // printf("Hi");
    // else
    // printf("no");
    
//}

int main(){
    int n=4, pro=1 ;
    while(n>0){
        pro=pro*n;
        n-- ;
    }
    printf("%d",pro);
}