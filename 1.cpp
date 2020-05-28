#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	char a[n][50],s[50];	
	printf("nhap %d chuoi vao : \n",n );
	for (int i = 0; i < n; ++i)
	{
		printf("Chuoi thu %d: \n", i);
		scanf("%s",a[i]);
	}
	printf("Nhap chuoi can tim: \n");
	scanf("%s",s);
	int i=0;
	for (i = 0; i < n; ++i)
	{
		if(strcmp(s,a[i])==0){
			printf("Chuoi can tim nam trong mang \n");
		}
	}
	if(i>=n){
		printf("Chuoi can tim khong nam trong mang \n");	
	}
	return 0;
} 
