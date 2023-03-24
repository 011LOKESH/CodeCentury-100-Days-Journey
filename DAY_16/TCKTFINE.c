#include <stdio.h>

int main(void) {
	int t,x,p,q,a;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d",&x,&p,&q);
	    a=p-q;
	    printf("%d\n",a*x);
	}
	return 0;
}

