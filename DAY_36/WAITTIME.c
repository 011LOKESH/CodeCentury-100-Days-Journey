#include <stdio.h>

int main(void) {
	int t,x,y,a;
	scanf("%d\n",&t);
	while (t--)
	{
	    scanf("%d %d ",&x,&y);
	    printf("%d\n",x*7-y);
	}
	return 0;
}

