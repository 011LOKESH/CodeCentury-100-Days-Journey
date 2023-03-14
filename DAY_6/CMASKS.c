https://www.codechef.com/problems/CMASKS?tab=statement

#include <stdio.h>

int main(void) {
	int t,x,y,a,b;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d",&x,&y);
	    a=x*100;
	    b=y*10;
	    if (a>=b)
	    printf("CLOTH\n");
	    else if (a<b)
	    printf("DISPOSABLE\n");
	    
	}
	return 0;
}

