#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p,n;
	printf("Mang can bao nhieu so: \n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",(p+i));
	}
	int a=0; //so luong so duong
	int max=0;
	for(int i=0;i<n;i++){
		if(*(p+i)>0){
			a++;
			if(a>max){
				max =a;
			}
		}else{
			a=0;
		}
	}
	printf ("So luong so duong lien tiep lon nhat la :%d \n",max);
	int b=0,c=0;
	int max1=0;
	int sum=0;
	for (int i=0;i<n;i++){
		if(*(p+i)>0){
			b++;
			sum += *(p+i);
			if(sum>max1){
				max1=sum;
				c=b1;
				
			}
		}else{
			b=0;
			sum=0;
		}
		
	}
	printf("Chuoi so duong co tong lon nhat co %d chu so va tong la %d.",c,sum);
}
