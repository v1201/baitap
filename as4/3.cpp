#include <stdio.h>
#include <math.h>
int main (){
	int a, b, c;
	printf("nhap do dai canh a : ");
	scanf("%d",&a);
	printf("nhap do dai canh b : ");
	scanf("%d",&b);
	printf("nhap do dai canh c : ");
	scanf("%d",&c);
	while (a+b<c && a + c < b && b + c < a){
	printf("nhap do dai canh a : ");
	scanf("%d",&a);
	printf("nhap do dai canh b : ");
	scanf("%d",&b);
	printf("nhap do dai canh c : ");
	scanf("%d",&c);
	}
	int P= a+b+c;
	int p =P/2 ;
	int S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("chu vi tam giac la: %d\n",P);
	printf("dien tich tam giac la:%d\n",S);
}
