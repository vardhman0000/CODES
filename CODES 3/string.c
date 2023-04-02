/*

#******************************************************#
#                 STRING FUNCTIONS                     #
#******************************************************#

--> Header File - <string.h>
--> Data Type - char

# strlen() - Gives Length of String
# strrev() - Reverses a String
# strcpy(destination, source) - copy value from one variale to another
# strncpy(destination, source, n) - copies value upto specified 
# strcat(source, new_string) - Joins new string with source string
# strcmp(str1, str2) - Compares and returns 0 if equl 
# stricmp(str1, str2) - Treates LowerCase and UpperCase as equal
# strncmp(str1, str2, n) - Comapares until index n
# strlwr(str1) - Converts to Lowercase
# strupr(str1) - Converts to UpperCase

null character '\0' --> only needed in set
format specifier "%s"
char greeting[] = "Hello" ;
char greeting[6] = {"H", "e", "l", "l", "o", "\0"} ;
char *greeting = "Hello" ;
gets(str) - 
puts() - will add \n automatically

#******************************************************#
#                CHARACTER FUNCTIONS                   #
#******************************************************#

--> Header File - ctype.h

# isalpha() - non zero value if alphabet -- zero if non - alphabet
# isalnum() - 
# isdigit() - 
# islower() - 
# isupper() -
# tolower() - Converts to LowerCase
# toupper() - Converts to UpperCase

#******************************************************#
#                   MATH FUNCTIONS                     #
#******************************************************#

--> Header File - math.h

# abs() - -ve --> +ve : Absolute vaalue of given nymber
# ceil(number) - 3.6 -- > 4 
# floor(number) - 3.6 --> 3
# pow(d1, d2) - d1 raise to power d2
# sqrt(number) - 4 --> 2

*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[25] ;
    printf("Enter String : ");
    scanf("%s", &str);
    printf("String is : %s", str);
    printf("\nLength is : %d", strlen(str));
}