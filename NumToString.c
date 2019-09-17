#include<stdio.h>
#include<string.h>
void Display(int num){
   char* names[] = {"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
    for (int i = 0; i < 10 ; i++)
   {
    if(i==num)
    printf("%s", names[num]);
   } 
}

int main(){
    int iValue=0;
    scanf("%d",&iValue);
    Display(iValue);
}
