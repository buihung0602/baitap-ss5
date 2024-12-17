#include <stdio.h>

int product=1;
int main() {

	for(int i=1;i<=9;i++) {
		printf("bang cuu chuong %d\n",i);

		for (int j=1;j<=10;j++) {
			product=i*j;
			printf("%d x %d = %d\n",i,j,product);
		}

	}

	return 0;
}
