#include<stdio.h>
int main()
{
	int first_angle,second_angle,third_angle,sum;
	
	sum=first_angle+second_angle+third_angle;
	
	
	
	printf("Enter first side of traingle:");
	scanf("%d",&first_angle);
		
	printf("Enter second side of traingle:");
	scanf("%d",&second_angle);
	
	printf("Enter third side of traingle:");
	scanf("%d",&third_angle);
	
	if(sum==180){
		
		printf("Triangle is valid");
	}
	else{
		
		printf("Triangle is invalid");
		
	}
	
	
	return 0;
	
}
