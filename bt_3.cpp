#include <stdio.h>
int n,sum;
int main() {

	printf("nhap vao mot so nguyen duong: ");
	scanf("%d",&n);

	while (n<0) {
		printf("moi nhap lai: ");
		scanf("%d",&n);
	}

	for (int i =1;i<=n;i++) {
		sum+=i;
	}
	printf("Tong= %d",sum);

	return 0;
}
