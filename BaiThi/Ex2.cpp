#include <stdio.h>
void avg(int arr[],int n){
	int sum = 0, avg;
	for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
       }
 
    printf("\nTrung binh cong cac so trong day la: %.2f", (float)sum/n);	
}
int main()
{ 
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d:",i+1);
		scanf("%d",&arr[i]); 
	}
	avg(arr ,n);	
}
