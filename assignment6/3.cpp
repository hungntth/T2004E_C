#include <stdio.h>
int main()
{
 int ary[5];
 for(int i = 0; i < 5; i++)
 {
 printf("nhap so thu %d : ",i);
		scanf("%d",&ary[i]);
 for(int j = 0; j < i; j++)
 while(ary[j] == ary[i])
 {
 printf("nhap lai so thu %d : ",i);
		scanf("%d",&ary[i]);
 }
 }
}
