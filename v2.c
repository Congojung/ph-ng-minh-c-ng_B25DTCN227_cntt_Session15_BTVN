#include <stdio.h>
int tong(int n){
	if(n<0){
	n=-n;
	}
int sum=0;
while(n>0){
	sum+=n%10;
	n/=10;
	}
	return sum;
	}
int main(){
	int a;
	printf("nhap so n");
	scanf("%d",&a);
	printf("tong cac chu so cua n la %d",tong(a));
	return 0;
}
