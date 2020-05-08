#include <stdio.h>
#include <math.h>    

int main (){
	float a,b,c;
	printf("giai phuong trinh bac 2: ax^2 + bx + c = 0 \n");
	printf("nhap so a vao day \n");
	scanf("%f",&a);
	printf("nhap so b vao day \n");
	scanf("%f",&b);
	printf("nhap so c vao day \n");
	scanf("%f",&c);
	printf("giai phuong co dang : %fx^2 + %fx + %f = 0 \n",a,b,c);
	int delta= b*b-4*a*c;
	float xx=-c/b;
	float x12=-b/(2*a);
	float x1=(-b-sqrt(delta))/(2*a);
	float x2=(-b+sqrt(delta))/(2*a);
	if(a==0){
		printf("phuong trinh co nghiem la x = %f)",xx);
	}else{
		if(b==0){
			printf("phuong trinh vo nghiem");
		}else{
			if(delta<0){
				printf("phuong trinh vo nghiem");
			}else{if(delta==0){
				printf("phuong trinh co nghiem kep x1 = x2 = %f",x12);
				}else{
					printf("phuong trinh co 2 nghiem x1 = %f, x2 = %f",x1,x2);
			}
			}
		}
	}
	
}

