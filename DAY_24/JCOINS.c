#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d ",&x,&y);
	    printf("%d\n",(x*10)+(y*5));
	}
	return 0;
}

