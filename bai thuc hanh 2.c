#include<stdio.h>

int main(){
	int length,height;
	printf("Nhap chieu dai va Nhap chieu rong:\n");
	scanf("%d %d",&length,&height);
	int area=length*height,perimeter=(length+height)*2;
	printf("%d %d",area,perimeter);
	return 0;
	
}
