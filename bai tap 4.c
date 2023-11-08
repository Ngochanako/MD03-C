#include<stdio.h>

int main(){
	int number1,number2,number3;
	scanf("%d %d %d",&number1,&number2,&number3);
	int min=number1,max=number1;
	if(number2<min) {min=number2;}
	if(number3<min){min=number3;}
	printf("Gia tri min la: %d\t",min);
	if(number2>max) {
	max=number2;}
	if(number3>max){
	 max=number3;}
	printf("Gia tri max la: %d",max);
}
