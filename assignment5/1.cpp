#include <stdio.h>
int main(){
	int a,b;
	int c=0;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	if(a>=b){
		printf("Nhap sai");
		
	}else{
		for(;a<=b;a++){

		c=c+a;
		}printf("%d",c)	;	
	}
}
