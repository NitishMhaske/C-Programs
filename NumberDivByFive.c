#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int CheckValue(int num){
    if(num%5==0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{   
    int n;
    BOOL bRet=FALSE;
    
    printf("Enter the number ::\t");
    scanf("%d",&n);
    
    bRet = CheckValue(n);
    
    if(bRet==TRUE){
        printf("Number is divisible by 5");
    }
    else{
        printf("Number is not divisible by 5");
    }
    return 0;
}
