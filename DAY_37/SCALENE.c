#include <stdio.h>

int main(void) {
	int t,x,y,z;
	scanf("%d\n",&t);
	while (t--)
	{
	    scanf("%d %d %d ",&x,&y,&z);
	    if (x!=y && x!=z && y!=z)
	    printf("yes\n");
	    else 
	    printf("no\n");
	}
	return 0;
}

