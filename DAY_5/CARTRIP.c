#include <stdio.h>

int main(void) {
	int t,x;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d",&x);
	    if (x>300)
	    {
	        printf("%d\n",x*10);
	    }
	    else 
	    {
	        printf("%d\n",300*10);
	    }
	    
	}
	return 0;
}

