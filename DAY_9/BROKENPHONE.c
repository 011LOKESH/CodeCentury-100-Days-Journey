#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d",&x,&y);
	    if (x>y)
	    {
	        printf("NEW PHONE\n");
	    }
	    else if (x==y)
	    {
	        printf("any\n");
	    }
	    else 
	    {
	        printf("repair\n");
	    }
	}
	return 0;
}

