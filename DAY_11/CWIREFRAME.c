#include <stdio.h>

int main(void) {
	int t,a,b,x,y,c,d;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d ",&a,&b,&c);
	    x=a+b;
	    y=4*x;
	    d=y*c/2;
	    printf("%d\n",d);
	}
	return 0;
}

