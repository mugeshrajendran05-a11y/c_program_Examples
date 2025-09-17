#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",a&1);
	if((a&1)==1)
	printf("%d is odd",a);
	else
	printf("%d is even",a);
	return 0;
}