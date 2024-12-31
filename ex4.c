#include<stdio.h>
int main(){ 
	float radius,area,pi=3.14;
	printf("Enter the radius:");
	scanf("%f",&radius);
	
	area=4/3*pi*radius*radius*radius;
	printf("%f",area); 
}
