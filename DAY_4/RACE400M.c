https://www.codechef.com/problems/RACE400M?tab=statement

#include <stdio.h>

int main(void) {
	int t,x,y,z;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d",&x,&y,&z);
	    if (x<y&& x<z)
	    {
	    printf("ALICE\n");
	    }
	    else if (y<z)
	    {
	        printf("BOB\n");
	    }
	    else 
	    {
	        printf("CHARLIE\n");
	    }
	}
	return 0;
}

