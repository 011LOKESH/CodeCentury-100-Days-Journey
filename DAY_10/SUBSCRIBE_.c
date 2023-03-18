https://www.codechef.com/problems/SUBSCRIBE_

#include <stdio.h>

int main(void) {
	int t,n,x,a;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d",&n,&x);
	    a=n/6;
	    if (n%6==0)
	    {
	        printf("%d\n",(n/6)*x);
	    }
	    else 
	    {
	        printf("%d\n",(a+1)*x);
	    }
	    
	}
	return 0;
}

