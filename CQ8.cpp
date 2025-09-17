#include<stdio.h>
int main (){
	int a,b,c;
	scanf("%d",&a);
	b=a%10;
	if(b%3==0){
	printf("the last digit of %d divisible by 3,\n",a);
}
else{
	printf("th last digi of %d is not divisible by 3,\n",a);
}
return 0;
}


