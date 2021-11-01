#include <stdio.h>
int main(){
	int n, a;
	long s = 0;
	printf ("nhap n: ");
	scanf ("%d",&n);
	printf("cac uoc so la:\n");
	for (a = 1; a<=n; a++){
	if (n%a==0){
		printf ("%d\n",a);
		s+=a;
	}
	printf("\ntong cac uoc la:%d",s);
}
}
