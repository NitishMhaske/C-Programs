#include<stdio.h>

int findTotalDigits(int no){
	int fo=0;
	if(no == 0){
		return 0;
	}
	fo=no%10;
	return (fo+findTotalDigits(no/10));
}

int main(){
	int no;
	int totalDigits = 0;

	printf("Enter a number : ");
	scanf("%d",&no);

	totalDigits = findTotalDigits(no);
	printf("Addition of digits in the number is %d\n",totalDigits);
}
