#include <stdio.h>
int main(){
	int num;
	printf("nhap so bat ky: ");
	scanf("%d",&num);
	//if(num >0 && num <= 9999){
	//	int n1= num,n2=0;
	//	n2=n2*10+n1%10;
	//	n1 /= 10;
	//	if(n1>0){
	//		n2=n2*10+n1%10;
	//		n1 /=10;
	//		if(n1>0){
	//			n2=n2*10+n1%10;
	//		n1 /=10;
	//		if(n1>0){
	//			n2=n2*10+n1%10;
	//		n1 /=10;
	//		}
	//		}
	//	}
	//	printf("%d",n2);
	//	}else{
	//		printf("toang");
	//	}

		int n1= num,n2=0;
		for( ;n1>0;n1/10){
			n2=n2*10+n1%10;
			n1/=10;

		}		printf(" %d ",n2);

	
	}
