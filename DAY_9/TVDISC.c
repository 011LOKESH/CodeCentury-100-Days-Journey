#include <stdio.h>

int main(void) {
	int t,a,b,c,d,e,f;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    e=a-c;
	    f=b-d;
	    if (e>f)
	    {
	        printf("second\n");
	    }
	    else if (e==f)
	    {
	        printf("any\n");
	    }
	    else 
	    {
	        printf("first\n");
	    }
	}
	return 0;
}

