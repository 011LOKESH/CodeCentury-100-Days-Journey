#include <stdio.h>

int main(void) {
	int t,x,y,z;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d",&x,&y,&z);
	    printf("%d\n",((x*5)+(y*10))/z);
	}
	return 0;
}

