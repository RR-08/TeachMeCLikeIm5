/* 
------------------------------------------------------------------------------------
Strings are used for storing text/characters.

In C, you must use the char type and create an array of characters to make a string.

Note:You have to use double quotes ("").

Methods for creating/intializing strings in C

I) Assigning a string literal without size: 

    char str[] = "Code"; 

II)  Assigning a string literal with a predefined size

    char str[5] = "Code";

    Note: always declare a string with a size equal to or greater than n+1.

III) Assigning character by character with size: 

    char str[14] = { 'C','o','d','e','\0'};

    Note:remember to set the end character as ‘\0’ which is a null character.

IV) Assigning character by character without size:

    char str[] = { 'C','o','d','e','\0'};


Note: Arrays and strings are second-class citizens in C; they do not support the assignment operator once it is declared.
      char c[100];
      c = "C programming";  // Error! array type is not assignable. 
------------------------------------------------------------------------------------
*/

// Code here explaining concept with comments to guide

#include<string.h>  // Header file that includes Strlen function to find length of string
#include<stdio.h>

int main()
{
    int len1, len2, len_2, len3, len4;  // Intializing lengths to check the length of string

    char str1[]="Code";  // Initializing string using Method I
    printf("%s\n", str1);
    len1 = strlen(str1);

    printf("Length of %s is %d", str1, len1);  // Lenth would be 4

    char str2[5]="Code";  // Intializing string using Method II
    char str_2[4]="Code";
    printf("%s\t%s\n", str2, str_2);
    len2 = strlen(str2);
    len_2 = strlen(str_2);  // This might give incorrect value of length as the array size is less than (actual length + 1) of the string

    printf("Length of %s is %d", str2, len2);
}
/*
------------------------------------------------------------------------------------
 Challenge: Initialize a string "Inspire Zone" using different methods and find out the first and last occurence of 'n' in the string.

 Hint: look for string functions in C
------------------------------------------------------------------------------------
*/
