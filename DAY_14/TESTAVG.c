#include <stdio.h>

int main(void) {
	int t,a,b,c;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    if ((a+b)/2<35 || (a+c)/2<35 || (b+c)/2<35)
	    {
	        printf("fail\n");
	    }
	    else 
	    {
	        printf("pass\n");
	    }
	}
	return 0;
}

