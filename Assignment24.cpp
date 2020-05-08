#include <stdio.h>
#include <math.h> 
int main (){
	int a,b,c;
	printf("Hay nhap so do 3 canh cua tam giac \nCanh dau tien la: \n");
	scanf("%d",&a);
	printf("Canh tiep theo: \n");
	scanf("%d",&b);
	printf("Canh cuoi cung: \n");
	scanf("%d",&c);
	int p = (a+b+c);
	float p2=p/2;
	float s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	if(a+b<c){
		printf("Day khong phai 3 canh tam giac \n");
	}else{
		if(a+c<b){
		printf("Day khong phai 3 canh tam giac \n");	
		}else{if(b+c<a){
		printf("Day khong phai 3 canh tam giac \n");		
		}else{
			printf("Tam giac nay co chu vi la %d va dien tich la %f",p,s);
		}
		}
	}
}
