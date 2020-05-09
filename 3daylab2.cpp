#include <stdio.h>
int main(){
	int x;
	printf("nhap vao so bat ky: ");
	scanf("%d",&x);
	if(x>=2&&x<8){
		printf("day la ngay thu %d",x);
	}else if(x==8)
	printf("day la ngay chu nhat");
	else {
		printf("khong phai mot ngay nao ca");
	}
	
}
