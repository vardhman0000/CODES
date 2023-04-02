//WAP using switch case to check that an input alphabet is vowel or consonant
#include<stdio.h>
int main(){
    char alpha ;
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    printf("Enter Alphabet : ");
    scanf("%c",&alpha);

    switch(alpha){
        case 65 : printf("Vowel!!");
        break;
        case 69 : printf("Vowel!!");
        break;
        case 73 : printf("Vowel!!");
        break;
        case 79 : printf("Vowel!!");
        break;
        case 85 : printf("Vowel!!");
        break;
        case 97 : printf("Vowel!!");
        break;
        case 101 : printf("Vowel!!");
        break;
        case 105 : printf("Vowel!!");
        break;
        case 111 : printf("Vowel!!");
        break;
        case 117 : printf("Vowel!!");
        break;
        default : printf("Consonant!!");
        
    }
}