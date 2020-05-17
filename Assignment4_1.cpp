#include <stdio.h>
int main(){
	int a,b,c;
	int d=0;
		printf("nhap canh thu nhat: \n");
		scanf("%d",&a);
		printf("nhap canh thu hai: \n");
		scanf("%d",&b);
		printf("nhap canh thu ba: \n");
		scanf("%d",&c);
		d=d+1;
	for( a,b,c,d=0; a+b<=c || a+c<=b || b+c<=a;d+1 ){
		int d=d+1;
		printf("nhap lai canh thu nhat lan %d: \n",d);
		scanf("%d",&a);
		printf("nhap lai canh thu hai lan %d: \n",d);
		scanf("%d",&b);
		printf("nhap lai canh thu ba lan %d: \n",d);
		scanf("%d",&c);	
	}
	printf("Nhap chinh xac.");
}
