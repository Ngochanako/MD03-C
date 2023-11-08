#include<stdio.h>

int main(){
	float math,literature,english;
	scanf("%f %f %f",&math,&literature,&english);
	float total=math+literature+english;
	float average=total/3;
	printf("Diem trung binh 3 mon la: %.2f.Tong diem 3 mon la: %.2f",average,total);
	return 0;
}
