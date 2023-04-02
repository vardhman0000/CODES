/*

-- collection of similar values
-- int a[5] = [1,2,3,4,5]

for(i=0; i<30; i++){
    scanf("%d", &h[]);
}

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
