https://www.codechef.com/problems/MINHEIGHT

#include <stdio.h>

int main(void) {
	int x,h,t;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d",&x,&h);
	    if (x<h)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
	return 0;
}

