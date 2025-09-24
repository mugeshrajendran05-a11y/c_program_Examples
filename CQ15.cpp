#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%3==0 && a%7==0)
	printf("%d its divisible by 3 and 7",a);
	else if(a%3==0 )
	printf("%d its divisible by 3",a);
	else if(a%7==0)
	printf("%d its divisible by 7",a);
	else
	printf("%d its not divisible",a);
	return 0;
	
}