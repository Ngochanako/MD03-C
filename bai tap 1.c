#include<stdio.h>
#include<math.h>

int main(){
	float radious;
	do{
	scanf("%f",&radious);}
	while(radious<=0);
	const float PI=3.14;
	float area=2*PI*radious,primeter=PI*pow(radious,2);
	printf("%.2f %.2f",area,primeter);
	
	
}
