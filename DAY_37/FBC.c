#include <stdio.h>

int main(void) {
	int t,x,y,a;
	scanf("%d\n",&t);
	while (t--)
	{
	    scanf("%d %d ",&x,&y);
	    a=abs(y-x);
	    printf("%d\n",a);
	}
	return 0;
}

