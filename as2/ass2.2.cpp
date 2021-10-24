#include <stdio.h>
#include <math.h>
main (){
	float p,i,n,m,f;
	printf("nhap so von  ban dau: ");
	scanf("%f",&p);
	printf("nhap lai xuat hang nam: ");
	scanf("%f",&i);
	printf("nhap so nam: ");
	scanf("%f",&n);
	printf("so lan ghep lai trong nam: ");
	scanf("%f",&m);
	
	f = p*pow(1+(i/m),(n*m));
	printf("So tien lai nhan duoc la:%f",f);
}
