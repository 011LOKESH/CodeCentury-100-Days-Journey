https://www.codechef.com/problems/CABS

#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d",&x,&y);
	    if (x > y)
	    printf("SECOND\n");
	    else if (x==y)
	    printf("ANY\n");
	    else 
	    printf("FIRST\n");
	}
	return 0;
}

