#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%3==0&&a%5==0)
    printf("%d it is divisible");
    else
    printf("%d it is not divisible");
    return 0;
}