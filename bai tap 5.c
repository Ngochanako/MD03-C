#include<stdio.h>
#include<conio.h>

int main(){
	int num,margin,reverse=0,sum=0;
	scanf("%d",&num);
	while(num>0){
		margin=num%10;
		num=num/10;
		sum+=margin;
		reverse=margin+reverse*10;		
	}
	printf("%d %d",sum,reverse);
	return 0;
}
