#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap so thu nhat \n");
	scanf("%d",&a);	
	printf("nhap so thu hai \n");
	scanf("%d",&b);	
	printf("nhap so thu ba \n");
	scanf("%d",&c);
	if(a<b){
				if(a<c){
				printf("so nho nhat la %d",a);
				}else{
				printf("so nho nhat la %d",c);
			}}else{if(b<c){
				printf("so nho nhat la %d",b);
				}else{
					printf("so nho nhat la %d",c);
				}
				
			}
	
}
