#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
void concat(char s1[], char s2[]){
	strcat(s1," ");
	strcat(s1,s2);
}
int main(){
	char str1[20],str2[20];
	printf("Enter the first string: ");
	scanf("%s",str1);
	printf("Enter the secon string: ");
	scanf("%s",str2);
	concat(str1,str2);
	printf("The concatenated string: %s",str1);
	
	return 0;
}

=======
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
>>>>>>> 0d263103c0233ffb0974a0d0a2a74aa9c2664a96
