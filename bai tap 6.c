#include<stdio.h>
#include<math.h>

int main(){
	int year;
	scanf("%d",&year);
	int old=2023-year;
	(old%2==0)? printf("tuoi la so chan"): printf("tuoi la so le");
}
