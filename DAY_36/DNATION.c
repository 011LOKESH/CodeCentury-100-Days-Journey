#include <stdio.h>

int main(void) {
	int t,x,y,a;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d ",&x,&y);
	    a=abs(x-y);
	    printf("%d\n",a);
	}
	return 0;
}

