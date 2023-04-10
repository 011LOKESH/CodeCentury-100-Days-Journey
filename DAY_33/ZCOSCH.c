#include <stdio.h>

int main(void) {
	int x;
	scanf("%d",&x);
	if (x>=1 && x<=50)
	printf("100\n");
	else if (x>=51 && x<=100)
	printf("50\n");
	else if (x>100)
	printf("0\n");
	return 0;
}

