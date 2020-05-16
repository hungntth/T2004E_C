#include <stdio.h>
int main(){
	int n;
	int b;
	printf("Nhap so: ");
	scanf("%d",&n);
	for(;n>0;n/10){
		n=n/10;
		b++;
	}printf("%d",b);
	
}
