#include <stdio.h>
int main (){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d:",i+1);
		scanf("%d",&arr[i]); 
	}
	int h = arr[0];
	for(int i=1;i<n;i++){
		if (arr[i]%2==0){
			h = arr[i];
		}
	}
	if(h == arr[0] && arr[0]%2!=0){
		printf("ko co so nao la so chan");
	}else{
		printf("so chan cuoi la: %d",h);
	}
}
