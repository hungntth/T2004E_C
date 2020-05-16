#include <stdio.h>
int main(){
	int n,b;
	int a=0;
	printf("Nhap so: ");
	scanf("%d",&n);
	for(a;n>0;n/10){
		b=n%10;
		a+=b;
		n/=10;
	}printf("%d",a);
	
}
