#include <stdio.h>
int main(){
	int s = 0, n =1, i;
	while(i<100){
		s = s + n;
		n+=2;
		i++;
	}
	printf("tong 100 so le > 0 dau tien la: %d",s);
}
