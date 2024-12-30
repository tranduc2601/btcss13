#include <stdio.h>
#include <stdlib.h>

int gcd (int a,int b){
	while (b!=0){
		int temp = b;
		b= a%b;
		a = temp; 
	} 
	return abs(a); 
} 


int main(){
	int s,l;
	printf(" hay nhap tham so thu 1: ");
	scanf("%d",&s);
	printf(" hay nhap tham so thu 2: ");
	scanf("%d",&l);
	int result = gcd (s,l);
	printf("uoc chung lon nhat cua 2 so vua nhap la %d",result); 
	return 0;
}
