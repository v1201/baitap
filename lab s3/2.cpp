#include <stdio.h>
#include <math.h>

main(){
	int a,b;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	if (a>=b){
		int c = a/b;
		printf("ket qua: %d",c);
	}else{
		int c = a*b;
		printf("ket qua:%d",c);
	}
}
