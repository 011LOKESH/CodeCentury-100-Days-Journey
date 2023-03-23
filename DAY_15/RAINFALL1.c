#include <stdio.h>

int main(void) {
	int t,x;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d",&x);
	    if(x<3)
	    {
	        printf("light\n");
	    }
	    else if (x>=3 && x<7)
	    {
	        printf("moderate\n");
	    }
	    else 
	    {
	        printf("heavy\n");
	    }
	}
	return 0;
}

