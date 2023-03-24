#include <stdio.h>

int main(void) {
	int t,x,y,z;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d ",&x,&y,&z);
	    if (x*10>=y)
	    {
	        printf("%d\n",y*z);
	    }
	    else if(x*10<=y)
	    {
	        printf("%d\n",x*z*10);
	    }
	}
	return 0;
}

