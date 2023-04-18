#include <stdio.h>

int main(void) {
	int t,x,y,z,a;
	scanf("%d\n",&t);
	while (t--)
	{
	    scanf("%d\n",&x);
	    y=x*1000;
	    z=y/2;
	    a=z/5;
	    printf("%d\n",a);
	}
	return 0;
}

