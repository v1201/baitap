#include <stdio.h>
int main(){
	float s , i=1 , n;
	printf("nhap n= ");
	scanf("%f",&n);
	while(i <= n){
     s = s + 1/i;
     i++;
  }
  printf("ket qua la: %f",s);
}
