/*

Write a program to perform the following operations on 1D-Array:
 Insert
 Update
 Delete
 Display
 Search

*/

#include<stdio.h>
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int ch ;    
    printf("1. Insert\n2. Update\n3. Delete\n4. Display\n5. Search\n");
    printf("Enter your Choice : ");
    scanf("%d", &ch);
    int n ;
    printf("Enter Length of Array : ");
    scanf("%d", &n);
    int arr[n+1], arr2[n], insert, index1, arr3[n+2], ele_ins, ind, updt, del, index, search, flag=0, fi;
    printf("Enter Elements : ");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    switch(ch){
    
        case 1 :    // Inserting Elements
            printf("\nEnter Index to insert element : ");
            scanf("%d", &insert);
            printf("Enter element to Insert : ");
            scanf("%d", &ele_ins);
            for(int i=1; i<=n+2; i++){
                if(i<insert){
                    arr3[i] = arr[i] ;
                }
                else if(i==insert){
                    arr3[insert] = ele_ins ;
                }
                else{
                    arr3[i] = arr[i-1] ;
                }
            }
            printf("Array : ");
            for(int i=1; i<=n+1; i++){
                printf("%d ", arr3[i]);
            }
            break ;
        case 2 :    //Updating Array
            
            printf("\nEnter Index to Update : ");
            scanf("%d", &ind);
            printf("Enter Updated Value : ");
            scanf("%d", &updt);

            arr[ind] = updt ;
            printf("Array : ");
            for(int i=1; i<=n; i++){
                printf("%d ", arr[i]);
            }
            break ;
        case 3 :    //Deleting Element
            
            printf("\nEnter Element to be Deleted : ");
            scanf("%d", &del);
            for (int i = 1; i <= n; i++)
            {
                if(arr[i] == del){
                    index = i ;
                    continue ;
                }
                else{
                    arr2[i] = arr[i] ;
                }
            }
            printf("Array : ");
            for(int i=1; i<=n; i++){
                if(i==index){
                    continue ;
                }
                else{
                    printf("%d ", arr2[i]);
                }
            }
            break ;
        case 4 :    // Displaying Elements
            printf("\nArray : ");
            for (int i = 1; i <= n; i++){
                printf("%d ", arr[i]);
            }
            break ;
        case 5 :    // Searching Elements
            
            printf("\nEnter Element to search for : ");
            scanf("%d", &search);
            for (int i = 1; i <= n; i++)
            {
                if(arr[i]==search){
                    flag = 1 ;
                    fi = i ;
                    break ;
                }
            }
            if(flag==1){
                printf("Element %d Found at Index : %d", search, fi) ;
            }
            else{
                printf("Element doesn't exists !!");
            }
            break ;

        default : 
        printf("Invalid Input !!") ;
    }

}