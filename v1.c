#include <stdio.h>



int hieu(int a,int b){
	if (a>b) return a-b;
	else return b-a;
	}
int tich(int a,int b){  
    return a*b;
}
int main(){
	int x,y;
	printf("nhap so x ");
	scanf("%d",&x);
	printf("nhap so y ");
	scanf("%d",&y);
	printf("Hieu giua 2 so la %d",hieu(x,y));
	printf("tich giua 2 so la %d",tich(x,y))
return 0;
}

