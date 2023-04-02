#include <stdio.h>

int main(){

int arr[]={3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

int n = sizeof(arr)/sizeof(arr[0]);

int freq[10] = {0};

int i, j;

for (i=0; i < n; i++){

freq[arr[i]]++;


}

for (i = 0; i < 10; i++){

for (j=0;j<freq[i]; j++) {

printf("%d ", i);

}

}
return 0;
}