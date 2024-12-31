#include<stdio.h>
int main(){
	printf("Enter number:");
	int num,num2=0,digit;
	scanf("%d",&num);
	
	for(;num>0;){
		digit=num%10;
		num2=num2*10+digit;
		num=num/10;
	}
	printf("%d",num2);
}
