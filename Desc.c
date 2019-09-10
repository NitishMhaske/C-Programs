#include <stdio.h>
void Display(int count){
    for(int i=count;i>0;i--){
        printf("\n%d",i);
    }
}
int main()
{
    printf("Enter Number : \t");
    int n;
    scanf("%d",&n);
    Display(n);
    return 0;
}
