#include <stdio.h>
main(){
	int a;
	printf("Nhap vao 1 so: ");
	scanf("%d",&a);
	switch (a){
		case 2:
			printf("day la thu 2");
			break;
		case 3:
			printf("day la thu 3");
			break;
		case 4:
			printf("day la thu 4");
			break;
		case 5:
			printf("day la thu 5");
			break;
		case 6:
			printf("day la thu 6");
			break;
		case 7:
			printf("day la thu 7");
			break;
		case 8:
			printf("day la chu nhat");
			break;
		dafault:
			printf("day khong phai ngay trong tuan");
	}
}
