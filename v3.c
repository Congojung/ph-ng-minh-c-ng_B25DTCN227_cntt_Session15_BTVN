#include <stdio.h>
int sodaonguoc(int n){
int sodao = 0;
int m=n;
if(n<0){
n=-n;
}
while(n>0){
sodao=sodao*10+n%10;
n/=10;
}
if(m<0) sodao=-sodao;
return sodao;
}
int main(){
	int a;
	printf("nhap so nguyen n ");
	scanf("%d",&a);
	printf("so dao nguoc cua %d la %d",a,sodaonguoc(a));
return 0;
}
