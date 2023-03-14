#include <stdio.h>

int main(void) {
	int t,k,n,m,a;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d ",&n,&m,&k);
	    a=(k+n);
	    if (a<=m)
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


