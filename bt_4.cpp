#include <stdio.h>
int n,product=1;

int main () {

	printf("nhap vao mot so nguyen duong tu 1 - 10: ");
	scanf("%d",&n);

	while(n<1 || n>10) {
		printf("moi nhap lai: ");
		scanf("%d",&n);
	}
	
	for (int i=1;i<=10;i++) {
		product= n*i;
		printf("%d x %d = %d\n",n,i,product);
	}

	return 0;
}
