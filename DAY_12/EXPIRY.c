#include <stdio.h>

int main(void) {
	int t,n,m,k,a;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d ",&n,&m,&k);
	    a=n/k;
	    if (n<=m*k)
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

