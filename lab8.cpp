#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p;
	p=(int*)malloc(5*sizeof(int));
	for(int i=0;i<5;i++){
		printf("Nhap so thu %d: \n",i);
		scanf("%d",(p+i));
	}
	int test;
	for(int i=0;i<5;i++){
		for(int j=i+1;j<6;j++){
			if(*(p+i)>*(p+j)){
				test = *(p+i);
				*(p+i) =*(p+j);
				*(p+j) =test;
				
			}
		}
		
	}	printf("Sap xep lai : \n");
	for(int i=0;i<5;i++){
		printf("%d ",*(p+i));
	}
	int a;
	printf("\n tang them n phan tu: \n");
	scanf("%d",&a);
	int n=a+5;
	p=(int *)realloc(p,n*sizeof(int));
	for (int i=5;i<n;i++){
		printf("nhap tiep %d: \n",i);
		scanf("%d",(p+i));
	}
	int test1;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n+1;j++){
			if(*(p+i)>*(p+j)){
				test1 = *(p+i);
				*(p+i) =*(p+j);
				*(p+j) =test1;
				
			}
		}
		
	}printf("Sap xep lai : \n");
	for(int i=0;i<n;i++){
		printf("%d ",*(p+i));

}
}
