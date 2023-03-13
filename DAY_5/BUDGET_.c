https://www.codechef.com/problems/BUDGET_

#include <stdio.h>

int main(void) {
	int t,x,y,a;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d",&x,&y);
	    a=30*y;
	    if (x>=a)
	    {
	        printf("YES\n");
	    }
	    else if (x<a)
	    {
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

