https://www.codechef.com/problems/ONEMORE

#include <stdio.h>

int main(void) {
	int t,a,b;
    b = 24;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d",&a);
	    if (b<a)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

	return 0;
}

