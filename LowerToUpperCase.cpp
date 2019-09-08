/**
* The program implements an application that
* simply converts Alphabets from Lowercase to Upeercase 
* displays to the standard output.
*
* @author :  Nitish Mhaske
* @version 1.0 
*/

#include <stdio.h>
#include<iostream> 
using namespace std; 
void Displayconvert(char);   
void Displayconvert(char str) 
{ 
        if (str>='a' && str<='z') {
            //str = str - 32;
            printf("%c",str-32);
        }
        else if(str>='A' && str<='Z') {
            //str = str + 32;
            printf("%c",str+32);
        }
} 
   
int main() 
{ 
    char cValue='A'; 
    Displayconvert(cValue); 
    return 0; 
} 
