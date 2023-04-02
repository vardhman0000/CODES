// // WAP to display Duplicate elements of an array

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter Length of Array ; ");
//     scanf("%d", &n);

//     int arr[n+1] ;
    
//     for (int i = 1; i <= n; i++)
//     {
//         printf("Enter Elements : ");
//         scanf("%d", &arr[i]);
//     }
//     printf("Array : ");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     int dup[n];
//     int count = 0 ;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {      
//             if (i!=j)
//             {
//                 if (arr[i]==arr[j])     
//                 {
//                     if(arr[i]==dup[j]){
//                         continue ;
//                     }
//                     else{
//                         count = count + 1 ;
//                         dup[count] = arr[i] ;
//                     }
//                 }
//                 // else
//                 // {
//                 //     dup[i] = 0 ;
//                 // }
//             }
//         }
//     } 
//     printf("\nDUP - ");
//     for (int i = 1; i <= count; i++)
//     {
//         if(arr[i]){}
//         printf("%d ", dup[i]);
//     }
         
// }


///////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
    // int my_array[] = {1, 2, 3, 2, 4, 3, 5, 1, 6,5};
    int n = 6 ;
    int my_array[n+1] ;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter ELement : ");
        scanf("%d", &my_array[i]);
    }
    
    int array_length = sizeof(my_array) / sizeof(int);
    int duplicate_elements[array_length];
    int num_duplicates = 0;

    for (int i = 0; i < array_length; i++) {
        for (int j = i + 1; j < array_length; j++) {
            if (my_array[i] == my_array[j]) {
                int is_duplicate = 0;
                for (int k = 0; k < num_duplicates; k++) {
                    if (my_array[i] == duplicate_elements[k]) {
                        is_duplicate = 1;
                        break;
                    }
                }
                if (!is_duplicate) {
                    duplicate_elements[num_duplicates++] = my_array[i];
                }
            }
        }
    }

    printf("Duplicate elements: ");
    for (int i = 0; i < num_duplicates; i++) {
        printf("%d ", duplicate_elements[i]);
    }
    printf("\n");

    return 0;
}