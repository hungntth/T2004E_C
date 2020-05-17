#include <stdio.h>
int main (){
	int n;
	printf("Nhap so : \n");
	scanf("%d",&n);
	if(n<0 && n>10000){
		printf("Sai so");
	}else{if(n<10){
		printf("Nghich dao %d",n);
	}else{if(n<100){
		int c1=n/10;
		int c2=n-c1*10;
		int c =c2*10+c1;
			printf("Nghich dao %d",c);
			}else{if(n<100){
			
		int a1=n/100;
		int a2=(n-a1*100)/10;
		int a3=(n-a1*100-a2*10);
		int a=a3*100+a2*10+a1;
			printf("Nghich dao %d",a);
		
	}else{
	
		int b1=n/1000;
		int b2=(n-b1*1000)/100;
		int b3=(n-b1*1000-b2*100)/10;
		int b4=n-b1*1000-b2*100-b3*10;
		int b=b3*100+b2*10+b1+b4*1000;
			printf("Nghich dao %d",b);

	}}}}}
	
