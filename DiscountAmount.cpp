#include <stdio.h>
float CalculateAmount(int);

float CalculateAmount(int Amount){
    float DAmount=0.0;
    int dp;
    if(Amount<500){
        printf("Wrong Amount");
    }
    else if(Amount>=500 && Amount<=1500){
        DAmount = (float)10/100 * Amount;
        printf("Discounted Price is :: %.2f",DAmount);
    }
    else if(Amount>1500){
        DAmount = (float)15/100 * Amount;
        printf("Discounted Price is :: %.2f",DAmotunt);
    }
    return DAmount;
}
int main()
{
    int Amount;
    scanf("%d",&Amount);
    //printf("Inside main"); 
    CalculateAmount(Amount);
    return 0;
}
