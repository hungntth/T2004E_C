#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap so thu nhat \n");
	scanf("%d",&a);	
	printf("nhap so thu hai \n");
	scanf("%d",&b);	
	printf("nhap so thu ba \n");
	scanf("%d",&c);
	int x = a -b -c;
	int x1 = b-a-c;
	int x2 = c-b-a;
	if (x>=0){
		printf("max = %d",a);
	}else{
		if (x1>=0){
			printf("max = %d",b);
		}else{
			printf("max = %d",c);
		}
	}
	
}
