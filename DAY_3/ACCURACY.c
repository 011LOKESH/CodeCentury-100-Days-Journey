https://www.codechef.com/problems/ACCURACY?tab=statement

#include <stdio.h>

int main(void) {
	int a,x,t;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d",&x);
	    a = 3-(x%3);
	    if (x%3!=0)
	    printf("%d\n",a);
	    else 
	    printf("0\n");
	}
	return 0;
}

