#include <stdio.h>

int main(void) {
	int t,x,y,a;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d ",&x,&y);
	    a=(y*100)/x;
	    
	    if (a>=50)
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

