#include <stdio.h>
int i,number=5;
int main() {
	printf("nhap vao mot so nguyen: ");
	scanf("%d",&i);
	while (i!=number) {
	printf("nhap lai so nguyen: ");
	scanf("%d",&i)	;
	}
	return 0;
}
