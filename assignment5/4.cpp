#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	if(a*b==0){
		printf("Sai so");
	}else{
		for(c = 1; c <= a || c <= b; c++) {
   if( a%c == 0 && b%c == 0 )
      d = c;
   }

   printf("USCLN = %d", d);
}
}
