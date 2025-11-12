#include <stdio.h>
int tongcacphantu(int n){
	int sum=0;
	sum=(n*(n+1))/2; 
return sum;
}
int main(){
	int a;
	printf("nhap so phan tu cua mang ");
	scanf("%d", &a);
	printf(" tong cua mang so nguyen la %d",tongcacphantu(a));
	return 0;
	}
