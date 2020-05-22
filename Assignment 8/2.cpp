#include <stdio.h>
int main(){
	int ary [100];
	int n;
	printf("Mang nay co bao nhieu so: \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	int a=0;
	int max=0;
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			a++;
			if(a>max){
				max=a;
			}
		}else{
			a=0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat mang la: %d \n",max);
	int b=0,c=0;
	int max1=0;
	int sum=0;
	for (int i=0;i<n;i++){
		if(ary[i]>0){
			b++;
			sum += ary[i];
			if(sum>max1){
				max1=sum;
				c=b;
				
			}
		}else{
			b=0;
			sum=0;
		}
		
	}
	printf("Chuoi so duong co tong lon nhat co %d chu so va tong la %d.",c,sum);
}
