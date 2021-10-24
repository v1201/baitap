#include <stdio.h>
#include <math.h>
main (){
int a, b;
printf("nhap so can dao nguoc: ");
scanf("%d",&a);
b=0;
b=(b*10)+(a%10);
a=a/10;
if (a!=0){
	b=(b*10)+(a%10);
	a=a/10;
	if (a!=0){
		b=(b*10)+(a%10);
		a=a/10;
		if (a!=0){
			b=(b*10)+(a%10);
			a=a/10;
			printf("day la so dao nguoc:%d",b);
		}else{
			printf("day la so dao nguoc:%d",b);
	}}else{
		printf("day la so dao nguoc:%d",b);
}}else{
	printf("day la so dao nguoc:%d",b);
}
}
